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
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7c32d0f0, "printk" },
	{ 0x21af32f7, "ida_free" },
	{ 0x328a05f1, "strncpy" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:dtt7579");
MODULE_ALIAS("i2c:dtt759x");
MODULE_ALIAS("i2c:z201");
MODULE_ALIAS("i2c:unknown_1");
MODULE_ALIAS("i2c:tua6010xs");
MODULE_ALIAS("i2c:env57h1xd5");
MODULE_ALIAS("i2c:tua6034");
MODULE_ALIAS("i2c:tda665x");
MODULE_ALIAS("i2c:tded4");
MODULE_ALIAS("i2c:tdhu2");
MODULE_ALIAS("i2c:tbmv");
MODULE_ALIAS("i2c:sd1878_tda8261");
MODULE_ALIAS("i2c:opera1");
MODULE_ALIAS("i2c:dtos403ih102a");
MODULE_ALIAS("i2c:tdtc9251dh0");
MODULE_ALIAS("i2c:tbdu18132");
MODULE_ALIAS("i2c:tbmu24112");
MODULE_ALIAS("i2c:tdee4");
MODULE_ALIAS("i2c:dtt7520x");
MODULE_ALIAS("i2c:tua6034_friio");
MODULE_ALIAS("i2c:tda665x_earthpt1");

MODULE_INFO(srcversion, "85933CD3F7C55FA29A32BFD");
