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
	{ 0xab78269d, "thermal_cdev_update" },
	{ 0x6ef5df08, "thermal_of_cooling_device_register" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x98f9cc, "of_property_count_elems_of_size" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x36a05de, "devm_hwmon_device_register_with_groups" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x6d0bad1f, "rpi_firmware_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0x91715312, "sprintf" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xa1633992, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa47861f7, "thermal_cooling_device_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-fan");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-fanC*");

MODULE_INFO(srcversion, "0023611D7F1F67F411540C4");
