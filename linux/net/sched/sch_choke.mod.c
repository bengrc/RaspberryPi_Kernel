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
	{ 0x97f0859f, "unregister_qdisc" },
	{ 0xd359754c, "register_qdisc" },
	{ 0xf7a704b5, "make_flow_keys_digest" },
	{ 0x42b59507, "__skb_flow_dissect" },
	{ 0xc2fb064b, "flow_keys_dissector" },
	{ 0x71c90087, "memcmp" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x4980a4d6, "rtnl_kfree_skbs" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x83a0c64f, "qdisc_tree_reduce_backlog" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x528f0ddf, "gnet_stats_copy_app" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4F608B99CA1801D4C8BC3FC");
