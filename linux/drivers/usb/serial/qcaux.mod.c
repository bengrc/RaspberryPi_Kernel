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
	{ 0x7328db1, "usb_serial_deregister_drivers" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3e4d00dd, "usb_serial_register_drivers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v106Cp3701d*dc*dsc*dp*icFFisc00ip00in*");
MODULE_ALIAS("usb:v106Cp3702d*dc*dsc*dp*icFFisc00ip00in*");
MODULE_ALIAS("usb:v106Cp3711d*dc*dsc*dp*icFFisc00ip00in*");
MODULE_ALIAS("usb:v106Cp3712d*dc*dsc*dp*icFFisc00ip00in*");
MODULE_ALIAS("usb:v106Cp3714d*dc*dsc*dp*icFFisc00ip00in*");
MODULE_ALIAS("usb:v106Cp3715d*dc*dsc*dp*icFFisc00ip00in*");
MODULE_ALIAS("usb:v16D8p5553d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v16D8p6512d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v1004p6000d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v0474p0754d*dc*dsc*dp*icFFiscFFip00in*");
MODULE_ALIAS("usb:v04E8p6640d*dc*dsc*dp*icFFisc00ip00in*");
MODULE_ALIAS("usb:v106Cp*d*dc*dsc*dp*icFFiscFDipFFin*");
MODULE_ALIAS("usb:v106Cp*d*dc*dsc*dp*icFFiscFEipFFin*");
MODULE_ALIAS("usb:v106Cp*d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1FACp0151d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "988EF28AB8DCCDD11BA956C");
