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
	{ 0x87487b5b, "qdisc_watchdog_init" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x7c32d0f0, "printk" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x8fc0dfef, "skb_checksum_help" },
	{ 0x1121305d, "__skb_gso_segment" },
	{ 0xb60a46f7, "netif_skb_features" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x891591a9, "skb_copy" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x6e1dd9d6, "skb_orphan_partial" },
	{ 0xc318b985, "qdisc_watchdog_schedule_ns" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf92e01f4, "kfree_skb_list" },
	{ 0xa268910a, "__qdisc_calculate_pkt_len" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x83a0c64f, "qdisc_tree_reduce_backlog" },
	{ 0xe4b0f016, "qdisc_reset" },
	{ 0x4980a4d6, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x7178060c, "qdisc_destroy" },
	{ 0x9f94edf9, "qdisc_watchdog_cancel" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C6C1CD3BC982360A2ECA1AE");
