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
	{ 0x7d34840b, "nf_log_unregister" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x2899e9fa, "nfnetlink_subsys_unregister" },
	{ 0x18d7d6fa, "nf_log_register" },
	{ 0xa85dc69, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x94283f4c, "proc_set_user" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0x69439a68, "make_kuid" },
	{ 0x844952c1, "proc_create_net_data" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xffe09c4d, "nf_log_unset" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x402b8281, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x8ff873da, "nf_log_bind_pf" },
	{ 0x9132fdd0, "nf_log_unbind_pf" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xd040e01a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x132009e3, "__put_net" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x8ba8f2b0, "from_kgid_munged" },
	{ 0xd03f84c8, "from_kuid_munged" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0x9214b99, "skb_put" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x931a4abe, "nfnl_ct_hook" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x97255bdf, "strlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7e927f92, "call_rcu_bh" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x57fb02e1, "nfnetlink_unicast" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "1222EA0220C60587359DDBF");
