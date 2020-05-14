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
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb6458f7, "rc_free_device" },
	{ 0xa42d6554, "rc_register_device" },
	{ 0xb81960ca, "snprintf" },
	{ 0xa9a114fa, "rc_allocate_device" },
	{ 0x2c28325b, "of_led_classdev_register" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x145b7614, "ir_raw_event_store" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x465ebc71, "ir_raw_event_handle" },
	{ 0x8cb1abaa, "ir_raw_event_store_with_filter" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0xa1633992, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x1804c3b9, "led_classdev_unregister" },
	{ 0xc5dbb8c0, "rc_unregister_device" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x339f284f, "led_classdev_suspend" },
	{ 0xc66496ba, "led_classdev_resume" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v112Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v112Ap0005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CBCFD622F5D78EEEC18A28A");
