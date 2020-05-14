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
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xf686693, "__devm_regmap_init_spi" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x259ebaa7, "devm_rtc_device_register" },
	{ 0x36a05de, "devm_hwmon_device_register_with_groups" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x91715312, "sprintf" },
	{ 0x12a38747, "usleep_range" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x357700b1, "rtc_update_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xa1633992, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6f109521, "regmap_bulk_write" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029C*");
MODULE_ALIAS("of:N*T*Crv3029");
MODULE_ALIAS("of:N*T*Crv3029C*");
MODULE_ALIAS("of:N*T*Crv3029c2");
MODULE_ALIAS("of:N*T*Crv3029c2C*");
MODULE_ALIAS("of:N*T*Cmc,rv3029c2");
MODULE_ALIAS("of:N*T*Cmc,rv3029c2C*");
MODULE_ALIAS("i2c:rv3029");
MODULE_ALIAS("i2c:rv3029c2");

MODULE_INFO(srcversion, "F317A95B92F1607893359F0");
