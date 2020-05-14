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
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xff6cd711, "__iio_device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf5e18bfd, "regulator_enable" },
	{ 0x91866963, "devm_regulator_get" },
	{ 0x5f754e5a, "memset" },
	{ 0x3393ca9e, "devm_iio_device_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4aa24183, "regulator_get_voltage" },
	{ 0xd2a64942, "spi_get_device_id" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x978b0c30, "regulator_disable" },
	{ 0x42ae9996, "iio_device_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("spi:mcp3001");
MODULE_ALIAS("spi:mcp3002");
MODULE_ALIAS("spi:mcp3004");
MODULE_ALIAS("spi:mcp3008");
MODULE_ALIAS("spi:mcp3201");
MODULE_ALIAS("spi:mcp3202");
MODULE_ALIAS("spi:mcp3204");
MODULE_ALIAS("spi:mcp3208");
MODULE_ALIAS("spi:mcp3301");
MODULE_ALIAS("spi:mcp3550-50");
MODULE_ALIAS("spi:mcp3550-60");
MODULE_ALIAS("spi:mcp3551");
MODULE_ALIAS("spi:mcp3553");
MODULE_ALIAS("of:N*T*Cmcp3001");
MODULE_ALIAS("of:N*T*Cmcp3001C*");
MODULE_ALIAS("of:N*T*Cmcp3002");
MODULE_ALIAS("of:N*T*Cmcp3002C*");
MODULE_ALIAS("of:N*T*Cmcp3004");
MODULE_ALIAS("of:N*T*Cmcp3004C*");
MODULE_ALIAS("of:N*T*Cmcp3008");
MODULE_ALIAS("of:N*T*Cmcp3008C*");
MODULE_ALIAS("of:N*T*Cmcp3201");
MODULE_ALIAS("of:N*T*Cmcp3201C*");
MODULE_ALIAS("of:N*T*Cmcp3202");
MODULE_ALIAS("of:N*T*Cmcp3202C*");
MODULE_ALIAS("of:N*T*Cmcp3204");
MODULE_ALIAS("of:N*T*Cmcp3204C*");
MODULE_ALIAS("of:N*T*Cmcp3208");
MODULE_ALIAS("of:N*T*Cmcp3208C*");
MODULE_ALIAS("of:N*T*Cmcp3301");
MODULE_ALIAS("of:N*T*Cmcp3301C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3001");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3001C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3002");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3002C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3004");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3004C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3008");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3008C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3201");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3201C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3202");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3202C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3204");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3204C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3208");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3208C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3301");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3301C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3550-50");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3550-50C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3550-60");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3550-60C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3551");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3551C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3553");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3553C*");

MODULE_INFO(srcversion, "2132041D64E02EAE44E7397");
