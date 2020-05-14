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
	{ 0x435bbda1, "bmp280_dev_pm_ops" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xa1633992, "_dev_err" },
	{ 0x8882f47c, "bmp280_regmap_config" },
	{ 0x22e09327, "bmp280_common_probe" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x6204291e, "bmp180_regmap_config" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x693d134a, "bmp280_common_remove" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bmp280";

MODULE_ALIAS("i2c:bmp280");
MODULE_ALIAS("i2c:bmp180");
MODULE_ALIAS("i2c:bmp085");
MODULE_ALIAS("i2c:bme280");
MODULE_ALIAS("of:N*T*Cbosch,bme280");
MODULE_ALIAS("of:N*T*Cbosch,bme280C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp280");
MODULE_ALIAS("of:N*T*Cbosch,bmp280C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp180");
MODULE_ALIAS("of:N*T*Cbosch,bmp180C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp085");
MODULE_ALIAS("of:N*T*Cbosch,bmp085C*");
MODULE_ALIAS("acpi*:BMP0280:*");
MODULE_ALIAS("acpi*:BMP0180:*");
MODULE_ALIAS("acpi*:BMP0085:*");
MODULE_ALIAS("acpi*:BME0280:*");

MODULE_INFO(srcversion, "F2CABD4EAE6BEF3290DF490");
