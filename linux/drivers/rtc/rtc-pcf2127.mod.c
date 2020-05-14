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
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xd2a64942, "spi_get_device_id" },
	{ 0xf686693, "__devm_regmap_init_spi" },
	{ 0x36489dc, "__devm_regmap_init" },
	{ 0x2ce48957, "rtc_nvmem_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x259ebaa7, "devm_rtc_device_register" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa1633992, "_dev_err" },
	{ 0x6f109521, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129C*");

MODULE_INFO(srcversion, "4F5B04F30C20D884E738CB3");
