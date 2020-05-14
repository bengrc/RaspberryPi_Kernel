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
	{ 0x13947850, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf097648b, "l2tp_nl_register_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4cc7fb33, "l2tp_session_delete" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x60e1284f, "__module_get" },
	{ 0xa349669d, "l2tp_session_free" },
	{ 0x55a515c6, "register_netdevice" },
	{ 0x46598cf6, "l2tp_session_register" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x750bf5c6, "release_sock" },
	{ 0x5ec2eb1, "kernel_sock_ip_overhead" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x27c3c0da, "l2tp_session_create" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd7983f73, "l2tp_xmit_skb" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x9a81089a, "dst_release" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xd816047d, "__secpath_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2e8ca099, "dev_forward_skb" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xd040e01a, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_netlink,l2tp_core";


MODULE_INFO(srcversion, "0FCE2BCDCA334597AC3C8E1");
