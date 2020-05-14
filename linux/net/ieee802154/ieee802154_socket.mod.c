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
	{ 0x97dbea60, "dev_load" },
	{ 0x34ecc16, "sock_init_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8869fc32, "dev_getbyhwaddr_rcu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x9a81089a, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xcb7a362b, "dev_get_by_name" },
	{ 0x372e218d, "sock_no_getname" },
	{ 0x78a9b1b, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xc3a36d3c, "sk_common_release" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xd95a9cb2, "sock_common_recvmsg" },
	{ 0xc5a6c57b, "sock_no_sendpage" },
	{ 0x7914a643, "sock_get_timestamp" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0x2ac3c4b6, "ieee802154_hdr_pull" },
	{ 0x5f754e5a, "memset" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0x8e3f4223, "skb_copy_datagram_iter" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdf3dd08c, "sock_no_bind" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0xcbb38cb9, "sock_prot_inuse_add" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0xa6f16826, "dev_get_by_index" },
	{ 0x585c3a56, "dev_remove_pack" },
	{ 0x341c6c58, "init_net" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0x84dc8f95, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2382bc58, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xb284c739, "sock_get_timestampns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x19513f0e, "datagram_poll" },
	{ 0x6a2d35f0, "sock_register" },
	{ 0xa9e9b141, "dev_getfirstbyhwtype" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x3e668302, "proto_unregister" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0x8bd942d6, "sock_alloc_send_skb" },
	{ 0xe48eeccb, "put_cmsg" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb4bfb598, "sock_common_setsockopt" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xebf07e14, "sock_common_getsockopt" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d4fd290, "dev_add_pack" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x9214b99, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8d7996f, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154";


MODULE_INFO(srcversion, "543CD5264DEE3B0DB0A3012");
