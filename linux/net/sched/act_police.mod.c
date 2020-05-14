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
	{ 0x2370eb7f, "tcf_unregister_action" },
	{ 0xc99a573a, "tcf_register_action" },
	{ 0x4df2ea84, "gen_estimator_read" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0xd9b30766, "tcf_idr_search" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc19f6e45, "tcf_idr_insert" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa28cfcc0, "gen_estimator_active" },
	{ 0xe52cc82a, "tcf_idr_cleanup" },
	{ 0xfa0393ee, "tcf_idr_create" },
	{ 0x95d6c2da, "__tcf_idr_release" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xb2cb334, "psched_ratecfg_precompute" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x2acfa402, "gen_replace_estimator" },
	{ 0xaf346e4, "tcf_idr_check_alloc" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x33a5c043, "tcf_generic_walker" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x10a4a050, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "86CF018EE4B3843117D0B70");
