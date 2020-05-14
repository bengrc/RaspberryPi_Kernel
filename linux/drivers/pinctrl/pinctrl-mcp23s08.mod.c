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
	{ 0x37e3565d, "pinconf_generic_dt_free_map" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xbebdccd4, "irq_find_mapping" },
	{ 0xd2a64942, "spi_get_device_id" },
	{ 0xcba6de06, "device_property_read_u32_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x47820ec9, "of_match_device" },
	{ 0x8f9957ae, "gpiochip_set_nested_irqchip" },
	{ 0xe3461e01, "gpiochip_irqchip_add_key" },
	{ 0xa3e308fb, "handle_simple_irq" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x36489dc, "__devm_regmap_init" },
	{ 0x903a213e, "devm_kmemdup" },
	{ 0x192f6449, "devm_pinctrl_register" },
	{ 0xf1809d95, "devm_kasprintf" },
	{ 0xaeaf222b, "device_property_present" },
	{ 0x57a13eb4, "devm_gpiochip_add_data" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6a8417b, "regcache_sync" },
	{ 0x44bc7da9, "regcache_cache_only" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x11ead456, "gpiochip_is_requested" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x87388ff7, "regcache_cache_bypass" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1a2fc39c, "gpiochip_get_data" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd0106a1b, "spi_write_then_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa1633992, "_dev_err" },
	{ 0x95bf482e, "pinctrl_dev_get_drvdata" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x786abfc2, "pinconf_generic_dt_node_to_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("spi:mcp23s18");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("i2c:mcp23018");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23018");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23018C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17C*");

MODULE_INFO(srcversion, "D5FA3F72086C032F65CF9BE");
