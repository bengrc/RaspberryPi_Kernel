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
	{ 0x5a79116e, "w5100_pm_ops" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xd0106a1b, "spi_write_then_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xde1ad932, "spi_sync" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xde6b2098, "w5100_ops_priv" },
	{ 0xf75ec99b, "w5100_probe" },
	{ 0xfbe951b7, "of_get_mac_address" },
	{ 0xd2a64942, "spi_get_device_id" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xcab0bb77, "w5100_remove" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=w5100";

MODULE_ALIAS("spi:w5100");
MODULE_ALIAS("spi:w5200");
MODULE_ALIAS("spi:w5500");

MODULE_INFO(srcversion, "1F36C594F60B6D5BB7F9838");
