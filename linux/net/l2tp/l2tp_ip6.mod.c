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
	{ 0x8d346931, "inet_unhash" },
	{ 0x4633e5f8, "inet6_hash" },
	{ 0xbdae8080, "ipv6_getsockopt" },
	{ 0x2a100a79, "ipv6_setsockopt" },
	{ 0xe10d99e2, "l2tp_ioctl" },
	{ 0xc5a6c57b, "sock_no_sendpage" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0xd95a9cb2, "sock_common_recvmsg" },
	{ 0x3b62fe66, "inet_sendmsg" },
	{ 0xebf07e14, "sock_common_getsockopt" },
	{ 0xb4bfb598, "sock_common_setsockopt" },
	{ 0xc57b39e, "inet_shutdown" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x7405ec2b, "inet6_ioctl" },
	{ 0x19513f0e, "datagram_poll" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0x5df51ecc, "inet_dgram_connect" },
	{ 0x76bcd82e, "inet6_bind" },
	{ 0x959ac460, "inet6_release" },
	{ 0x8ada124a, "inet6_del_protocol" },
	{ 0xd757a6d3, "inet6_unregister_protosw" },
	{ 0x3e668302, "proto_unregister" },
	{ 0xb2c23989, "inet6_register_protosw" },
	{ 0xefb4f2e9, "inet6_add_protocol" },
	{ 0x2382bc58, "proto_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x78a9b1b, "sock_queue_rcv_skb" },
	{ 0xc3a36d3c, "sk_common_release" },
	{ 0x747bc673, "__ip6_datagram_connect" },
	{ 0x7296b22, "__udp_disconnect" },
	{ 0x472a0e65, "inet6_destroy_sock" },
	{ 0xe9bfe9d8, "l2tp_tunnel_delete" },
	{ 0xb7ee2056, "ip6_dst_hoplimit" },
	{ 0x3c2a49c8, "ip6_push_pending_frames" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc8aef92d, "ip6_flush_pending_frames" },
	{ 0xb4089bc2, "ip6_append_data" },
	{ 0xe093f37a, "ip_generic_getfrag" },
	{ 0x7438ce8, "ip6_datagram_send_ctl" },
	{ 0xcca53a32, "fl6_sock_lookup" },
	{ 0x9a81089a, "dst_release" },
	{ 0xebf4c7e, "ip6_dst_lookup_flow" },
	{ 0x293a9ef6, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0x57a67167, "fl6_merge_options" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x84669c31, "ip6_datagram_recv_ctl" },
	{ 0x655d816b, "__sock_recv_wifi_status" },
	{ 0xadf507e9, "__sock_recv_timestamp" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x87763a5c, "ipv6_recv_error" },
	{ 0x8d7996f, "skb_free_datagram" },
	{ 0x8e3f4223, "skb_copy_datagram_iter" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0xe6f80024, "ipv6_chk_addr" },
	{ 0xafd84233, "dev_get_by_index_rcu" },
	{ 0x750bf5c6, "release_sock" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xd8d0af3b, "__sk_receive_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ce7f44b, "__xfrm_policy_check" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xa349669d, "l2tp_session_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xce8448d6, "l2tp_recv_common" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xc8993cbb, "l2tp_session_get" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "A2B9ABFF6671A441FDB8151");
