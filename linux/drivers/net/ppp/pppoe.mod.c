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
	{ 0xab64b595, "sock_no_getsockopt" },
	{ 0x5e636344, "sock_no_setsockopt" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x21a47629, "pppox_ioctl" },
	{ 0x19513f0e, "datagram_poll" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0xdf3dd08c, "sock_no_bind" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x585c3a56, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x78d51c29, "unregister_pernet_device" },
	{ 0x3e668302, "proto_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9d4fd290, "dev_add_pack" },
	{ 0x26957664, "register_pppox_proto" },
	{ 0x2382bc58, "proto_register" },
	{ 0xd478eb29, "register_pernet_device" },
	{ 0x844952c1, "proc_create_net_data" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x52177285, "ppp_register_net_channel" },
	{ 0xcb7a362b, "dev_get_by_name" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0x9214b99, "skb_put" },
	{ 0xc370033c, "sock_wmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8e3f4223, "skb_copy_datagram_iter" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd13ca26f, "ppp_input" },
	{ 0x78a9b1b, "sock_queue_rcv_skb" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x34ecc16, "sock_init_data" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x4d741240, "dev_get_by_name_rcu" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x6f2fda53, "pskb_trim_rcsum_slow" },
	{ 0xd8d0af3b, "__sk_receive_skb" },
	{ 0x2858833f, "skb_pull_rcsum" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x750bf5c6, "release_sock" },
	{ 0xb5457321, "pppox_unbind_sock" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";


MODULE_INFO(srcversion, "1D528F8FB27460D7E10FC6C");
