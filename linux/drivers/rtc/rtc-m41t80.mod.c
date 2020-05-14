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
	{ 0xd755c8f5, "_dev_info" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xea1b0b21, "of_clk_add_provider" },
	{ 0xf1ca83f6, "of_clk_src_simple_get" },
	{ 0xe315f712, "clk_register" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0xa8b124c2, "__rtc_register_device" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x600001d0, "devm_rtc_allocate_device" },
	{ 0xf8ce5fa3, "of_device_get_match_data" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x357700b1, "rtc_update_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x9240c03a, "i2c_smbus_read_i2c_block_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x80019590, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa1633992, "_dev_err" },
	{ 0xba5921d, "i2c_smbus_write_byte_data" },
	{ 0x2c3a7a05, "i2c_smbus_read_byte_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cst,m41t62");
MODULE_ALIAS("of:N*T*Cst,m41t62C*");
MODULE_ALIAS("of:N*T*Cst,m41t65");
MODULE_ALIAS("of:N*T*Cst,m41t65C*");
MODULE_ALIAS("of:N*T*Cst,m41t80");
MODULE_ALIAS("of:N*T*Cst,m41t80C*");
MODULE_ALIAS("of:N*T*Cst,m41t81");
MODULE_ALIAS("of:N*T*Cst,m41t81C*");
MODULE_ALIAS("of:N*T*Cst,m41t81s");
MODULE_ALIAS("of:N*T*Cst,m41t81sC*");
MODULE_ALIAS("of:N*T*Cst,m41t82");
MODULE_ALIAS("of:N*T*Cst,m41t82C*");
MODULE_ALIAS("of:N*T*Cst,m41t83");
MODULE_ALIAS("of:N*T*Cst,m41t83C*");
MODULE_ALIAS("of:N*T*Cst,m41t84");
MODULE_ALIAS("of:N*T*Cst,m41t84C*");
MODULE_ALIAS("of:N*T*Cst,m41t85");
MODULE_ALIAS("of:N*T*Cst,m41t85C*");
MODULE_ALIAS("of:N*T*Cst,m41t87");
MODULE_ALIAS("of:N*T*Cst,m41t87C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv4162");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv4162C*");
MODULE_ALIAS("of:N*T*Cst,rv4162");
MODULE_ALIAS("of:N*T*Cst,rv4162C*");
MODULE_ALIAS("of:N*T*Crv4162");
MODULE_ALIAS("of:N*T*Crv4162C*");
MODULE_ALIAS("i2c:m41t62");
MODULE_ALIAS("i2c:m41t65");
MODULE_ALIAS("i2c:m41t80");
MODULE_ALIAS("i2c:m41t81");
MODULE_ALIAS("i2c:m41t81s");
MODULE_ALIAS("i2c:m41t82");
MODULE_ALIAS("i2c:m41t83");
MODULE_ALIAS("i2c:m41st84");
MODULE_ALIAS("i2c:m41st85");
MODULE_ALIAS("i2c:m41st87");
MODULE_ALIAS("i2c:rv4162");

MODULE_INFO(srcversion, "DFB64531D9B2A3D6F3AE9FA");
