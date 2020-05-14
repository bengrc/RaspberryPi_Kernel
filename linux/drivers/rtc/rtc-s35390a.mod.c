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
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x357700b1, "rtc_update_irq" },
	{ 0x259ebaa7, "devm_rtc_device_register" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd34da80c, "i2c_new_dummy" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5347d8c2, "i2c_unregister_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cs35390a");
MODULE_ALIAS("of:N*T*Cs35390aC*");
MODULE_ALIAS("of:N*T*Csii,s35390a");
MODULE_ALIAS("of:N*T*Csii,s35390aC*");
MODULE_ALIAS("i2c:s35390a");

MODULE_INFO(srcversion, "6E75B745AA6285C4BC51313");
