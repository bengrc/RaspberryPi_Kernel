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
	{ 0x2ce48957, "rtc_nvmem_register" },
	{ 0xa8b124c2, "__rtc_register_device" },
	{ 0xd0694f7a, "rtc_add_group" },
	{ 0xcba6de06, "device_property_read_u32_array" },
	{ 0x86d35081, "device_property_read_u8_array" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x600001d0, "devm_rtc_allocate_device" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd6daa318, "sysfs_notify" },
	{ 0x357700b1, "rtc_update_irq" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x6f109521, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0x91715312, "sprintf" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028C*");

MODULE_INFO(srcversion, "658210B31A7B065D46962C8");
