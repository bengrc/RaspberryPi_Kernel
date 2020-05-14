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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xb3e8d6e1, "fb_sys_read" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xb2c69a3, "backlight_device_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0x978b0c30, "regulator_disable" },
	{ 0x34438e7, "register_framebuffer" },
	{ 0xd7aaaf44, "pwm_get" },
	{ 0xf5e18bfd, "regulator_enable" },
	{ 0x8722ee95, "gpiod_set_value" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xee63647, "fb_deferred_io_init" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x5b151d90, "devm_regulator_get_optional" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0xf8ce5fa3, "of_device_get_match_data" },
	{ 0xaf2baebb, "framebuffer_alloc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x45dd4a41, "sys_fillrect" },
	{ 0xbd6515f0, "sys_copyarea" },
	{ 0xd5806961, "sys_imageblit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x757997d9, "pwm_apply_state" },
	{ 0x807d4746, "framebuffer_release" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0x43e1d70a, "fb_deferred_io_cleanup" },
	{ 0xdcf32f6b, "pwm_put" },
	{ 0x471340a, "unregister_framebuffer" },
	{ 0x8bb5ab2d, "backlight_device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa1633992, "_dev_err" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt";

MODULE_ALIAS("i2c:ssd1305fb");
MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("i2c:ssd1309fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2cC*");

MODULE_INFO(srcversion, "5D22B60B6FB973A1FD58A41");
