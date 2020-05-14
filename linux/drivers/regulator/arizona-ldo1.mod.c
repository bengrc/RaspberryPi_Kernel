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
	{ 0xed64e6d8, "regulator_get_bypass_regmap" },
	{ 0x9eea563c, "regulator_set_bypass_regmap" },
	{ 0x9a373277, "regulator_get_voltage_sel_regmap" },
	{ 0x5fafa0f6, "regulator_set_voltage_sel_regmap" },
	{ 0xc61881f5, "regulator_map_voltage_linear" },
	{ 0x4225496c, "regulator_list_voltage_linear" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x4fda4e27, "of_get_regulator_init_data" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0xc269e05, "of_get_child_by_name" },
	{ 0xa1633992, "_dev_err" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0xa82e5a7, "devm_regulator_register" },
	{ 0x33db7ce9, "gpiod_get_optional" },
	{ 0x5f754e5a, "memset" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95915fbf, "regmap_read" },
	{ 0xb3b0b17f, "rdev_get_drvdata" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc153dc88, "gpiod_put" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "043060B987F311B9CA31B69");
