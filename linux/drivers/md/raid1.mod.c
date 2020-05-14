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
	{ 0xdf61eede, "unregister_md_personality" },
	{ 0xbaffa1a3, "register_md_personality" },
	{ 0xa8a0d820, "md_wait_for_blocked_rdev" },
	{ 0x4ce6b240, "bio_alloc_mddev" },
	{ 0xee7222a, "md_flush_request" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xe6972f13, "md_bitmap_startwrite" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x43bc2385, "md_write_start" },
	{ 0x508e690f, "bio_devname" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5b9550c0, "bio_copy_data" },
	{ 0x71c90087, "memcmp" },
	{ 0xc9a16c73, "page_address" },
	{ 0x797d3986, "submit_bio_wait" },
	{ 0x4c56e4e6, "bio_trim" },
	{ 0x9e0966f2, "rdev_clear_badblocks" },
	{ 0xccdc585, "md_check_recovery" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x80b7a5b1, "sync_page_io" },
	{ 0xcabb1062, "md_error" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xa98b034b, "md_allow_write" },
	{ 0xbbe8bae7, "sysfs_create_link" },
	{ 0xe4da128b, "sysfs_remove_link" },
	{ 0x91715312, "sprintf" },
	{ 0xbd9074b1, "blk_finish_plug" },
	{ 0x7d705738, "blk_start_plug" },
	{ 0x9702095f, "md_done_sync" },
	{ 0x1c893144, "md_integrity_add_rdev" },
	{ 0x9041035f, "kernfs_notify" },
	{ 0xc515c53c, "md_unregister_thread" },
	{ 0x40be03b5, "blk_queue_flag_clear" },
	{ 0xd9dcf4de, "md_integrity_register" },
	{ 0x3807d1c8, "blk_queue_flag_set" },
	{ 0xff088404, "disk_stack_limits" },
	{ 0x70f96ebd, "blk_queue_max_write_zeroes_sectors" },
	{ 0xbce1353b, "blk_queue_max_write_same_sectors" },
	{ 0x95dee525, "mddev_init_writes_pending" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x54b6389b, "bio_alloc_bioset" },
	{ 0x10513b59, "rdev_set_badblocks" },
	{ 0x801421a6, "bio_add_page" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x76e600d0, "bio_reset" },
	{ 0x20b0bcd7, "md_bitmap_cond_end_sync" },
	{ 0x7e93f565, "md_bitmap_start_sync" },
	{ 0x55d12d88, "md_bitmap_close_sync" },
	{ 0x63f37392, "md_set_array_sectors" },
	{ 0xa8b175ce, "md_bitmap_resize" },
	{ 0x58327de1, "md_register_thread" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x4725e393, "bioset_init" },
	{ 0xaf03a486, "__put_page" },
	{ 0x1ef2cf9c, "bioset_exit" },
	{ 0x7825541a, "mempool_exit" },
	{ 0x27ab8b8a, "mempool_init" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7c4d1df0, "__trace_note_message" },
	{ 0x5f754e5a, "memset" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0xc4a310a3, "bio_chain" },
	{ 0xafa8fedf, "bio_split" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x270dbc06, "badblocks_check" },
	{ 0xdcde4deb, "__tracepoint_block_bio_remap" },
	{ 0xf8ad608d, "bio_clone_fast" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcdfa4faf, "md_cluster_ops" },
	{ 0x7c32d0f0, "printk" },
	{ 0x874a022, "bdevname" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x834175d, "md_bitmap_end_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x17b5922d, "md_wakeup_thread" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x27bf4920, "generic_make_request" },
	{ 0x6a3d2a3d, "md_bitmap_unplug" },
	{ 0x278606ec, "mempool_free" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x16821dd0, "bio_endio" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe35a6081, "md_write_end" },
	{ 0x13a30874, "md_bitmap_endwrite" },
	{ 0x3520612, "bio_put" },
	{ 0xcf0d70ad, "bio_free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "FABE5401FECB591468714A7");
