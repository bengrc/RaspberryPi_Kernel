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
	{ 0x86fb87cf, "_dev_notice" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0xa1633992, "_dev_err" },
	{ 0x27d7b178, "request_firmware" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x6ff3b4b4, "i2c_mux_add_adapter" },
	{ 0x1404de7c, "i2c_mux_alloc" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xd7417963, "i2c_mux_del_adapters" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux";

MODULE_ALIAS("i2c:si2168");

MODULE_INFO(srcversion, "C6766E537288293388F4388");
