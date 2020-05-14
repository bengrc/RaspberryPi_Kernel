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
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xa47861f7, "thermal_cooling_device_unregister" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x911ee79e, "of_prop_next_u32" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x6ef5df08, "thermal_of_cooling_device_register" },
	{ 0x36a05de, "devm_hwmon_device_register_with_groups" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x2978fde1, "gpiod_direction_output" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x997e84c0, "devm_gpiod_get_index" },
	{ 0x7ef053e2, "gpiod_count" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4c9042d2, "kobject_uevent" },
	{ 0xd6daa318, "sysfs_notify" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7fcce07f, "gpiod_get_value_cansleep" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x91715312, "sprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cgpio-fan");
MODULE_ALIAS("of:N*T*Cgpio-fanC*");

MODULE_INFO(srcversion, "379FA6181FC7B8675788FE5");
