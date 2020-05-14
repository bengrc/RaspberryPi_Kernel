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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd5a9d4c7, "i2c_add_numbered_adapter" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x1d37eeed, "ioremap" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ef64e1, "clk_get" },
	{ 0xbaa9a2c9, "platform_get_irq" },
	{ 0xc64803ce, "platform_get_resource" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x8b2d973f, "of_alias_get_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xe6c12171, "complete" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf63bc4f, "i2c_del_adapter" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2708-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2708-i2cC*");

MODULE_INFO(srcversion, "0C1F4F8690E98B7CEAABAE5");
