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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc99a573a, "tcf_register_action" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0xad5239a4, "netif_receive_skb" },
	{ 0x2858833f, "skb_pull_rcsum" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x68183b3b, "nla_put" },
	{ 0xd9b30766, "tcf_idr_search" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc19f6e45, "tcf_idr_insert" },
	{ 0xa6f16826, "dev_get_by_index" },
	{ 0xfa0393ee, "tcf_idr_create" },
	{ 0xe52cc82a, "tcf_idr_cleanup" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x95d6c2da, "__tcf_idr_release" },
	{ 0xaf346e4, "tcf_idr_check_alloc" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x33a5c043, "tcf_generic_walker" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x10a4a050, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F8702DF4F1E3E6DD416C60D");
