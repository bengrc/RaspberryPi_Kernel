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
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0x4870700a, "usbnet_nway_reset" },
	{ 0x5fb0a2da, "usbnet_set_msglevel" },
	{ 0x45bfa587, "usbnet_get_msglevel" },
	{ 0x54ed7e1d, "usbnet_get_stats64" },
	{ 0xbbc455b5, "usbnet_tx_timeout" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x45db7114, "usbnet_start_xmit" },
	{ 0x512b20c4, "usbnet_stop" },
	{ 0xf3a0f326, "usbnet_open" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x39bbbda9, "usbnet_update_max_qlen" },
	{ 0xfa6625c1, "usbnet_get_endpoints" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2f8a539, "mii_nway_restart" },
	{ 0x37e07c27, "mii_ethtool_gset" },
	{ 0x122170da, "crc32_le" },
	{ 0xebe89604, "usbnet_write_cmd_async" },
	{ 0xcbfc45e3, "netdev_info" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0xe9760b18, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x9e90e872, "usbnet_link_change" },
	{ 0x77ad9c38, "usbnet_write_cmd" },
	{ 0x56128f15, "usbnet_write_cmd_nopm" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xca2fc8b6, "netdev_warn" },
	{ 0x5e6a1207, "usbnet_read_cmd" },
	{ 0x509392b3, "usbnet_read_cmd_nopm" },
	{ 0xd11d43ec, "generic_mii_ioctl" },
	{ 0xa15a8734, "mii_ethtool_get_link_ksettings" },
	{ 0xdee8b0e7, "mii_ethtool_set_link_ksettings" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x62da577d, "usbnet_skb_return" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "939AC35FBA15593ACF0DEC3");
