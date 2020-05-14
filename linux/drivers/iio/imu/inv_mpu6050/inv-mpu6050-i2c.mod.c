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
	{ 0x6ff3b4b4, "i2c_mux_add_adapter" },
	{ 0xf8ce5fa3, "of_device_get_match_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xd7417963, "i2c_mux_del_adapters" },
	{ 0xd33efe, "inv_mpu_pmops" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1404de7c, "i2c_mux_alloc" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa1633992, "_dev_err" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0x1d6f91ee, "inv_mpu6050_set_power_itg" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x34dcdd25, "inv_mpu_core_probe" },
	{ 0xf138a9be, "regmap_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux,inv-mpu6050";

MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("i2c:mpu6050");
MODULE_ALIAS("i2c:mpu6500");
MODULE_ALIAS("i2c:mpu6515");
MODULE_ALIAS("i2c:mpu9150");
MODULE_ALIAS("i2c:mpu9250");
MODULE_ALIAS("i2c:mpu9255");
MODULE_ALIAS("i2c:icm20608");
MODULE_ALIAS("i2c:icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602C*");

MODULE_INFO(srcversion, "C9574211997E4322C883C37");
