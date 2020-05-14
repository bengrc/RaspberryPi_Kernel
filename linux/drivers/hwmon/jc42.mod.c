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
	{ 0x16c7ddd8, "devm_hwmon_device_register_with_info" },
	{ 0xaeaf222b, "device_property_present" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6661db0d, "i2c_smbus_write_word_data" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc4f9871b, "i2c_smbus_read_word_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cjedec,jc-42.4-temp");
MODULE_ALIAS("of:N*T*Cjedec,jc-42.4-tempC*");
MODULE_ALIAS("i2c:jc42");

MODULE_INFO(srcversion, "92BB5F1A96D34B76D15CB33");
