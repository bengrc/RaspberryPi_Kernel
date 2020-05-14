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
	{ 0x8c946934, "driver_remove_file" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xc29e28a4, "driver_create_file" },
	{ 0xf5723ee7, "scsi_register_driver" },
	{ 0x9689c582, "__register_chrdev" },
	{ 0x9c921cae, "__class_create" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbf8f5deb, "scsi_ioctl" },
	{ 0x8e394c07, "scsi_ioctl_block_when_processing_errors" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x6325c0dc, "scsi_device_put" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0x537040d5, "scsi_device_get" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x73aea193, "scsi_set_medium_removal" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc149482, "scsi_block_when_processing_errors" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xe8cac471, "blk_rq_map_kern" },
	{ 0x15cd3e25, "blk_put_request" },
	{ 0xb8a7bf2a, "blk_execute_rq_nowait" },
	{ 0xe39784e5, "blk_rq_map_user" },
	{ 0xc4ed5445, "sg_next" },
	{ 0x9a88cc76, "blk_get_request" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2c819518, "sdev_prefix_printk" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x91715312, "sprintf" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x7c1372e8, "panic" },
	{ 0xa6a76ba3, "__alloc_disk_node" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x71c90087, "memcmp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x934cf0eb, "__blk_put_request" },
	{ 0x83dc37a4, "blk_rq_unmap_user" },
	{ 0xe6c12171, "complete" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0xc9a16c73, "page_address" },
	{ 0xc01c0295, "__scsi_print_sense" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0x69e1d2e, "device_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0xb94bfeb5, "put_disk" },
	{ 0x38142440, "device_destroy" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F5C82CCC36FB0DDC5268734");
