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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xa1633992, "_dev_err" },
	{ 0x1b2f588a, "of_get_next_child" },
	{ 0x2ea57c87, "hwmon_device_register" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0x9d669763, "memcpy" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf8ce5fa3, "of_device_get_match_data" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91715312, "sprintf" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6661db0d, "i2c_smbus_write_word_data" },
	{ 0xc4f9871b, "i2c_smbus_read_word_data" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x52526626, "device_remove_file" },
	{ 0xd24baf21, "hwmon_device_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cti,ads1015");
MODULE_ALIAS("of:N*T*Cti,ads1015C*");
MODULE_ALIAS("of:N*T*Cti,ads1115");
MODULE_ALIAS("of:N*T*Cti,ads1115C*");
MODULE_ALIAS("i2c:ads1015");
MODULE_ALIAS("i2c:ads1115");

MODULE_INFO(srcversion, "21ECF37F1F37A737DC58E74");
