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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xc6c8048e, "sock_diag_put_meminfo" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xd03f84c8, "from_kuid_munged" },
	{ 0xedf4d253, "sock_diag_unregister" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x25f8a9fb, "sock_i_ino" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x13b7e068, "sock_diag_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x71c90087, "memcmp" },
	{ 0xcd279169, "nla_find" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x68183b3b, "nla_put" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0x944ddbbc, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x442e4f2a, "sock_diag_unregister_inet_compat" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x2e0944bb, "inet6_lookup" },
	{ 0x2dbe068c, "sock_gen_put" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9a951ad, "sock_diag_check_cookie" },
	{ 0x9c2b734b, "sock_diag_save_cookie" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe0dec90c, "__inet_lookup_listener" },
	{ 0xd34d3257, "sock_diag_register_inet_compat" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0x7ac24b19, "sock_i_uid" },
	{ 0xef835566, "__netlink_dump_start" },
	{ 0x23aaf889, "__inet_lookup_established" },
	{ 0x1ec77e40, "netlink_net_capable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B6B0531A3ADA5D5D3ACAE99");
