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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xbd6f3db5, "netlink_has_listeners" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x20e5571a, "nlmsg_notify" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4777ca8, "netlink_kernel_release" },
	{ 0x31ab9246, "netlink_rcv_skb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xd040e01a, "module_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x219744c2, "netlink_ack" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x215d0acf, "netlink_set_err" },
	{ 0x837ae3ff, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x1ec77e40, "netlink_net_capable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F3D492C18AA28FEC680E087");
