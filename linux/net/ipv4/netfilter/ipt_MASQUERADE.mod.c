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
	{ 0x3f5c468e, "nf_nat_masquerade_ipv4_unregister_notifier" },
	{ 0xcd5adf65, "xt_unregister_target" },
	{ 0xa1be6f21, "nf_nat_masquerade_ipv4_register_notifier" },
	{ 0xff2238b4, "xt_register_target" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xcfc614de, "nf_nat_masquerade_ipv4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x25afd127, "nf_ct_netns_get" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x41dd7d3b, "nf_ct_netns_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat_ipv4,x_tables,nf_conntrack";


MODULE_INFO(srcversion, "B97D40476A64149344DEFD1");
