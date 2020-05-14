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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x77edb12f, "iio_read_const_attr" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x1eb64646, "div64_s64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3393ca9e, "devm_iio_device_alloc" },
	{ 0xe58e8d49, "__devm_iio_device_register" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x116bcb09, "regmap_get_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf138a9be, "regmap_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";


MODULE_INFO(srcversion, "BB5D77A73E4AC22FD79F612");
