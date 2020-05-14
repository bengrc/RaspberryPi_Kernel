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
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0xa8b124c2, "__rtc_register_device" },
	{ 0x7d3064b1, "devm_add_action" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x600001d0, "devm_rtc_allocate_device" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x9240c03a, "i2c_smbus_read_i2c_block_data" },
	{ 0x80019590, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x357700b1, "rtc_update_irq" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84b183ae, "strncmp" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xba5921d, "i2c_smbus_write_byte_data" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2c3a7a05, "i2c_smbus_read_byte_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:abx80x");
MODULE_ALIAS("i2c:ab0801");
MODULE_ALIAS("i2c:ab0803");
MODULE_ALIAS("i2c:ab0804");
MODULE_ALIAS("i2c:ab0805");
MODULE_ALIAS("i2c:ab1801");
MODULE_ALIAS("i2c:ab1803");
MODULE_ALIAS("i2c:ab1804");
MODULE_ALIAS("i2c:ab1805");
MODULE_ALIAS("i2c:rv1805");

MODULE_INFO(srcversion, "A6B03D24BC2EB1F9670CF75");
