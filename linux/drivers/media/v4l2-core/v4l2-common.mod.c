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
	{ 0x402b8281, "__request_module" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3b23ce0e, "v4l2_ctrl_fill" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x61caf07d, "i2c_new_probed_device" },
	{ 0x5f754e5a, "memset" },
	{ 0xa4fb96ba, "spi_new_device" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5347d8c2, "i2c_unregister_device" },
	{ 0xd040e01a, "module_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x83ef268d, "v4l2_device_register_subdev" },
	{ 0xb969f089, "v4l2_subdev_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2d8a56bc, "spi_unregister_device" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x36790da2, "i2c_new_device" },
	{ 0x42b41bb0, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "E335B8605A9C5CBD7903085");
