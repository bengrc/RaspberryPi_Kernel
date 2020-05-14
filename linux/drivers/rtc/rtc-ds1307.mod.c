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
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xea1b0b21, "of_clk_add_provider" },
	{ 0xdc4e9408, "of_clk_src_onecell_get" },
	{ 0x76f88834, "devm_clk_register" },
	{ 0x4f6bad00, "of_property_read_string_helper" },
	{ 0x36a05de, "devm_hwmon_device_register_with_groups" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2ce48957, "rtc_nvmem_register" },
	{ 0x5f754e5a, "memset" },
	{ 0xa8b124c2, "__rtc_register_device" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x600001d0, "devm_rtc_allocate_device" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xaeaf222b, "device_property_present" },
	{ 0xcba6de06, "device_property_read_u32_array" },
	{ 0xf8ce5fa3, "of_device_get_match_data" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x91715312, "sprintf" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x357700b1, "rtc_update_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x6f109521, "regmap_bulk_write" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa1633992, "_dev_err" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cdallas,ds1307");
MODULE_ALIAS("of:N*T*Cdallas,ds1307C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1308");
MODULE_ALIAS("of:N*T*Cdallas,ds1308C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1337");
MODULE_ALIAS("of:N*T*Cdallas,ds1337C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1338");
MODULE_ALIAS("of:N*T*Cdallas,ds1338C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1339");
MODULE_ALIAS("of:N*T*Cdallas,ds1339C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1388");
MODULE_ALIAS("of:N*T*Cdallas,ds1388C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1340");
MODULE_ALIAS("of:N*T*Cdallas,ds1340C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1341");
MODULE_ALIAS("of:N*T*Cdallas,ds1341C*");
MODULE_ALIAS("of:N*T*Cmaxim,ds3231");
MODULE_ALIAS("of:N*T*Cmaxim,ds3231C*");
MODULE_ALIAS("of:N*T*Cst,m41t0");
MODULE_ALIAS("of:N*T*Cst,m41t0C*");
MODULE_ALIAS("of:N*T*Cst,m41t00");
MODULE_ALIAS("of:N*T*Cst,m41t00C*");
MODULE_ALIAS("of:N*T*Cst,m41t11");
MODULE_ALIAS("of:N*T*Cst,m41t11C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7940x");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7940xC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7941x");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7941xC*");
MODULE_ALIAS("of:N*T*Cpericom,pt7c4338");
MODULE_ALIAS("of:N*T*Cpericom,pt7c4338C*");
MODULE_ALIAS("of:N*T*Cepson,rx8025");
MODULE_ALIAS("of:N*T*Cepson,rx8025C*");
MODULE_ALIAS("of:N*T*Cisil,isl12057");
MODULE_ALIAS("of:N*T*Cisil,isl12057C*");
MODULE_ALIAS("of:N*T*Cepson,rx8130");
MODULE_ALIAS("of:N*T*Cepson,rx8130C*");
MODULE_ALIAS("i2c:ds1307");
MODULE_ALIAS("i2c:ds1308");
MODULE_ALIAS("i2c:ds1337");
MODULE_ALIAS("i2c:ds1338");
MODULE_ALIAS("i2c:ds1339");
MODULE_ALIAS("i2c:ds1388");
MODULE_ALIAS("i2c:ds1340");
MODULE_ALIAS("i2c:ds1341");
MODULE_ALIAS("i2c:ds3231");
MODULE_ALIAS("i2c:m41t0");
MODULE_ALIAS("i2c:m41t00");
MODULE_ALIAS("i2c:m41t11");
MODULE_ALIAS("i2c:mcp7940x");
MODULE_ALIAS("i2c:mcp7941x");
MODULE_ALIAS("i2c:pt7c4338");
MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:isl12057");
MODULE_ALIAS("i2c:rx8130");

MODULE_INFO(srcversion, "E4386295191DEF058909CD5");
