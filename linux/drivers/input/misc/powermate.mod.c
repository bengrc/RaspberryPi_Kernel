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
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x175ec858, "input_register_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x8ccc143c, "input_allocate_device" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa1633992, "_dev_err" },
	{ 0x3b3a1192, "input_event" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v077Dp0410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Dp04AAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05F3p0240d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2216524E675D2B370F9194B");
