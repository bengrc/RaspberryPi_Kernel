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
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x185038dd, "gpiod_direction_output_raw" },
	{ 0xa1633992, "_dev_err" },
	{ 0xa907c854, "w1_add_master_device" },
	{ 0x2978fde1, "gpiod_direction_output" },
	{ 0x92b46ef6, "devm_gpiod_get_index_optional" },
	{ 0x997e84c0, "devm_gpiod_get_index" },
	{ 0xd2027ac4, "of_get_property" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x3b2b544c, "of_root" },
	{ 0x8e1946b6, "gpiod_get_value" },
	{ 0xc2849b54, "w1_remove_master_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8722ee95, "gpiod_set_value" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

MODULE_ALIAS("of:N*T*Cw1-gpio");
MODULE_ALIAS("of:N*T*Cw1-gpioC*");

MODULE_INFO(srcversion, "4FE05802DF224C372D2F4F8");
