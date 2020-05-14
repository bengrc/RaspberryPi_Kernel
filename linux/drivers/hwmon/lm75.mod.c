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
	{ 0xd755c8f5, "_dev_info" },
	{ 0x16c7ddd8, "devm_hwmon_device_register_with_info" },
	{ 0x7d3064b1, "devm_add_action" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf8ce5fa3, "of_device_get_match_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xba5921d, "i2c_smbus_write_byte_data" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2c3a7a05, "i2c_smbus_read_byte_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cadi,adt75");
MODULE_ALIAS("of:N*T*Cadi,adt75C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1775");
MODULE_ALIAS("of:N*T*Cdallas,ds1775C*");
MODULE_ALIAS("of:N*T*Cdallas,ds75");
MODULE_ALIAS("of:N*T*Cdallas,ds75C*");
MODULE_ALIAS("of:N*T*Cdallas,ds7505");
MODULE_ALIAS("of:N*T*Cdallas,ds7505C*");
MODULE_ALIAS("of:N*T*Cgmt,g751");
MODULE_ALIAS("of:N*T*Cgmt,g751C*");
MODULE_ALIAS("of:N*T*Cnational,lm75");
MODULE_ALIAS("of:N*T*Cnational,lm75C*");
MODULE_ALIAS("of:N*T*Cnational,lm75a");
MODULE_ALIAS("of:N*T*Cnational,lm75aC*");
MODULE_ALIAS("of:N*T*Cnational,lm75b");
MODULE_ALIAS("of:N*T*Cnational,lm75bC*");
MODULE_ALIAS("of:N*T*Cmaxim,max6625");
MODULE_ALIAS("of:N*T*Cmaxim,max6625C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6626");
MODULE_ALIAS("of:N*T*Cmaxim,max6626C*");
MODULE_ALIAS("of:N*T*Cmaxim,mcp980x");
MODULE_ALIAS("of:N*T*Cmaxim,mcp980xC*");
MODULE_ALIAS("of:N*T*Cst,stds75");
MODULE_ALIAS("of:N*T*Cst,stds75C*");
MODULE_ALIAS("of:N*T*Cmicrochip,tcn75");
MODULE_ALIAS("of:N*T*Cmicrochip,tcn75C*");
MODULE_ALIAS("of:N*T*Cti,tmp100");
MODULE_ALIAS("of:N*T*Cti,tmp100C*");
MODULE_ALIAS("of:N*T*Cti,tmp101");
MODULE_ALIAS("of:N*T*Cti,tmp101C*");
MODULE_ALIAS("of:N*T*Cti,tmp105");
MODULE_ALIAS("of:N*T*Cti,tmp105C*");
MODULE_ALIAS("of:N*T*Cti,tmp112");
MODULE_ALIAS("of:N*T*Cti,tmp112C*");
MODULE_ALIAS("of:N*T*Cti,tmp175");
MODULE_ALIAS("of:N*T*Cti,tmp175C*");
MODULE_ALIAS("of:N*T*Cti,tmp275");
MODULE_ALIAS("of:N*T*Cti,tmp275C*");
MODULE_ALIAS("of:N*T*Cti,tmp75");
MODULE_ALIAS("of:N*T*Cti,tmp75C*");
MODULE_ALIAS("of:N*T*Cti,tmp75c");
MODULE_ALIAS("of:N*T*Cti,tmp75cC*");
MODULE_ALIAS("i2c:adt75");
MODULE_ALIAS("i2c:ds1775");
MODULE_ALIAS("i2c:ds75");
MODULE_ALIAS("i2c:ds7505");
MODULE_ALIAS("i2c:g751");
MODULE_ALIAS("i2c:lm75");
MODULE_ALIAS("i2c:lm75a");
MODULE_ALIAS("i2c:lm75b");
MODULE_ALIAS("i2c:max6625");
MODULE_ALIAS("i2c:max6626");
MODULE_ALIAS("i2c:mcp980x");
MODULE_ALIAS("i2c:stds75");
MODULE_ALIAS("i2c:tcn75");
MODULE_ALIAS("i2c:tmp100");
MODULE_ALIAS("i2c:tmp101");
MODULE_ALIAS("i2c:tmp105");
MODULE_ALIAS("i2c:tmp112");
MODULE_ALIAS("i2c:tmp175");
MODULE_ALIAS("i2c:tmp275");
MODULE_ALIAS("i2c:tmp75");
MODULE_ALIAS("i2c:tmp75c");

MODULE_INFO(srcversion, "440EEC0CFDCE9A191FE91E8");
