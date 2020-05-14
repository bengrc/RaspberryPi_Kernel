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
	{ 0xdcdb1d9, "gspca_suspend" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xecceee0c, "gspca_dev_probe" },
	{ 0xdbaeb003, "gspca_resume" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x4cdc620b, "gspca_disconnect" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xc12940e8, "gspca_frame_add" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x56287daf, "usb_register_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,videodev";

MODULE_ALIAS("usb:v040Ap0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0497pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p00DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p0401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p0402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1776p501Cd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CEB86EB77499F0C7E9CDBEB");
