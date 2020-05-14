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
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0x41913caa, "iget_failed" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc39740e3, "drop_nlink" },
	{ 0x1edefae1, "set_anon_super" },
	{ 0x6675ebdf, "p9_client_mknod_dotl" },
	{ 0xcd4c97a1, "up_read" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0xe08afdc6, "__mark_inode_dirty" },
	{ 0x95accf6b, "__set_page_dirty_nobuffers" },
	{ 0x8be5b900, "filemap_fault" },
	{ 0xc91b4678, "generic_write_checks" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc86abfe9, "p9_client_readdir" },
	{ 0xd5db2b84, "iget5_locked" },
	{ 0xd03f84c8, "from_kuid_munged" },
	{ 0xdd339dde, "kill_anon_super" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0x4fd47b46, "posix_acl_to_xattr" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x803ae8d9, "p9_client_getlock_dotl" },
	{ 0xb98c2e2b, "p9_client_begin_disconnect" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x219cc45b, "generic_file_open" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x1416889d, "posix_acl_update_mode" },
	{ 0x2fa85053, "__lock_page" },
	{ 0xfd799484, "filemap_write_and_wait" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x60be4842, "deactivate_locked_super" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x4da19baf, "dput" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xeb52bc4b, "p9_client_stat" },
	{ 0x44e9a829, "match_token" },
	{ 0xfa2dd65a, "inc_nlink" },
	{ 0x6dcb83e9, "p9_client_link" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0x3bd51040, "p9_client_statfs" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5af8d6d9, "generic_read_dir" },
	{ 0xc83f0fc3, "p9stat_read" },
	{ 0xf3d30068, "super_setup_bdi" },
	{ 0x68de05b5, "p9_client_clunk" },
	{ 0x3c058fa9, "redirty_page_for_writepage" },
	{ 0x91715312, "sprintf" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x27517d78, "p9_is_proto_dotl" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x4ffd9a16, "set_page_dirty" },
	{ 0x95ca7727, "p9_client_readlink" },
	{ 0x1057ef10, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafa10a99, "down_read" },
	{ 0xa0b6c3dd, "kobject_create_and_add" },
	{ 0x57585b1b, "end_page_writeback" },
	{ 0x8ba8f2b0, "from_kgid_munged" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0x52d265bb, "p9_client_symlink" },
	{ 0x1f381782, "p9dirent_read" },
	{ 0x90ff6c22, "p9_client_fsync" },
	{ 0xa1e67e88, "inode_owner_or_capable" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0xf0cc5cd2, "p9_client_read" },
	{ 0x400a1949, "iov_iter_bvec" },
	{ 0x897ec012, "p9_show_client_options" },
	{ 0x5f754e5a, "memset" },
	{ 0xd0c39046, "p9_client_walk" },
	{ 0x6753ecd3, "inode_add_bytes" },
	{ 0xcbf3e47f, "p9_client_write" },
	{ 0x6e4ccb0, "finish_no_open" },
	{ 0x21d84431, "sync_inode" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0x1959e737, "p9_client_lock_dotl" },
	{ 0xf8942c11, "p9_client_create_dotl" },
	{ 0x7789b64a, "sget" },
	{ 0x2b626e72, "iov_iter_kvec" },
	{ 0x6693c253, "p9_client_xattrcreate" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4a92473b, "d_move" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x58722f23, "p9_client_mkdir_dotl" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x4e66368f, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x187e164, "file_update_time" },
	{ 0x1f928b12, "get_cached_acl" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x8178b430, "setattr_copy" },
	{ 0xb42e70f4, "p9_client_unlinkat" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x17d68616, "p9_client_destroy" },
	{ 0xd6202868, "set_cached_acl" },
	{ 0x4e3567f7, "match_int" },
	{ 0x7f42aa40, "unlock_page" },
	{ 0xefc2a73f, "generic_file_read_iter" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0x55bc03d4, "p9_client_xattrwalk" },
	{ 0x2fbd2030, "p9_client_setattr" },
	{ 0x91518b9d, "file_write_and_wait_range" },
	{ 0x1fbaa35f, "inode_init_once" },
	{ 0xb596786, "xattr_full_name" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x26afbb09, "generic_file_mmap" },
	{ 0xb5e2607, "__filemap_set_wb_err" },
	{ 0x10a22a4a, "wait_for_stable_page" },
	{ 0xcdf2e4f3, "fs_kobj" },
	{ 0xaa6249c, "truncate_inode_pages_final" },
	{ 0x69439a68, "make_kuid" },
	{ 0x487fc1a1, "posix_acl_valid" },
	{ 0x9f90c22, "p9_client_create" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x96fe86be, "posix_acl_from_xattr" },
	{ 0x14926770, "unlock_new_inode" },
	{ 0xd384c683, "p9stat_free" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x5b766ba8, "locks_lock_inode_wait" },
	{ 0x22b5aa61, "p9_client_attach" },
	{ 0x3d929250, "clear_page_dirty_for_io" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xbd4ae6d, "p9_client_disconnect" },
	{ 0x739e72e3, "read_cache_pages" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x8c3c7a6c, "register_filesystem" },
	{ 0x34aa4eec, "p9_is_proto_dotu" },
	{ 0xd1276950, "generic_file_write_iter" },
	{ 0x7023d7a8, "p9_client_fcreate" },
	{ 0xf484b078, "__test_set_page_writeback" },
	{ 0x664676b3, "I_BDEV" },
	{ 0x975c6fd2, "blockdev_superblock" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8476b531, "generic_file_readonly_mmap" },
	{ 0xc8188127, "iput" },
	{ 0xcd3f5e4e, "finish_open" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x3c8226f0, "invalidate_inode_pages2_range" },
	{ 0x37a0cba, "kfree" },
	{ 0xc919d58e, "p9_client_renameat" },
	{ 0xd9c4c6b7, "ihold" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xc6c85edc, "current_time" },
	{ 0x1a1d9d88, "d_splice_alias" },
	{ 0x36a4cfe6, "p9_client_remove" },
	{ 0x918655cb, "always_delete_dentry" },
	{ 0x63e9f516, "invalidate_mapping_pages" },
	{ 0x8daae94d, "__posix_acl_chmod" },
	{ 0xf9147ce9, "d_make_root" },
	{ 0xfdfe54ca, "simple_statfs" },
	{ 0x8a7d02bc, "unregister_filesystem" },
	{ 0x7df44108, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc66f12b4, "filemap_map_pages" },
	{ 0x414ed825, "new_inode" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x16bba777, "grab_cache_page_write_begin" },
	{ 0x50e02795, "clear_inode" },
	{ 0xe4056ce9, "d_instantiate" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0xfa61f263, "flush_dcache_page" },
	{ 0x1944147d, "p9_client_rename" },
	{ 0xaf03a486, "__put_page" },
	{ 0xe7d56e4f, "clear_nlink" },
	{ 0x63280db1, "p9_client_open" },
	{ 0x7f97f2f0, "setattr_prepare" },
	{ 0xc3dd394a, "p9_client_wstat" },
	{ 0x9810962a, "p9_client_getattr_dotl" },
	{ 0x8f6c75c6, "generic_fillattr" },
	{ 0x13a8c088, "filemap_fdatawrite" },
	{ 0xf218cc1e, "inode_init_owner" },
	{ 0xc04665ab, "__posix_acl_create" },
	{ 0xcde59cf8, "noop_backing_dev_info" },
	{ 0xa579d59a, "posix_test_lock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet";


MODULE_INFO(srcversion, "4F9217F9F2FA17E45BD56D6");
