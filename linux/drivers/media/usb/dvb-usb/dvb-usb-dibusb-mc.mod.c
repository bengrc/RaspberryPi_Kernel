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
	{ 0xdfbba290, "rc_map_dibusb_table" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8a812746, "dvb_usb_device_exit" },
	{ 0x583b10e, "dvb_usb_device_init" },
	{ 0x6232cacd, "dibusb_rc_query" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe5bbd2f0, "dibusb_pid_filter" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x2d06da84, "dibusb2_0_power_ctrl" },
	{ 0xbcd8d465, "dibusb_dib3000mc_frontend_attach" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x18c9d214, "dibusb_dib3000mc_tuner_attach" },
	{ 0x68ba18a9, "dibusb2_0_streaming_ctrl" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x862dcf59, "dibusb_i2c_algo" },
	{ 0x7bd26575, "dibusb_pid_filter_ctrl" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb,dvb-usb-dibusb-mc-common";

MODULE_ALIAS("usb:v10B8p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE361d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6A7993441F197CAC598FD62");
