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
	{ 0x2899e9fa, "nfnetlink_subsys_unregister" },
	{ 0x29e53e75, "nft_unregister_expr" },
	{ 0xa85dc69, "nfnetlink_subsys_register" },
	{ 0x2cfef088, "nft_register_expr" },
	{ 0xf9dcd1d2, "nla_reserve" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0x402b8281, "__request_module" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7f20a0b2, "xt_check_match" },
	{ 0x263fc5ec, "xt_request_find_match" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x91bcc7d8, "xt_request_find_target" },
	{ 0x11df56b8, "xt_check_target" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xd040e01a, "module_put" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_tables,x_tables";


MODULE_INFO(srcversion, "5245A8232912ADA437B1D16");
