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
	{ 0x9192a401, "charlcd_register" },
	{ 0xcba6de06, "device_property_read_u32_array" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x815d4afc, "devm_gpiod_get" },
	{ 0x997e84c0, "devm_gpiod_get_index" },
	{ 0xa2a58bbe, "charlcd_alloc" },
	{ 0x7ef053e2, "gpiod_count" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x800b90ea, "gpiod_set_array_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0xac53a91b, "charlcd_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=charlcd";

MODULE_ALIAS("of:N*T*Chit,hd44780");
MODULE_ALIAS("of:N*T*Chit,hd44780C*");

MODULE_INFO(srcversion, "310779895A8B1B739CCCD44");
