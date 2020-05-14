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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8a812746, "dvb_usb_device_exit" },
	{ 0x583b10e, "dvb_usb_device_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc9157004, "dibusb_power_ctrl" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x68ba18a9, "dibusb2_0_streaming_ctrl" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x862dcf59, "dibusb_i2c_algo" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb,dvb-usb-dibusb-common";

MODULE_ALIAS("usb:v15F4p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0015d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A3DAA39A014DD94C74F4E56");
