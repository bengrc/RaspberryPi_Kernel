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
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4f7e9f73, "devm_kfree" },
	{ 0xa1633992, "_dev_err" },
	{ 0x90bdf8c6, "spi_bitbang_start" },
	{ 0xec5c09cd, "spi_bitbang_setup_transfer" },
	{ 0x997e84c0, "devm_gpiod_get_index" },
	{ 0x815d4afc, "devm_gpiod_get" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x7519d0c5, "__spi_alloc_controller" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x47820ec9, "of_match_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3f7ba273, "spi_bitbang_setup" },
	{ 0x4ee71cb1, "spi_bitbang_cleanup" },
	{ 0x2978fde1, "gpiod_direction_output" },
	{ 0x8b0ed55b, "gpiod_direction_input" },
	{ 0x7fcce07f, "gpiod_get_value_cansleep" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x142a905e, "put_device" },
	{ 0xdb588357, "spi_bitbang_stop" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=spi-bitbang";

MODULE_ALIAS("of:N*T*Cspi-gpio");
MODULE_ALIAS("of:N*T*Cspi-gpioC*");

MODULE_INFO(srcversion, "293DAE770803054DE6D540C");
