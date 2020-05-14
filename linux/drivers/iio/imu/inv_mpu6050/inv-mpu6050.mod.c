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
	{ 0xf9a482f9, "msleep" },
	{ 0xf9cf4174, "of_iio_read_mount_matrix" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x77edb12f, "iio_read_const_attr" },
	{ 0xeec3ce3c, "iio_trigger_notify_done" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6f109521, "regmap_bulk_write" },
	{ 0x95915fbf, "regmap_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3fa4367c, "devm_iio_trigger_alloc" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x3393ca9e, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe58e8d49, "__devm_iio_device_register" },
	{ 0x277ebde8, "__devm_iio_trigger_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2b85b7ae, "irq_get_irq_data" },
	{ 0x373db350, "kstrtoint" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x4137fd40, "iio_device_claim_direct_mode" },
	{ 0x350d1ea5, "iio_show_mount_matrix" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x60e1284f, "__module_get" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x2476551d, "iio_device_release_direct_mode" },
	{ 0x329af4bb, "devm_iio_triggered_buffer_setup" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xaa920b3e, "iio_push_to_buffers" },
	{ 0x116bcb09, "regmap_get_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xf138a9be, "regmap_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";


MODULE_INFO(srcversion, "39548210797A7BF61D0EC41");
