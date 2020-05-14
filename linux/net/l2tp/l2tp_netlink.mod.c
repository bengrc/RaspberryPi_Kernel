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
	{ 0xa349669d, "l2tp_session_free" },
	{ 0x402b8281, "__request_module" },
	{ 0xe48d1083, "l2tp_tunnel_get_nth" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0xe6646669, "genl_register_family" },
	{ 0x799ba94b, "l2tp_tunnel_get_session" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xb4c81903, "l2tp_tunnel_free" },
	{ 0xe43936f9, "genl_unregister_family" },
	{ 0x15f3496f, "l2tp_tunnel_register" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7c32d0f0, "printk" },
	{ 0x68183b3b, "nla_put" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x287c7e78, "l2tp_tunnel_create" },
	{ 0xd4f46a67, "l2tp_tunnel_get" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xa1715f1e, "l2tp_session_get_nth" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0xf5501856, "l2tp_session_get_by_ifname" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x71883288, "genlmsg_multicast_allns" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4ecc241c, "genlmsg_put" },
	{ 0xe9bfe9d8, "l2tp_tunnel_delete" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8437a6df, "l2tp_session_set_header_len" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "D9BE131594E5B3041BC5F3C");
