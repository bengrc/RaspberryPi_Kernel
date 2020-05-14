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
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x2c50d96, "v4l2_device_unregister_subdev" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x77762f07, "v4l2_i2c_subdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=media,videodev,v4l2-common";

MODULE_ALIAS("i2c:tuner");

MODULE_INFO(srcversion, "1FF68B22BB90DAB7ED8324A");
