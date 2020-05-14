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
	{ 0xe7ef4c7c, "nonseekable_open" },
	{ 0x39ddd88, "no_llseek" },
	{ 0xd07da2bc, "single_release" },
	{ 0x9943b1a3, "seq_read" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x83ef67e5, "misc_deregister" },
	{ 0x4dec644, "proc_mkdir" },
	{ 0x1ef2cf9c, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x42e7859a, "misc_register" },
	{ 0x61a6ff9, "__class_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x4725e393, "bioset_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0x54b6389b, "bio_alloc_bioset" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xe7a36b6d, "bd_set_size" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x109a28bb, "__blkdev_driver_ioctl" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0x3520612, "bio_put" },
	{ 0x27bf4920, "generic_make_request" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x2ec92974, "freezing_slow_path" },
	{ 0x692eea81, "bio_list_copy_data" },
	{ 0x6485d07a, "clear_wb_congested" },
	{ 0xece784c2, "rb_first" },
	{ 0x278606ec, "mempool_free" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x3a32ed08, "set_user_nice" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x69e1d2e, "device_create" },
	{ 0xbdcac414, "device_add_disk" },
	{ 0x3e231a30, "proc_create_single_data" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0xb457b288, "blk_queue_max_hw_sectors" },
	{ 0x8bec0790, "blk_queue_logical_block_size" },
	{ 0x482bbe6c, "blk_queue_make_request" },
	{ 0x23ca38de, "set_blocksize" },
	{ 0x60e1284f, "__module_get" },
	{ 0x82e41ba3, "blkdev_get" },
	{ 0x4238b1ce, "bdget" },
	{ 0x7f6290e0, "blk_alloc_queue" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa6a76ba3, "__alloc_disk_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x27ab8b8a, "mempool_init" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0xd040e01a, "module_put" },
	{ 0x7825541a, "mempool_exit" },
	{ 0xb94bfeb5, "put_disk" },
	{ 0xf64599c3, "blk_cleanup_queue" },
	{ 0x8767fa8d, "del_gendisk" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0xc74ba5e7, "blkdev_put" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0x6415795a, "debugfs_remove" },
	{ 0x54111370, "kthread_stop" },
	{ 0x7f8a9562, "single_open" },
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0x4c9042d2, "kobject_uevent" },
	{ 0x134f1a4a, "kobject_init_and_add" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x508e690f, "bio_devname" },
	{ 0x16821dd0, "bio_endio" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf8ad608d, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0x1a7caec5, "set_wb_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0xc4a310a3, "bio_chain" },
	{ 0xafa8fedf, "bio_split" },
	{ 0x1d3d22ce, "blk_queue_split" },
	{ 0x801421a6, "bio_add_page" },
	{ 0x76e600d0, "bio_reset" },
	{ 0x5f754e5a, "memset" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xca9360b5, "rb_next" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x874a022, "bdevname" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x15cd3e25, "blk_put_request" },
	{ 0x5fe9507e, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xe8cac471, "blk_rq_map_kern" },
	{ 0x9a88cc76, "blk_get_request" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "B54E102470A1133F9747062");
