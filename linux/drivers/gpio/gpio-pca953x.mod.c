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
	{ 0xf8ce5fa3, "of_device_get_match_data" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x57a13eb4, "devm_gpiochip_add_data" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf5e18bfd, "regulator_enable" },
	{ 0x91866963, "devm_regulator_get" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9d669763, "memcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1a2fc39c, "gpiochip_get_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2c3a7a05, "i2c_smbus_read_byte_data" },
	{ 0x80019590, "i2c_smbus_write_i2c_block_data" },
	{ 0x9240c03a, "i2c_smbus_read_i2c_block_data" },
	{ 0x6661db0d, "i2c_smbus_write_word_data" },
	{ 0xba5921d, "i2c_smbus_write_byte_data" },
	{ 0xc4f9871b, "i2c_smbus_read_word_data" },
	{ 0x978b0c30, "regulator_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa1633992, "_dev_err" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pca9505");
MODULE_ALIAS("of:N*T*Cnxp,pca9505C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9534");
MODULE_ALIAS("of:N*T*Cnxp,pca9534C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9535");
MODULE_ALIAS("of:N*T*Cnxp,pca9535C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9536");
MODULE_ALIAS("of:N*T*Cnxp,pca9536C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9537");
MODULE_ALIAS("of:N*T*Cnxp,pca9537C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9538");
MODULE_ALIAS("of:N*T*Cnxp,pca9538C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9539");
MODULE_ALIAS("of:N*T*Cnxp,pca9539C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9554");
MODULE_ALIAS("of:N*T*Cnxp,pca9554C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9555");
MODULE_ALIAS("of:N*T*Cnxp,pca9555C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9556");
MODULE_ALIAS("of:N*T*Cnxp,pca9556C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9557");
MODULE_ALIAS("of:N*T*Cnxp,pca9557C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9574");
MODULE_ALIAS("of:N*T*Cnxp,pca9574C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9575");
MODULE_ALIAS("of:N*T*Cnxp,pca9575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9698");
MODULE_ALIAS("of:N*T*Cnxp,pca9698C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6524");
MODULE_ALIAS("of:N*T*Cnxp,pcal6524C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9555a");
MODULE_ALIAS("of:N*T*Cnxp,pcal9555aC*");
MODULE_ALIAS("of:N*T*Cmaxim,max7310");
MODULE_ALIAS("of:N*T*Cmaxim,max7310C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7312");
MODULE_ALIAS("of:N*T*Cmaxim,max7312C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7313");
MODULE_ALIAS("of:N*T*Cmaxim,max7313C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7315");
MODULE_ALIAS("of:N*T*Cmaxim,max7315C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7318");
MODULE_ALIAS("of:N*T*Cmaxim,max7318C*");
MODULE_ALIAS("of:N*T*Cti,pca6107");
MODULE_ALIAS("of:N*T*Cti,pca6107C*");
MODULE_ALIAS("of:N*T*Cti,pca9536");
MODULE_ALIAS("of:N*T*Cti,pca9536C*");
MODULE_ALIAS("of:N*T*Cti,tca6408");
MODULE_ALIAS("of:N*T*Cti,tca6408C*");
MODULE_ALIAS("of:N*T*Cti,tca6416");
MODULE_ALIAS("of:N*T*Cti,tca6416C*");
MODULE_ALIAS("of:N*T*Cti,tca6424");
MODULE_ALIAS("of:N*T*Cti,tca6424C*");
MODULE_ALIAS("of:N*T*Connn,pca9654");
MODULE_ALIAS("of:N*T*Connn,pca9654C*");
MODULE_ALIAS("of:N*T*Cexar,xra1202");
MODULE_ALIAS("of:N*T*Cexar,xra1202C*");
MODULE_ALIAS("acpi*:INT3491:*");
MODULE_ALIAS("i2c:pca9505");
MODULE_ALIAS("i2c:pca9534");
MODULE_ALIAS("i2c:pca9535");
MODULE_ALIAS("i2c:pca9536");
MODULE_ALIAS("i2c:pca9537");
MODULE_ALIAS("i2c:pca9538");
MODULE_ALIAS("i2c:pca9539");
MODULE_ALIAS("i2c:pca9554");
MODULE_ALIAS("i2c:pca9555");
MODULE_ALIAS("i2c:pca9556");
MODULE_ALIAS("i2c:pca9557");
MODULE_ALIAS("i2c:pca9574");
MODULE_ALIAS("i2c:pca9575");
MODULE_ALIAS("i2c:pca9698");
MODULE_ALIAS("i2c:pcal6524");
MODULE_ALIAS("i2c:pcal9555a");
MODULE_ALIAS("i2c:max7310");
MODULE_ALIAS("i2c:max7312");
MODULE_ALIAS("i2c:max7313");
MODULE_ALIAS("i2c:max7315");
MODULE_ALIAS("i2c:max7318");
MODULE_ALIAS("i2c:pca6107");
MODULE_ALIAS("i2c:tca6408");
MODULE_ALIAS("i2c:tca6416");
MODULE_ALIAS("i2c:tca6424");
MODULE_ALIAS("i2c:tca9539");
MODULE_ALIAS("i2c:tca9554");
MODULE_ALIAS("i2c:xra1202");

MODULE_INFO(srcversion, "C0D205234B6172170BAC215");
