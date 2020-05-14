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
	{ 0x77edb12f, "iio_read_const_attr" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xc4f9871b, "i2c_smbus_read_word_data" },
	{ 0xa1633992, "_dev_err" },
	{ 0xff6cd711, "__iio_device_register" },
	{ 0x2c3a7a05, "i2c_smbus_read_byte_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3393ca9e, "devm_iio_device_alloc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xba5921d, "i2c_smbus_write_byte_data" },
	{ 0x42ae9996, "iio_device_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:tsl4531");

MODULE_INFO(srcversion, "F493673F1787D74B9DF115F");
