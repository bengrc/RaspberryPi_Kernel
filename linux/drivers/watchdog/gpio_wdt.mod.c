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
	{ 0xbceb12dc, "watchdog_register_device" },
	{ 0xdf309c55, "watchdog_init_timeout" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x815d4afc, "devm_gpiod_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2978fde1, "gpiod_direction_output" },
	{ 0x8b0ed55b, "gpiod_direction_input" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdc4397b4, "watchdog_unregister_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Clinux,wdt-gpio");
MODULE_ALIAS("of:N*T*Clinux,wdt-gpioC*");

MODULE_INFO(srcversion, "797B4441EF79B06B5423CBD");
