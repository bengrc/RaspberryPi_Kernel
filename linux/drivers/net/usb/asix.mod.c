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
	{ 0xcbfc45e3, "netdev_info" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x37e07c27, "mii_ethtool_gset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5c8ba0c, "phy_disconnect" },
	{ 0xe9760b18, "usbnet_resume" },
	{ 0x3591e8bd, "phy_stop" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfa7576a6, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9e90e872, "usbnet_link_change" },
	{ 0xd9ac17eb, "__mdiobus_register" },
	{ 0x2de78ac1, "phy_ethtool_nway_reset" },
	{ 0xb69b5ca7, "usbnet_disconnect" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd11d43ec, "generic_mii_ioctl" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x512b20c4, "usbnet_stop" },
	{ 0x39bbbda9, "usbnet_update_max_qlen" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc9015732, "mdiobus_unregister" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x9a7b7fb, "phy_print_status" },
	{ 0x4870700a, "usbnet_nway_reset" },
	{ 0x86afe178, "usbnet_set_link_ksettings" },
	{ 0xc8efdd58, "phy_start" },
	{ 0x2f8a539, "mii_nway_restart" },
	{ 0x54ed7e1d, "usbnet_get_stats64" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xcb5e1bcf, "eth_platform_get_mac_address" },
	{ 0xdbca3b42, "mdiobus_free" },
	{ 0xfa6625c1, "usbnet_get_endpoints" },
	{ 0x5498466b, "usbnet_get_link_ksettings" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x73e25e23, "usbnet_get_drvinfo" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x509392b3, "usbnet_read_cmd_nopm" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0x45db7114, "usbnet_start_xmit" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x9e7a4696, "usbnet_get_link" },
	{ 0x56128f15, "usbnet_write_cmd_nopm" },
	{ 0x18d21875, "phy_ethtool_get_link_ksettings" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0x5e6a1207, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbbc455b5, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xa9e2ee3b, "genphy_resume" },
	{ 0x62da577d, "usbnet_skb_return" },
	{ 0xf3a0f326, "usbnet_open" },
	{ 0xde0c8743, "mii_check_media" },
	{ 0x45bfa587, "usbnet_get_msglevel" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xca2fc8b6, "netdev_warn" },
	{ 0x61939521, "usbnet_unlink_rx_urbs" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0xd6d47f88, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xebe89604, "usbnet_write_cmd_async" },
	{ 0xa07ba98f, "usbnet_change_mtu" },
	{ 0xb2cf9c04, "phy_connect" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc7d01e88, "phy_mii_ioctl" },
	{ 0xb81960ca, "snprintf" },
	{ 0x36da4f3, "mii_link_ok" },
	{ 0x99bb8806, "memmove" },
	{ 0x9214b99, "skb_put" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0x77ad9c38, "usbnet_write_cmd" },
	{ 0x5fb0a2da, "usbnet_set_msglevel" },
	{ 0xe4f66110, "mdiobus_alloc_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B345E9BD2BD027AA18007C7");
