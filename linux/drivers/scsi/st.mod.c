#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x80c8b05d, "module_layout" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0x2138166e, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xf5723ee7, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x61a6ff9, "__class_register" },
	{ 0x99bb8806, "memmove" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbf8f5deb, "scsi_ioctl" },
	{ 0xad487731, "scsi_cmd_ioctl" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x8e394c07, "scsi_ioctl_block_when_processing_errors" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xc149482, "scsi_block_when_processing_errors" },
	{ 0x537040d5, "scsi_device_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xaf38e081, "idr_find" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x15cd3e25, "blk_put_request" },
	{ 0xe39784e5, "blk_rq_map_user" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xb8a7bf2a, "blk_execute_rq_nowait" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x9a88cc76, "blk_get_request" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc01c0295, "__scsi_print_sense" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xfa61f263, "flush_dcache_page" },
	{ 0x5f754e5a, "memset" },
	{ 0xb8f54813, "get_user_pages_fast" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc9a16c73, "page_address" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xaf03a486, "__put_page" },
	{ 0x9d669763, "memcpy" },
	{ 0x934cf0eb, "__blk_put_request" },
	{ 0x83dc37a4, "blk_rq_unmap_user" },
	{ 0xe6c12171, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6325c0dc, "scsi_device_put" },
	{ 0x73aea193, "scsi_set_medium_removal" },
	{ 0xea4ef2f1, "blk_put_queue" },
	{ 0x2c819518, "sdev_prefix_printk" },
	{ 0x526a2e9e, "scsi_autopm_put_device" },
	{ 0xbbe8bae7, "sysfs_create_link" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6cfdd889, "blk_queue_rq_timeout" },
	{ 0x9658af66, "blk_get_queue" },
	{ 0xa6a76ba3, "__alloc_disk_node" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0x69e1d2e, "device_create" },
	{ 0xab9fff11, "cdev_add" },
	{ 0xadbeeaf6, "cdev_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x91715312, "sprintf" },
	{ 0x61275678, "idr_remove" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3bda1697, "scsi_autopm_get_device" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0x489c6f18, "cdev_del" },
	{ 0xe4da128b, "sysfs_remove_link" },
	{ 0xb94bfeb5, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7FC9146821AC1C2DF5C82B7");
