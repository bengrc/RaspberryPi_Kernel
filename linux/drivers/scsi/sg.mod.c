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
	{ 0x39ddd88, "no_llseek" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x3d069fa5, "class_interface_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x196797e3, "scsi_register_interface" },
	{ 0x9c921cae, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xc9a16c73, "page_address" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xa752301f, "sg_scsi_ioctl" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0x97febaa6, "blk_trace_startstop" },
	{ 0x7ff78590, "blk_trace_setup" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xf8c94488, "blk_trace_remove" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xbf8f5deb, "scsi_ioctl" },
	{ 0x8e394c07, "scsi_ioctl_block_when_processing_errors" },
	{ 0xf5eb86ea, "blk_verify_command" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xa9067e93, "blk_rq_map_user_iov" },
	{ 0xd48d7661, "blk_end_request_all" },
	{ 0x7ad33170, "import_iovec" },
	{ 0xb8a7bf2a, "blk_execute_rq_nowait" },
	{ 0xe39784e5, "blk_rq_map_user" },
	{ 0x9a88cc76, "blk_get_request" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x2c819518, "sdev_prefix_printk" },
	{ 0xbbe8bae7, "sysfs_create_link" },
	{ 0x69e1d2e, "device_create" },
	{ 0xab9fff11, "cdev_add" },
	{ 0x91715312, "sprintf" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xadbeeaf6, "cdev_alloc" },
	{ 0xa6a76ba3, "__alloc_disk_node" },
	{ 0xf613720d, "__task_pid_nr_ns" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc01c0295, "__scsi_print_sense" },
	{ 0x9d669763, "memcpy" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x934cf0eb, "__blk_put_request" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60e1284f, "__module_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc149482, "scsi_block_when_processing_errors" },
	{ 0x3bda1697, "scsi_autopm_get_device" },
	{ 0x537040d5, "scsi_device_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xaf38e081, "idr_find" },
	{ 0xe7ef4c7c, "nonseekable_open" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x526a2e9e, "scsi_autopm_put_device" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd040e01a, "module_put" },
	{ 0x6325c0dc, "scsi_device_put" },
	{ 0x15cd3e25, "blk_put_request" },
	{ 0x83dc37a4, "blk_rq_unmap_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x874bc57d, "fasync_helper" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x489c6f18, "cdev_del" },
	{ 0x38142440, "device_destroy" },
	{ 0xe4da128b, "sysfs_remove_link" },
	{ 0x9e4f7df8, "kill_fasync" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xb94bfeb5, "put_disk" },
	{ 0x61275678, "idr_remove" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb40d7cf, "_raw_read_unlock_irqrestore" },
	{ 0x630f2cb8, "_raw_read_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F1286CA686787384BA6BA23");
