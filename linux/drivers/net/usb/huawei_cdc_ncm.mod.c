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
	{ 0xb69b5ca7, "usbnet_disconnect" },
	{ 0xfa7576a6, "usbnet_probe" },
	{ 0x8f267f65, "cdc_ncm_tx_fixup" },
	{ 0xcb0f1464, "cdc_ncm_rx_fixup" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0xe9760b18, "usbnet_resume" },
	{ 0xe03272ec, "usb_cdc_wdm_register" },
	{ 0x79f66011, "cdc_ncm_bind_common" },
	{ 0x44de32d3, "cdc_ncm_unbind" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x524ccab1, "usb_autopm_put_interface" },
	{ 0x8027968f, "usb_autopm_get_interface" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ncm,cdc-wdm";

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip16in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip46in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip76in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc03ip16in*");

MODULE_INFO(srcversion, "8A1FBE646C007A3B5BD4B14");
