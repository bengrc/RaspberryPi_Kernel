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
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x7c093fe4, "of_property_read_variable_u16_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x47820ec9, "of_match_device" },
	{ 0x1eb0f76c, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x4f7e9f73, "devm_kfree" },
	{ 0x175ec858, "input_register_device" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x89393a9, "hwmon_device_register_with_groups" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf5e18bfd, "regulator_enable" },
	{ 0x2e9ba3fd, "regulator_get" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x8ccc143c, "input_allocate_device" },
	{ 0x13ddb114, "spi_setup" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d913362, "regulator_put" },
	{ 0xd24baf21, "hwmon_device_unregister" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x978b0c30, "regulator_disable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3b3a1192, "input_event" },
	{ 0xa1633992, "_dev_err" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xde1ad932, "spi_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xca36db50, "gpiod_get_raw_value" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0x91715312, "sprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");

MODULE_INFO(srcversion, "A3A9510F78B981FC598BA2A");
