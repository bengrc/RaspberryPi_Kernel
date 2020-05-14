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
	{ 0xa8b124c2, "__rtc_register_device" },
	{ 0x600001d0, "devm_rtc_allocate_device" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6f109521, "regmap_bulk_write" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cepson,rx8581");
MODULE_ALIAS("of:N*T*Cepson,rx8581C*");
MODULE_ALIAS("i2c:rx8581");

MODULE_INFO(srcversion, "B1B9F9D033577C6308CA9A7");
