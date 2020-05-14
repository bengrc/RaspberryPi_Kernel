/*
 * Copyright 2010 - 2011 Broadcom Corporation.  All rights reserved.
 *
 * Unless you and Broadcom execute a separate written software license
 * agreement governing use of this software, this software is licensed to you
 * under the terms of the GNU General Public License version 2, available at
 * http://www.broadcom.com/licenses/GPLv2.php (the "GPL").
 *
 * Notwithstanding the above, under no circumstances may you combine this
 * software in any way with any other Broadcom software provided under a
 * license other than the GPL, without Broadcom's express prior written
 * consent.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/device.h>
#include <linux/cdev.h>
#include <linux/mm.h>
#include <linux/slab.h>
#include <linux/debugfs.h>
#include <linux/uaccess.h>
#include <linux/dma-mapping.h>
#include <linux/broadcom/vc_mem.h>

#define DRIVER_NAME  "vc-mem"

/* Device (/dev) related variables */
static dev_t vc_mem_devnum;
static struct class *vc_mem_class;
static struct cdev vc_mem_cdev;
static int vc_mem_inited;

#ifdef CONFIG_DEBUG_FS
static struct dentry *vc_mem_debugfs_entry;
#endif

/*
 * Videocore memory addresses and size
 *
 * Drivers that wish to know the videocore memory addresses and sizes should
 * use these variables instead of the MM_IO_BASE and MM_ADDR_IO defines in
 * headers. This allows the other drivers to not be tied down to a a certain
 * address/size at compile time.
 *
 * In the future, the goal is to have the videocore memory virtual address and
 * size be calculated at boot time rather than at compile time. The decision of
 * where the videocore memory resides and its size would be in the hands of the
 * bootloader (and/or kernel). When that happens, the values of these variables
 * would be calculated and assigned in the init function.
 */
/* In the 2835 VC in mapped above ARM, but ARM has full access to VC space */
unsigned long mm_vc_mem_phys_addr;
EXPORT_SYMBOL(mm_vc_mem_phys_addr);
unsigned int mm_vc_mem_size;
EXPORT_SYMBOL(mm_vc_mem_size);
unsigned int mm_vc_mem_base;
EXPORT_SYMBOL(mm_vc_mem_base);

static uint phys_addr;
static uint mem_size;
static uint mem_base;

static int
vc_mem_open(struct inode *inode, struct file *file)
{
	(void)inode;

	pr_debug("%s: called file = 0x%p\n", __func__, file);

	return 0;
}

static int
vc_mem_release(struct inode *inode, struct file *file)
{
	(void)inode;

	pr_debug("%s: called file = 0x%p\n", __func__, file);

	return 0;
}

static void
vc_mem_get_size(void)
{
}

static void
vc_mem_get_base(void)
{
}

int
vc_mem_get_current_size(void)
{
	return mm_vc_mem_size;
}
EXPORT_SYMBOL_GPL(vc_mem_get_current_size);

static long
vc_mem_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
	int rc = 0;

	(void) cmd;
	(void) arg;

	pr_debug("%s: called file = 0x%p, cmd %08x\n", __func__, file, cmd);

	switch (cmd) {
	case VC_MEM_IOC_MEM_PHYS_ADDR:
		{
			pr_debug("%s: VC_MEM_IOC_MEM_PHYS_ADDR=0x%p\n",
				__func__, (void *)mm_vc_mem_phys_addr);

			if (copy_to_user((void *)arg, &mm_vc_mem_phys_addr,
					 sizeof(mm_vc_mem_phys_addr))) {
				rc = -EFAULT;
			}
			break;
		}
	case VC_MEM_IOC_MEM_SIZE:
		{
			/* Get the videocore memory size first */
			vc_mem_get_size();

			pr_debug("%s: VC_MEM_IOC_MEM_SIZE=%x\n", __func__,
				 mm_vc_mem_size);

			if (copy_to_user((void *)arg, &mm_vc_mem_size,
					 sizeof(mm_vc_mem_size))) {
				rc = -EFAULT;
			}
			break;
		}
	case VC_MEM_IOC_MEM_BASE:
		{
			/* Get the videocore memory base */
			vc_mem_get_base();

			pr_debug("%s: VC_MEM_IOC_MEM_BASE=%x\n", __func__,
				 mm_vc_mem_base);

			if (copy_to_user((void *)arg, &mm_vc_mem_base,
					 sizeof(mm_vc_mem_base))) {
				rc = -EFAULT;
			}
			break;
		}
	case VC_MEM_IOC_MEM_LOAD:
		{
			/* Get the videocore memory base */
			vc_mem_get_base();

			pr_debug("%s: VC_MEM_IOC_MEM_LOAD=%x\n", __func__,
				mm_vc_mem_base);

			if (copy_to_user((void *)arg, &mm_vc_mem_base,
					 sizeof(mm_vc_mem_base))) {
				rc = -EFAULT;
			}
			break;
		}
	default:
		{
			return -ENOTTY;
		}
	}
	pr_debug("%s: file = 0x%p returning %d\n", __func__, file, rc);

	return rc;
}

#ifdef CONFIG_COMPAT
static long
vc_mem_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
	int rc = 0;

	switch (cmd) {
	case VC_MEM_IOC_MEM_PHYS_ADDR32:
		pr_debug("%s: VC_MEM_IOC_MEM_PHYS_ADDR32=0x%p\n",
			 __func__, (void *)mm_vc_mem_phys_addr);

		/* This isn't correct, but will cover us for now as
		 * VideoCore is 32bit only.
		 */
		if (copy_to_user((void *)arg, &mm_vc_mem_phys_addr,
				 sizeof(compat_ulong_t)))
			rc = -EFAULT;

		break;

	default:
		rc = vc_mem_ioctl(file, cmd, arg);
		break;
	}

	return rc;
}
#endif

static int
vc_mem_mmap(struct file *filp, struct vm_area_struct *vma)
{
	int rc = 0;
	unsigned long length = vma->vm_end - vma->vm_start;
	unsigned long offset = vma->vm_pgoff << PAGE_SHIFT;

	pr_debug("%s: vm_start = 0x%08lx vm_end = 0x%08lx vm_pgoff = 0x%08lx\n",
		 __func__, (long)vma->vm_start, (long)vma->vm_end,
		 (long)vma->vm_pgoff);

	if (offset + length > mm_vc_mem_size) {
		pr_err("%s: length %ld is too big\n", __func__, length);
		return -EINVAL;
	}
	/* Do not cache the memory map */
	vma->vm_page_prot = pgprot_noncached(vma->vm_page_prot);

	rc = remap_pfn_range(vma, vma->vm_start,
			     (mm_vc_mem_phys_addr >> PAGE_SHIFT) +
			     vma->vm_pgoff, length, vma->vm_page_prot);
	if (rc)
		pr_err("%s: remap_pfn_range failed (rc=%d)\n", __func__, rc);

	return rc;
}

/* File Operations for the driver. */
static const struct file_operations vc_mem_fops = {
	.owner = THIS_MODULE,
	.open = vc_mem_open,
	.release = vc_mem_release,
	.unlocked_ioctl = vc_mem_ioctl,
#ifdef CONFIG_COMPAT
	.compat_ioctl = vc_mem_compat_ioctl,
#endif
	.mmap = vc_mem_mmap,
};

#ifdef CONFIG_DEBUG_FS
static void vc_mem_debugfs_deinit(void)
{
	debugfs_remove_recursive(vc_mem_debugfs_entry);
	vc_mem_debugfs_entry = NULL;
}


static int vc_mem_debugfs_init(
	struct device *dev)
{
	vc_mem_debugfs_entry = debugfs_create_dir(DRIVER_NAME, NULL);
	if (!vc_mem_debugfs_entry) {
		dev_warn(dev, "could not create debugfs entry\n");
		return -EFAULT;
	}

	if (!debugfs_create_x32("vc_mem_phys_addr",
				0444,
				vc_mem_debugfs_entry,
				(u32 *)&mm_vc_mem_phys_addr)) {
		dev_warn(dev, "%s:could not create vc_mem_phys entry\n",
			 __func__);
		goto fail;
	}

	if (!debugfs_create_x32("vc_mem_size",
				0444,
				vc_mem_debugfs_entry,
				(u32 *)&mm_vc_mem_size)) {
		dev_warn(dev, "%s:could not create vc_mem_size entry\n",
			 __func__);
		goto fail;
	}

	if (!debugfs_create_x32("vc_mem_base",
				0444,
				vc_mem_debugfs_entry,
				(u32 *)&mm_vc_mem_base)) {
		dev_warn(dev, "%s:could not create vc_mem_base entry\n",
			 __func__);
		goto fail;
	}

	return 0;

fail:
	vc_mem_debugfs_deinit();
	return -EFAULT;
}

#endif /* CONFIG_DEBUG_FS */

/* Module load/unload functions */

static int __init
vc_mem_init(void)
{
	int rc = -EFAULT;
	struct device *dev;

	pr_debug("%s: called\n", __func__);

	mm_vc_mem_phys_addr = phys_addr;
	mm_vc_mem_size = mem_size;
	mm_vc_mem_base = mem_base;

	vc_mem_get_size();

	pr_info("vc-mem: phys_addr:0x%08lx mem_base=0x%08x mem_size:0x%08x(%u MiB)\n",
		mm_vc_mem_phys_addr, mm_vc_mem_base, mm_vc_mem_size,
		mm_vc_mem_size / (1024 * 1024));

	rc = alloc_chrdev_region(&vc_mem_devnum, 0, 1, DRIVER_NAME);
	if (rc < 0) {
		pr_err("%s: alloc_chrdev_region failed (rc=%d)\n",
		       __func__, rc);
		goto out_err;
	}

	cdev_init(&vc_mem_cdev, &vc_mem_fops);
	rc = cdev_add(&vc_mem_cdev, vc_mem_devnum, 1);
	if (rc) {
		pr_err("%s: cdev_add failed (rc=%d)\n", __func__, rc);
		goto out_unregister;
	}

	vc_mem_class = class_create(THIS_MODULE, DRIVER_NAME);
	if (IS_ERR(vc_mem_class)) {
		rc = PTR_ERR(vc_mem_class);
		pr_err("%s: class_create failed (rc=%d)\n", __func__, rc);
		goto out_cdev_del;
	}

	dev = device_create(vc_mem_class, NULL, vc_mem_devnum, NULL,
			    DRIVER_NAME);
	if (IS_ERR(dev)) {
		rc = PTR_ERR(dev);
		pr_err("%s: device_create failed (rc=%d)\n", __func__, rc);
		goto out_class_destroy;
	}

#ifdef CONFIG_DEBUG_FS
	/* don't fail if the debug entries cannot be created */
	vc_mem_debugfs_init(dev);
#endif

	vc_mem_inited = 1;
	return 0;

	device_destroy(vc_mem_class, vc_mem_devnum);

out_class_destroy:
	class_destroy(vc_mem_class);
	vc_mem_class = NULL;

out_cdev_del:
	cdev_del(&vc_mem_cdev);

out_unregister:
	unregister_chrdev_region(vc_mem_devnum, 1);

out_err:
	return -1;
}

static void __exit
vc_mem_exit(void)
{
	pr_debug("%s: called\n", __func__);

	if (vc_mem_inited) {
#if CONFIG_DEBUG_FS
		vc_mem_debugfs_deinit();
#endif
		device_destroy(vc_mem_class, vc_mem_devnum);
		class_destroy(vc_mem_class);
		cdev_del(&vc_mem_cdev);
		unregister_chrdev_region(vc_mem_devnum, 1);
	}
}

module_init(vc_mem_init);
module_exit(vc_mem_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Broadcom Corporation");

module_param(phys_addr, uint, 0644);
module_param(mem_size, uint, 0644);
module_param(mem_base, uint, 0644);
