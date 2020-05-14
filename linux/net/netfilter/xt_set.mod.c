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
	{ 0x4917ee7b, "xt_unregister_matches" },
	{ 0x3a109778, "xt_register_targets" },
	{ 0x4274ec63, "xt_register_matches" },
	{ 0xb0d4b872, "ip_set_test" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x40e53320, "ip_set_del" },
	{ 0x62301dff, "ip_set_add" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84b183ae, "strncmp" },
	{ 0x7c32d0f0, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xbe08d5b5, "ip_set_nfnl_get_byindex" },
	{ 0xb53aeb67, "ip_set_nfnl_put" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_set";


MODULE_INFO(srcversion, "2DC0E49EDD2BECE32E49767");
