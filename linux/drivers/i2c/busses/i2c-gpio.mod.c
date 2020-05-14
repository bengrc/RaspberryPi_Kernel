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
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x321ae865, "desc_to_gpio" },
	{ 0x85228ada, "i2c_bit_add_numbered_bus" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xf81a4df2, "gpiod_cansleep" },
	{ 0x815d4afc, "devm_gpiod_get" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa1633992, "_dev_err" },
	{ 0x997e84c0, "devm_gpiod_get_index" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x7fcce07f, "gpiod_get_value_cansleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf63bc4f, "i2c_del_adapter" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-algo-bit";

MODULE_ALIAS("of:N*T*Ci2c-gpio");
MODULE_ALIAS("of:N*T*Ci2c-gpioC*");

MODULE_INFO(srcversion, "B9A8C246552D969BC0A801B");
