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
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1022d95d, "usb_stor_bulk_transfer_buf" },
	{ 0x8b234c6b, "usb_stor_post_reset" },
	{ 0x5ce3abdf, "usb_stor_control_msg" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb8b8f55e, "usb_stor_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb6a179b7, "usb_stor_probe2" },
	{ 0x11c6b8ac, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb102e8b1, "usb_stor_pre_reset" },
	{ 0xa0ba2da5, "usb_stor_reset_resume" },
	{ 0x7d51979e, "usb_stor_suspend" },
	{ 0x853a7941, "usb_stor_probe1" },
	{ 0xe5f45d2, "usb_stor_resume" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x34837fd9, "usb_stor_bulk_srb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "09FDFBBFBDC40C7531597E3");
