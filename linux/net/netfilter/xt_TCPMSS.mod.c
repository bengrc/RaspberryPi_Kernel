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
	{ 0x29776c2c, "xt_unregister_targets" },
	{ 0x3a109778, "xt_register_targets" },
	{ 0x11b34904, "ipv6_skip_exthdr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9a81089a, "dst_release" },
	{ 0xb229734b, "nf_route" },
	{ 0x5f754e5a, "memset" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x99bb8806, "memmove" },
	{ 0x9214b99, "skb_put" },
	{ 0xc8770821, "inet_proto_csum_replace4" },
	{ 0x18ffdf3c, "skb_make_writable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "1C8E3EBFFFF63A6DCCD7C9E");
