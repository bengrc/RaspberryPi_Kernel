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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x2899e9fa, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa85dc69, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0xc016b360, "nf_queue_entry_release_refs" },
	{ 0xc600cb2f, "nf_queue_entry_get_refs" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x1121305d, "__skb_gso_segment" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x57fb02e1, "nfnetlink_unicast" },
	{ 0x8fc0dfef, "skb_checksum_help" },
	{ 0x16812b3b, "skb_zerocopy" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xdb9caad5, "skb_tx_error" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x8ba8f2b0, "from_kgid_munged" },
	{ 0xd03f84c8, "from_kuid_munged" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x68183b3b, "nla_put" },
	{ 0xe4de183c, "__nla_reserve" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x96f5d448, "skb_zerocopy_headlen" },
	{ 0x4968100, "nf_register_queue_handler" },
	{ 0x844952c1, "proc_create_net_data" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0x37e24e4f, "nf_unregister_queue_handler" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xe2fd7cf2, "___pskb_trim" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x9d669763, "memcpy" },
	{ 0x18ffdf3c, "skb_make_writable" },
	{ 0x9214b99, "skb_put" },
	{ 0xd040e01a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x402b8281, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x931a4abe, "nfnl_ct_hook" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x400c069c, "nf_ct_hook" },
	{ 0x4adf8fec, "nf_reinject" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "F578DFED100E52D2C5F5A4F");
