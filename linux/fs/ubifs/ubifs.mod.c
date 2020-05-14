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
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0x41913caa, "iget_failed" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc39740e3, "drop_nlink" },
	{ 0x1edefae1, "set_anon_super" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x4779cfe7, "make_bad_inode" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0xe08afdc6, "__mark_inode_dirty" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x95accf6b, "__set_page_dirty_nobuffers" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8be5b900, "filemap_fault" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x6e1698a, "hrtimer_active" },
	{ 0xdd339dde, "kill_anon_super" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0xada81651, "is_bad_inode" },
	{ 0x7696f7b3, "pagecache_get_page" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x39ddd88, "no_llseek" },
	{ 0x2fa85053, "__lock_page" },
	{ 0x5e866d85, "prandom_bytes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x60be4842, "deactivate_locked_super" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xdd11629b, "ubi_open_volume" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xfa2dd65a, "inc_nlink" },
	{ 0xf0ef15b4, "list_sort" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5af8d6d9, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0xe7ef4c7c, "nonseekable_open" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1057ef10, "truncate_setsize" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xafa10a99, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe51ef836, "down_write_trylock" },
	{ 0x57585b1b, "end_page_writeback" },
	{ 0xece784c2, "rb_first" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd2b96f5c, "__insert_inode_hash" },
	{ 0xa1e67e88, "inode_owner_or_capable" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0xed6bc39a, "ubi_leb_map" },
	{ 0xff61a8f4, "from_kuid" },
	{ 0xa1549b7a, "ubi_open_volume_nm" },
	{ 0x11089ac7, "_ctype" },
	{ 0x2ec92974, "freezing_slow_path" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x54111370, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x5ae8c86, "write_inode_now" },
	{ 0x23eff81d, "ubi_leb_change" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x7789b64a, "sget" },
	{ 0x5e71d44b, "timespec64_trunc" },
	{ 0xdd932389, "ubi_leb_write" },
	{ 0xa13a9f82, "kunmap" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x627a14b7, "from_kgid" },
	{ 0xf102732a, "crc16" },
	{ 0x84b183ae, "strncmp" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4e66368f, "set_nlink" },
	{ 0x122170da, "crc32_le" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x66011ab6, "ubi_get_device_info" },
	{ 0xa681fe88, "generate_random_uuid" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x7b03a013, "ubi_leb_read" },
	{ 0x7f42aa40, "unlock_page" },
	{ 0xefc2a73f, "generic_file_read_iter" },
	{ 0x310917fe, "sort" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0x68e9f3dc, "migrate_page_move_mapping" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x735ae0dc, "ubi_leb_unmap" },
	{ 0x91518b9d, "file_write_and_wait_range" },
	{ 0x1fbaa35f, "inode_init_once" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x1cdf2c15, "mnt_drop_write_file" },
	{ 0xad8ae2ab, "ubi_close_volume" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb596786, "xattr_full_name" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x9bd2ab3c, "ilookup" },
	{ 0x362f921c, "unregister_shrinker" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x26afbb09, "generic_file_mmap" },
	{ 0x10a22a4a, "wait_for_stable_page" },
	{ 0xc1513e54, "kmap" },
	{ 0xaa6249c, "truncate_inode_pages_final" },
	{ 0x69439a68, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x14926770, "unlock_new_inode" },
	{ 0xa902273d, "mnt_want_write_file" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x29c903f7, "ubi_get_volume_info" },
	{ 0x15a2c0a4, "migrate_page_states" },
	{ 0x3d929250, "clear_page_dirty_for_io" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0xd9282009, "d_tmpfile" },
	{ 0x8c3c7a6c, "register_filesystem" },
	{ 0x29d7561e, "ubi_open_volume_path" },
	{ 0xd1276950, "generic_file_write_iter" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x42801d20, "ubi_sync" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xf484b078, "__test_set_page_writeback" },
	{ 0x84d48255, "iter_file_splice_write" },
	{ 0xc8188127, "iput" },
	{ 0xb8ff71ca, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9c4c6b7, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xc6c85edc, "current_time" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x1a1d9d88, "d_splice_alias" },
	{ 0xe39cfe78, "register_shrinker" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0xb052ec5f, "ubi_is_mapped" },
	{ 0xda976a57, "sync_filesystem" },
	{ 0xf9147ce9, "d_make_root" },
	{ 0xd2802d5c, "pgprot_kernel" },
	{ 0x49970de8, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8a7d02bc, "unregister_filesystem" },
	{ 0x7df44108, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd9f118e4, "writeback_inodes_sb" },
	{ 0xc66f12b4, "filemap_map_pages" },
	{ 0xb81960ca, "snprintf" },
	{ 0x414ed825, "new_inode" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x6eb09fb2, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7d767665, "empty_aops" },
	{ 0x6a6194f2, "crypto_alloc_base" },
	{ 0x16bba777, "grab_cache_page_write_begin" },
	{ 0x50e02795, "clear_inode" },
	{ 0xe4056ce9, "d_instantiate" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0xfa61f263, "flush_dcache_page" },
	{ 0xaf03a486, "__put_page" },
	{ 0xe7d56e4f, "clear_nlink" },
	{ 0x682d5ce7, "iget_locked" },
	{ 0x7f97f2f0, "setattr_prepare" },
	{ 0xb859f38b, "krealloc" },
	{ 0x9538aa66, "migrate_page_copy" },
	{ 0x8f6c75c6, "generic_fillattr" },
	{ 0xf218cc1e, "inode_init_owner" },
	{ 0xbae10e51, "super_setup_bdi_name" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ubi";


MODULE_INFO(srcversion, "6D0447ED4B70D9156BBA7B4");
