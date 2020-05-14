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
	{ 0xdd4f9251, "nfs4_schedule_session_recovery" },
	{ 0xa36951c9, "pnfs_nfs_generic_sync" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2dbf4333, "xdr_init_encode" },
	{ 0xb8803bb5, "nfs4_pnfs_ds_connect" },
	{ 0x2a3ac365, "pnfs_generic_clear_request_commit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9a3c306f, "nfs4_setup_sequence" },
	{ 0xc9a16c73, "page_address" },
	{ 0x97fd9707, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xca2c723f, "nfs_initiate_commit" },
	{ 0xaa1993a9, "pnfs_error_mark_layout_for_return" },
	{ 0x780496d4, "nfs4_pnfs_ds_put" },
	{ 0x89bb145f, "put_rpccred" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x54bef45, "layoutstats_timer" },
	{ 0xa1d28e9c, "nfs4_delete_deviceid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0x643d9ba1, "groups_free" },
	{ 0x53cda404, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0xebb51242, "nfs4_decode_mp_ds_addr" },
	{ 0xf8b5195b, "nfs_initiate_pgio" },
	{ 0x37ea27fc, "pnfs_generic_commit_pagelist" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0xb8e90da1, "pnfs_generic_recover_commit_reqs" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x3ae0ab2b, "nfs4_sequence_done" },
	{ 0x3cc67d49, "xdr_reserve_space" },
	{ 0xa48def1d, "pnfs_generic_pg_test" },
	{ 0x5d93abbd, "pnfs_update_layout" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0xd7533d1f, "rpc_exit" },
	{ 0xfb56a2d7, "pnfs_generic_pg_cleanup" },
	{ 0x9774c467, "pnfs_generic_write_commit_done" },
	{ 0x937725e0, "rpc_delay" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x9e3c940c, "pnfs_generic_layout_insert_lseg" },
	{ 0xb2ac87eb, "xdr_init_decode_pages" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xf0d42156, "rpc_call_start" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x661c4936, "pnfs_read_resend_pnfs" },
	{ 0x8beed119, "nfs4_find_get_deviceid" },
	{ 0xf22a0988, "nfs4_find_or_create_ds_client" },
	{ 0x550df855, "rpc_max_payload" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa083cf00, "nfs_pageio_reset_write_mds" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x162cd7b0, "pnfs_layout_mark_request_commit" },
	{ 0xa816e95, "pnfs_destroy_layout" },
	{ 0x36d40c44, "nfs4_pnfs_ds_add" },
	{ 0x3f6461d6, "pnfs_layoutcommit_inode" },
	{ 0xb586f47c, "pnfs_put_lseg" },
	{ 0x750c3119, "nfs4_put_deviceid_node" },
	{ 0xb0e73634, "pnfs_report_layoutstat" },
	{ 0xba6e191e, "pnfs_set_layoutcommit" },
	{ 0x620fdfa0, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0x69439a68, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x3a99d83e, "nfs4_test_deviceid_unavailable" },
	{ 0xa02df320, "nfs_map_string_to_numeric" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0xecbc8ef4, "pnfs_generic_pg_readpages" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xed3793c9, "pnfs_read_done_resend_to_mds" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0xc2b2aa1d, "rpc_restart_call_prepare" },
	{ 0x3e2b0ba6, "groups_alloc" },
	{ 0xb4a390f6, "pnfs_generic_pg_writepages" },
	{ 0xd7d69bc9, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4eaf2ec, "pnfs_generic_pg_check_layout" },
	{ 0x9d669763, "memcpy" },
	{ 0x503fa0e1, "__tracepoint_nfs4_pnfs_read" },
	{ 0x7981c7eb, "pnfs_write_done_resend_to_mds" },
	{ 0x91d99a92, "rpc_wake_up" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2012db23, "rpc_count_iostats_metrics" },
	{ 0xa9b68a34, "xdr_inline_decode" },
	{ 0xe8a0c8f5, "__tracepoint_nfs4_pnfs_write" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xeb1d7fcb, "rpc_lookup_generic_cred" },
	{ 0x970fa932, "xdr_write_pages" },
	{ 0x30856353, "nfs_pageio_reset_read_mds" },
	{ 0xf7906d03, "nfs4_init_deviceid_node" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xa65a6480, "xdr_set_scratch_buffer" },
	{ 0x74f53817, "nfs_writeback_update_inode" },
	{ 0xaf03a486, "__put_page" },
	{ 0x614d637f, "pnfs_register_layoutdriver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "02FB127591EC0087F26CA9E");
