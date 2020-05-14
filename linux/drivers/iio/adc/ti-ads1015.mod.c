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
	{ 0x77edb12f, "iio_read_const_attr" },
	{ 0x65ae3cc0, "iio_validate_scan_mask_onehot" },
	{ 0xa0fb4056, "iio_triggered_buffer_predisable" },
	{ 0x371c770e, "iio_triggered_buffer_postenable" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0x524254, "iio_push_event" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0xff6cd711, "__iio_device_register" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0x51b6a808, "__pm_runtime_use_autosuspend" },
	{ 0xdb6cbf4, "pm_runtime_set_autosuspend_delay" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x1b2f588a, "of_get_next_child" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x2b85b7ae, "irq_get_irq_data" },
	{ 0x329af4bb, "devm_iio_triggered_buffer_setup" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x9d669763, "memcpy" },
	{ 0xf8ce5fa3, "of_device_get_match_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3393ca9e, "devm_iio_device_alloc" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2476551d, "iio_device_release_direct_mode" },
	{ 0x4137fd40, "iio_device_claim_direct_mode" },
	{ 0xeec3ce3c, "iio_trigger_notify_done" },
	{ 0xaa920b3e, "iio_push_to_buffers" },
	{ 0xa3368dd3, "iio_get_time_ns" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x1027251, "__pm_runtime_suspend" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0x116bcb09, "regmap_get_device" },
	{ 0x66c06339, "__pm_runtime_set_status" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0x42ae9996, "iio_device_unregister" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("of:N*T*Cti,ads1015");
MODULE_ALIAS("of:N*T*Cti,ads1015C*");
MODULE_ALIAS("of:N*T*Cti,ads1115");
MODULE_ALIAS("of:N*T*Cti,ads1115C*");
MODULE_ALIAS("i2c:ads1015");
MODULE_ALIAS("i2c:ads1115");

MODULE_INFO(srcversion, "E111AE36EB0F42C6AD3D840");
