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
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0xa1633992, "_dev_err" },
	{ 0x8b0ed55b, "gpiod_direction_input" },
	{ 0x175ec858, "input_register_device" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8ccc143c, "input_allocate_device" },
	{ 0x403a534d, "rpisense_get_dev" },
	{ 0x3b3a1192, "input_event" },
	{ 0x1b04319, "rpisense_reg_read" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rpisense-core";

MODULE_ALIAS("platform:rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-jsC*");

MODULE_INFO(srcversion, "3A1020FD8FE11A5D677800E");
