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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xbdfaece4, "of_property_read_variable_u8_array" },
	{ 0x5f754e5a, "memset" },
	{ 0x76f88834, "devm_clk_register" },
	{ 0xea1b0b21, "of_clk_add_provider" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf1ca83f6, "of_clk_src_simple_get" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x79ce808b, "of_clk_del_provider" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Chifiberry,dachd-clk");
MODULE_ALIAS("of:N*T*Chifiberry,dachd-clkC*");
MODULE_ALIAS("i2c:dachd-clk");

MODULE_INFO(srcversion, "2F2A2A7C7B675C8C06FD5D2");
