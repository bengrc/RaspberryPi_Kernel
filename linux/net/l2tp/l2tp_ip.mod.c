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
	{ 0x750bf5c6, "release_sock" },
	{ 0xa349669d, "l2tp_session_free" },
	{ 0xd0d03868, "ip_getsockopt" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8d346931, "inet_unhash" },
	{ 0x1f4f8105, "ip_setsockopt" },
	{ 0x9ce65d8d, "sk_setup_caps" },
	{ 0x9a81089a, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xce8448d6, "l2tp_recv_common" },
	{ 0x78a9b1b, "sock_queue_rcv_skb" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3b62fe66, "inet_sendmsg" },
	{ 0x4b18f07a, "inet_del_protocol" },
	{ 0xc3a36d3c, "sk_common_release" },
	{ 0x5df51ecc, "inet_dgram_connect" },
	{ 0xd95a9cb2, "sock_common_recvmsg" },
	{ 0xc5a6c57b, "sock_no_sendpage" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0x5f754e5a, "memset" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0x655d816b, "__sock_recv_wifi_status" },
	{ 0x8e3f4223, "skb_copy_datagram_iter" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7d1b3708, "inet_addr_type" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x3b89d8df, "__ip_queue_xmit" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xc57b39e, "inet_shutdown" },
	{ 0x172656b2, "inet_add_protocol" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xadf507e9, "__sock_recv_timestamp" },
	{ 0xcf2d80d2, "inet_ioctl" },
	{ 0xd8d0af3b, "__sk_receive_skb" },
	{ 0xc4fee6d5, "inet_hash" },
	{ 0xb0450f5, "ip_cmsg_recv_offset" },
	{ 0x2382bc58, "proto_register" },
	{ 0x6eba0a30, "__sk_dst_check" },
	{ 0x6bbb9893, "inet_release" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x69439a68, "make_kuid" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x19513f0e, "datagram_poll" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x3e668302, "proto_unregister" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0xb4bfb598, "sock_common_setsockopt" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4ce7f44b, "__xfrm_policy_check" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0xb5b5305e, "inet_register_protosw" },
	{ 0x37a0cba, "kfree" },
	{ 0x7296b22, "__udp_disconnect" },
	{ 0xe9bfe9d8, "l2tp_tunnel_delete" },
	{ 0xd5f8f5d8, "inet_bind" },
	{ 0xebf07e14, "sock_common_getsockopt" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xd0f81c04, "__ip4_datagram_connect" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc370033c, "sock_wmalloc" },
	{ 0xc8993cbb, "l2tp_session_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9214b99, "skb_put" },
	{ 0xecd6f457, "inet_unregister_protosw" },
	{ 0x8d7996f, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "772252505E52FDAFFB93EBB");
