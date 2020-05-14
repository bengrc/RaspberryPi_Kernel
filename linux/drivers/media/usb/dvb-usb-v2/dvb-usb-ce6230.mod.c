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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2fd6a150, "dvb_usbv2_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x2d00507e, "dvb_usbv2_probe" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xa1633992, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x2299b3e7, "dvb_usbv2_disconnect" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x239d5e15, "dvb_usbv2_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x628186b0, "dvb_usbv2_reset_resume" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2";

MODULE_ALIAS("usb:v8086p9500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA310d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "200B0C15594D5433F3504A9");
