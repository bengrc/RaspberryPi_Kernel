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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x458d7e2d, "iscsi_session_recovery_timedout" },
	{ 0x1f3a37e8, "iscsi_tcp_cleanup_task" },
	{ 0x1916f849, "iscsi_tcp_task_xmit" },
	{ 0xdf8b4f38, "iscsi_tcp_task_init" },
	{ 0x8a7742a6, "iscsi_conn_send_pdu" },
	{ 0xe836e038, "iscsi_host_set_param" },
	{ 0x26d131a5, "iscsi_session_get_param" },
	{ 0x64d5d2db, "iscsi_conn_start" },
	{ 0x7dc55451, "iscsi_eh_cmd_timed_out" },
	{ 0x77f37a96, "scsi_change_queue_depth" },
	{ 0x51a7168f, "iscsi_target_alloc" },
	{ 0x8afe9b1e, "iscsi_eh_recover_target" },
	{ 0xa5b82a0c, "iscsi_eh_device_reset" },
	{ 0x6217523b, "iscsi_eh_abort" },
	{ 0x5efad847, "iscsi_queuecommand" },
	{ 0xac5c56eb, "iscsi_unregister_transport" },
	{ 0xf5b89491, "iscsi_register_transport" },
	{ 0x3807d1c8, "blk_queue_flag_set" },
	{ 0xe942d429, "blk_queue_dma_alignment" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4c0aed6a, "iscsi_tcp_r2tpool_alloc" },
	{ 0x8a7560d0, "iscsi_session_setup" },
	{ 0xd98d3781, "iscsi_host_add" },
	{ 0x23a76140, "iscsi_host_alloc" },
	{ 0xe6235a6, "iscsi_host_free" },
	{ 0x394ff6d6, "iscsi_host_remove" },
	{ 0xcfef7ba9, "iscsi_session_teardown" },
	{ 0x44a1a645, "iscsi_tcp_r2tpool_free" },
	{ 0x9d19b391, "scsi_is_host_device" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd14de94e, "crypto_alloc_ahash" },
	{ 0x34e43c4c, "iscsi_tcp_conn_setup" },
	{ 0xbd058ded, "iscsi_tcp_recv_skb" },
	{ 0xbec85204, "tcp_read_sock" },
	{ 0x8f1593cd, "iscsi_conn_queue_work" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x1b7979b2, "iscsi_tcp_hdr_recv_prep" },
	{ 0x2331b115, "sk_set_memalloc" },
	{ 0xc755475d, "iscsi_conn_bind" },
	{ 0xcf05465c, "sockfd_lookup" },
	{ 0xc70413e3, "iscsi_conn_stop" },
	{ 0xdb747ce0, "iscsi_suspend_tx" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xcd447f36, "iscsi_tcp_conn_teardown" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xce6c0a2c, "fput" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xc5a6c57b, "sock_no_sendpage" },
	{ 0xb5d8dde9, "iscsi_tcp_set_max_r2t" },
	{ 0x918aab87, "iscsi_set_param" },
	{ 0xf95985d7, "kernel_getpeername" },
	{ 0xd520c397, "iscsi_conn_get_param" },
	{ 0x8bb7aa44, "iscsi_host_get_param" },
	{ 0xbf8c9136, "iscsi_conn_get_addr_param" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x3c99f8b4, "kernel_getsockname" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xdf0f0f06, "iscsi_tcp_conn_get_stats" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe38dc3c, "iscsi_conn_failure" },
	{ 0xaf3a895c, "iscsi_tcp_segment_unmap" },
	{ 0xfdc1d550, "iscsi_tcp_segment_done" },
	{ 0x50093f6, "kernel_sendmsg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc4292d5e, "iscsi_segment_seek_sg" },
	{ 0x84906a23, "iscsi_segment_init_linear" },
	{ 0x9d807c8d, "iscsi_tcp_dgst_header" },
	{ 0x5f754e5a, "memset" },
	{ 0x93b7b6b7, "dev_printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp";


MODULE_INFO(srcversion, "115DAA7EB4F33BA21788C47");
