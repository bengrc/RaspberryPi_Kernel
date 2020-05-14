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
	{ 0xd2027ac4, "of_get_property" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0xa1633992, "_dev_err" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x5cd44633, "pps_register_source" },
	{ 0xb81960ca, "snprintf" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0x8b0ed55b, "gpiod_direction_input" },
	{ 0x4fdcc69f, "devm_gpio_request" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd3db02ff, "pps_event" },
	{ 0xca36db50, "gpiod_get_raw_value" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x30b35565, "pps_unregister_source" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pps_core";

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "190C209D8C4CC24DC737555");
