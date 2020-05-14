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
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xbb309ec5, "br_should_route_hook" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0xae6bef9c, "ebt_register_table" },
	{ 0xda9f1509, "ebt_unregister_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x85117140, "ebt_do_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge,ebtables";


MODULE_INFO(srcversion, "611B3BB4E7DA458C9F57855");
