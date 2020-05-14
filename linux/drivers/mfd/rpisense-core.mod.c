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
	{ 0x2c3a7a05, "i2c_smbus_read_byte_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0x815d4afc, "devm_gpiod_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xafc7c2e6, "platform_device_alloc" },
	{ 0x74e3f75e, "platform_device_add" },
	{ 0xd12088ea, "platform_device_unregister" },
	{ 0xa1633992, "_dev_err" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xa3f8a07f, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crpi,rpi-sense");
MODULE_ALIAS("of:N*T*Crpi,rpi-senseC*");
MODULE_ALIAS("i2c:rpi-sense");

MODULE_INFO(srcversion, "A7DC91DFB60B9F164003CAC");
