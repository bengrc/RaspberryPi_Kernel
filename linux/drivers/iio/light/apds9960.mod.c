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
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xff6cd711, "__iio_device_register" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x6251832d, "regmap_field_update_bits_base" },
	{ 0x60edcba2, "devm_regmap_field_alloc" },
	{ 0x51b6a808, "__pm_runtime_use_autosuspend" },
	{ 0xdb6cbf4, "pm_runtime_set_autosuspend_delay" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x7dfe9d71, "iio_device_attach_buffer" },
	{ 0x3bdfa85a, "devm_iio_kfifo_allocate" },
	{ 0x3393ca9e, "devm_iio_device_alloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1027251, "__pm_runtime_suspend" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0x6f109521, "regmap_bulk_write" },
	{ 0xa1633992, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xaa920b3e, "iio_push_to_buffers" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x524254, "iio_push_event" },
	{ 0xa3368dd3, "iio_get_time_ns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
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
"depends=industrialio,kfifo_buf";

MODULE_ALIAS("of:N*T*Cavago,apds9960");
MODULE_ALIAS("of:N*T*Cavago,apds9960C*");
MODULE_ALIAS("i2c:apds9960");

MODULE_INFO(srcversion, "584E5C1C74ADC9B322F3CDC");
