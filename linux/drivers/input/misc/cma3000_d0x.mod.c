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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0x3b3a1192, "input_event" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x175ec858, "input_register_device" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8ccc143c, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2C1863EAC83BFDC5D7219E4");
