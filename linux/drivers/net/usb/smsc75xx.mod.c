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
	{ 0x7d54146, "param_ops_bool" },
	{ 0xb69b5ca7, "usbnet_disconnect" },
	{ 0xfa7576a6, "usbnet_probe" },
	{ 0x86afe178, "usbnet_set_link_ksettings" },
	{ 0x5498466b, "usbnet_get_link_ksettings" },
	{ 0x9e7a4696, "usbnet_get_link" },
	{ 0x4870700a, "usbnet_nway_reset" },
	{ 0x5fb0a2da, "usbnet_set_msglevel" },
	{ 0x45bfa587, "usbnet_get_msglevel" },
	{ 0x73e25e23, "usbnet_get_drvinfo" },
	{ 0x54ed7e1d, "usbnet_get_stats64" },
	{ 0xbbc455b5, "usbnet_tx_timeout" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0x45db7114, "usbnet_start_xmit" },
	{ 0x512b20c4, "usbnet_stop" },
	{ 0xf3a0f326, "usbnet_open" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xfbe951b7, "of_get_mac_address" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xfa6625c1, "usbnet_get_endpoints" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2f8a539, "mii_nway_restart" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeda75605, "usbnet_defer_kevent" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe9760b18, "usbnet_resume" },
	{ 0xcbfc45e3, "netdev_info" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0xa07ba98f, "usbnet_change_mtu" },
	{ 0x37e07c27, "mii_ethtool_gset" },
	{ 0xde0c8743, "mii_check_media" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5e6a1207, "usbnet_read_cmd" },
	{ 0x509392b3, "usbnet_read_cmd_nopm" },
	{ 0x77ad9c38, "usbnet_write_cmd" },
	{ 0x56128f15, "usbnet_write_cmd_nopm" },
	{ 0xca2fc8b6, "netdev_warn" },
	{ 0x62da577d, "usbnet_skb_return" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xf102732a, "crc16" },
	{ 0xd11d43ec, "generic_mii_ioctl" },
	{ 0x37a0cba, "kfree" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x122170da, "crc32_le" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "928563C8E9668CE4C66A7E9");
