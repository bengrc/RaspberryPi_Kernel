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
	{ 0x9d669763, "memcpy" },
	{ 0xd34da80c, "i2c_new_dummy" },
	{ 0x943541c2, "__regmap_init_i2c" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x6f109521, "regmap_bulk_write" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8733236, "intlog10" },
	{ 0x2f1cea2f, "regmap_bulk_read" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x5347d8c2, "i2c_unregister_device" },
	{ 0x5f12db20, "regmap_exit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("i2c:mn88473");

MODULE_INFO(srcversion, "5610361B08F7D6CE27DFA31");
