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
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0xb69b5ca7, "usbnet_disconnect" },
	{ 0xfa7576a6, "usbnet_probe" },
	{ 0x54ed7e1d, "usbnet_get_stats64" },
	{ 0xbbc455b5, "usbnet_tx_timeout" },
	{ 0xa07ba98f, "usbnet_change_mtu" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x45db7114, "usbnet_start_xmit" },
	{ 0x512b20c4, "usbnet_stop" },
	{ 0xf3a0f326, "usbnet_open" },
	{ 0x86afe178, "usbnet_set_link_ksettings" },
	{ 0x5498466b, "usbnet_get_link_ksettings" },
	{ 0x9e7a4696, "usbnet_get_link" },
	{ 0x4870700a, "usbnet_nway_reset" },
	{ 0x5fb0a2da, "usbnet_set_msglevel" },
	{ 0x45bfa587, "usbnet_get_msglevel" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xe9760b18, "usbnet_resume" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xfa6625c1, "usbnet_get_endpoints" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x122170da, "crc32_le" },
	{ 0x73e25e23, "usbnet_get_drvinfo" },
	{ 0xebe89604, "usbnet_write_cmd_async" },
	{ 0x9d669763, "memcpy" },
	{ 0xd11d43ec, "generic_mii_ioctl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5e6a1207, "usbnet_read_cmd" },
	{ 0x77ad9c38, "usbnet_write_cmd" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9e90e872, "usbnet_link_change" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa1633992, "_dev_err" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EDAE9BC907BEEB8FAAFA43B");
