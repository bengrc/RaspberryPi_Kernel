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
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x21a47629, "pppox_ioctl" },
	{ 0x19513f0e, "datagram_poll" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0xdf3dd08c, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x78d51c29, "unregister_pernet_device" },
	{ 0x3e668302, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xf097648b, "l2tp_nl_register_ops" },
	{ 0x26957664, "register_pppox_proto" },
	{ 0x2382bc58, "proto_register" },
	{ 0xd478eb29, "register_pernet_device" },
	{ 0xa1715f1e, "l2tp_session_get_nth" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0xe2dea3cc, "ppp_dev_name" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0xe48d1083, "l2tp_tunnel_get_nth" },
	{ 0x844952c1, "proc_create_net_data" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xb5457321, "pppox_unbind_sock" },
	{ 0x4cc7fb33, "l2tp_session_delete" },
	{ 0x15f3496f, "l2tp_tunnel_register" },
	{ 0x287c7e78, "l2tp_tunnel_create" },
	{ 0x52177285, "ppp_register_net_channel" },
	{ 0x9a81089a, "dst_release" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe9bfe9d8, "l2tp_tunnel_delete" },
	{ 0xb4c81903, "l2tp_tunnel_free" },
	{ 0xd4f46a67, "l2tp_tunnel_get" },
	{ 0x750bf5c6, "release_sock" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8437a6df, "l2tp_session_set_header_len" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd7983f73, "l2tp_xmit_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0x9214b99, "skb_put" },
	{ 0xc370033c, "sock_wmalloc" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0x8e3f4223, "skb_copy_datagram_iter" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0xb97ae5c9, "l2tp_udp_encap_recv" },
	{ 0x34ecc16, "sock_init_data" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa349669d, "l2tp_session_free" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x799ba94b, "l2tp_tunnel_get_session" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xd13ca26f, "ppp_input" },
	{ 0x78a9b1b, "sock_queue_rcv_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x46598cf6, "l2tp_session_register" },
	{ 0x27c3c0da, "l2tp_session_create" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,l2tp_netlink,l2tp_core,ppp_generic";


MODULE_INFO(srcversion, "3041D35E5B728159DF73FA9");
