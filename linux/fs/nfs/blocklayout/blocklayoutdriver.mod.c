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
	{ 0x6f240eec, "pnfs_unregister_layoutdriver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7ee75dab, "pnfs_generic_pg_init_write" },
	{ 0x3a017181, "fs_bio_set" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x54b6389b, "bio_alloc_bioset" },
	{ 0x1542a4b1, "page_cache_next_hole" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xaaa14361, "nfs_dreq_bytes_left" },
	{ 0xc9a16c73, "page_address" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x8b0963fc, "rpc_unlink" },
	{ 0x8f3d6fdc, "pnfs_ld_write_done" },
	{ 0xaa1993a9, "pnfs_error_mark_layout_for_return" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4da19baf, "dput" },
	{ 0xa1d28e9c, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9851bcc4, "nfs4_mark_deviceid_unavailable" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4e0a6438, "rpc_mkpipe_data" },
	{ 0x1481e0aa, "rpc_mkpipe_dentry" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa48def1d, "pnfs_generic_pg_test" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0xcd73d8e8, "rpc_get_sb_net" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xfb56a2d7, "pnfs_generic_pg_cleanup" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0x3a46282e, "pnfs_generic_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xb2ac87eb, "xdr_init_decode_pages" },
	{ 0xe76a6f2, "rpc_queue_upcall" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x801421a6, "bio_add_page" },
	{ 0x8beed119, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xc2974ccd, "blkdev_get_by_path" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa083cf00, "nfs_pageio_reset_write_mds" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0xc2690470, "rpc_d_lookup_sb" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x2162bf7c, "blkdev_get_by_dev" },
	{ 0x3520612, "bio_put" },
	{ 0x750c3119, "nfs4_put_deviceid_node" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xd040e01a, "module_put" },
	{ 0x217d6588, "rpc_pipe_generic_upcall" },
	{ 0x4a90aa0b, "submit_bio" },
	{ 0xbd9074b1, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0xf41c374a, "rpc_destroy_pipe_data" },
	{ 0xc74ba5e7, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0xb5060018, "rpc_put_sb_net" },
	{ 0xecbc8ef4, "pnfs_generic_pg_readpages" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xb4a390f6, "pnfs_generic_pg_writepages" },
	{ 0xb8ff71ca, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xcadedd6b, "pnfs_generic_pg_init_read" },
	{ 0xd2802d5c, "pgprot_kernel" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xa9b68a34, "xdr_inline_decode" },
	{ 0xdbfc0f68, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x30856353, "nfs_pageio_reset_read_mds" },
	{ 0xf7906d03, "nfs4_init_deviceid_node" },
	{ 0x8c2bb84b, "pnfs_set_lo_fail" },
	{ 0x7d705738, "blk_start_plug" },
	{ 0xa65a6480, "xdr_set_scratch_buffer" },
	{ 0xfa61f263, "flush_dcache_page" },
	{ 0xa8fe34c5, "pnfs_ld_read_done" },
	{ 0xaf03a486, "__put_page" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x614d637f, "pnfs_register_layoutdriver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9ADA48D3B685AB01850F449");
