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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8b234c6b, "usb_stor_post_reset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0xb8b8f55e, "usb_stor_disconnect" },
	{ 0x1907fb03, "scsi_eh_restore_cmnd" },
	{ 0x5f754e5a, "memset" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x71c90087, "memcmp" },
	{ 0xb6a179b7, "usb_stor_probe2" },
	{ 0x1636df9b, "usb_stor_transparent_scsi_command" },
	{ 0x11c6b8ac, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb102e8b1, "usb_stor_pre_reset" },
	{ 0xa0ba2da5, "usb_stor_reset_resume" },
	{ 0x7d51979e, "usb_stor_suspend" },
	{ 0x853a7941, "usb_stor_probe1" },
	{ 0xf1f5234f, "scsi_eh_prep_cmnd" },
	{ 0xe5f45d2, "usb_stor_resume" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "222DF4FD6FD5824BFD77B21");
