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
	{ 0xe9760b18, "usbnet_resume" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0xb69b5ca7, "usbnet_disconnect" },
	{ 0x86afe178, "usbnet_set_link_ksettings" },
	{ 0x5498466b, "usbnet_get_link_ksettings" },
	{ 0x4870700a, "usbnet_nway_reset" },
	{ 0x5fb0a2da, "usbnet_set_msglevel" },
	{ 0x45bfa587, "usbnet_get_msglevel" },
	{ 0x54ed7e1d, "usbnet_get_stats64" },
	{ 0xbbc455b5, "usbnet_tx_timeout" },
	{ 0xa07ba98f, "usbnet_change_mtu" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0x45db7114, "usbnet_start_xmit" },
	{ 0x512b20c4, "usbnet_stop" },
	{ 0xf3a0f326, "usbnet_open" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xbbc81f3a, "usbnet_status_stop" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xcb2dcfa5, "usbnet_status_start" },
	{ 0xfa7576a6, "usbnet_probe" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9e90e872, "usbnet_link_change" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x77ad9c38, "usbnet_write_cmd" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1633992, "_dev_err" },
	{ 0x5e6a1207, "usbnet_read_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xfa6625c1, "usbnet_get_endpoints" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x73e25e23, "usbnet_get_drvinfo" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x62da577d, "usbnet_skb_return" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "D6B1A5A3B538C96757273E6");
