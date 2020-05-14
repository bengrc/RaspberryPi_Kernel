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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x222263f6, "sb_min_blocksize" },
	{ 0xd9654491, "unload_nls" },
	{ 0x4779cfe7, "make_bad_inode" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0xe08afdc6, "__mark_inode_dirty" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd5db2b84, "iget5_locked" },
	{ 0xd03f84c8, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xefbd9807, "seq_escape" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x61b187bb, "__lock_buffer" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xd5d44549, "block_read_full_page" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa518d210, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5af8d6d9, "generic_read_dir" },
	{ 0x8888718f, "igrab" },
	{ 0x623afa6e, "unlock_buffer" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x4ffd9a16, "set_page_dirty" },
	{ 0x1057ef10, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x8ba8f2b0, "from_kgid_munged" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0xa73ee62b, "_atomic_dec_and_lock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd2b96f5c, "__insert_inode_hash" },
	{ 0x5f754e5a, "memset" },
	{ 0x6753ecd3, "inode_add_bytes" },
	{ 0x15970655, "__bread_gfp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x5ae8c86, "write_inode_now" },
	{ 0x7c1372e8, "panic" },
	{ 0xa13a9f82, "kunmap" },
	{ 0x827c9448, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x6c44301d, "seq_putc" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4e66368f, "set_nlink" },
	{ 0x8178b430, "setattr_copy" },
	{ 0xb022f8fd, "sync_dirty_buffer" },
	{ 0xebbdd2f7, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0xefc2a73f, "generic_file_read_iter" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0xe35196b3, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xf9cda764, "mark_page_accessed" },
	{ 0x91518b9d, "file_write_and_wait_range" },
	{ 0x1fbaa35f, "inode_init_once" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x26afbb09, "generic_file_mmap" },
	{ 0xb4393bc0, "pagecache_write_end" },
	{ 0xc1513e54, "kmap" },
	{ 0xb286eb0f, "block_write_full_page" },
	{ 0x6255268c, "sync_blockdev" },
	{ 0xaa6249c, "truncate_inode_pages_final" },
	{ 0xb70fbff4, "try_to_free_buffers" },
	{ 0x69439a68, "make_kuid" },
	{ 0xbf465d2b, "load_nls" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x457d4c2e, "generic_write_end" },
	{ 0x14926770, "unlock_new_inode" },
	{ 0xc1babb65, "kill_block_super" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x7431302d, "inode_newsize_ok" },
	{ 0xbb23d226, "inode_set_bytes" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x8c3c7a6c, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xd1276950, "generic_file_write_iter" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xc8188127, "iput" },
	{ 0xf92772d6, "cont_write_begin" },
	{ 0x4f6b97da, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xd414bd18, "inode_dio_wait" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xc6c85edc, "current_time" },
	{ 0x66092e19, "load_nls_default" },
	{ 0x1a1d9d88, "d_splice_alias" },
	{ 0xda976a57, "sync_filesystem" },
	{ 0x8e1759f9, "sb_set_blocksize" },
	{ 0xf9147ce9, "d_make_root" },
	{ 0x4a49f71a, "__blockdev_direct_IO" },
	{ 0x49970de8, "finish_wait" },
	{ 0x86e5c170, "mark_buffer_dirty" },
	{ 0x45ed08d2, "ioctl_by_bdev" },
	{ 0x8a7d02bc, "unregister_filesystem" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x414ed825, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0x6eb09fb2, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x50e02795, "clear_inode" },
	{ 0xe4056ce9, "d_instantiate" },
	{ 0x1a928c7, "pagecache_write_begin" },
	{ 0xaf03a486, "__put_page" },
	{ 0x41e519ec, "generic_block_bmap" },
	{ 0x498ef07, "generic_listxattr" },
	{ 0xe7d56e4f, "clear_nlink" },
	{ 0x682d5ce7, "iget_locked" },
	{ 0x7f97f2f0, "setattr_prepare" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7F4D47F7444885FE34F16C8");
