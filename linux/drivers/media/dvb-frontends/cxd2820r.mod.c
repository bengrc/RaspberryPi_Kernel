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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0x5f12db20, "regmap_exit" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x6f109521, "regmap_bulk_write" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x562e30b6, "gpiochip_remove" },
	{ 0x834f3b, "gpiochip_add_data_with_key" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xd34da80c, "i2c_new_dummy" },
	{ 0x71c90087, "memcmp" },
	{ 0x943541c2, "__regmap_init_i2c" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5347d8c2, "i2c_unregister_device" },
	{ 0xa1633992, "_dev_err" },
	{ 0x1a2fc39c, "gpiochip_get_data" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x36790da2, "i2c_new_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("i2c:cxd2820r");

MODULE_INFO(srcversion, "C7CE791E42E79ABBFC2FD10");
