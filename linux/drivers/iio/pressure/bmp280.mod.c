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
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x51b6a808, "__pm_runtime_use_autosuspend" },
	{ 0x1027251, "__pm_runtime_suspend" },
	{ 0x978b0c30, "regulator_disable" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0x815d4afc, "devm_gpiod_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x1eb64646, "div64_s64" },
	{ 0x42ae9996, "iio_device_unregister" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3393ca9e, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xff6cd711, "__iio_device_register" },
	{ 0x2b85b7ae, "irq_get_irq_data" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x91866963, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x66c06339, "__pm_runtime_set_status" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xdb6cbf4, "pm_runtime_set_autosuspend_delay" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0x8722ee95, "gpiod_set_value" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xf5e18bfd, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";


MODULE_INFO(srcversion, "E5409A225D9B78987B411DD");
