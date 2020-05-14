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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe9760b18, "usbnet_resume" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfa7576a6, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18de19e4, "usbnet_cdc_unbind" },
	{ 0xb69b5ca7, "usbnet_disconnect" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x90356d99, "usbnet_generic_cdc_bind" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x512b20c4, "usbnet_stop" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x54ed7e1d, "usbnet_get_stats64" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x45db7114, "usbnet_start_xmit" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xa1633992, "_dev_err" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xbbc455b5, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x62da577d, "usbnet_skb_return" },
	{ 0x25a5f9ee, "usb_driver_release_interface" },
	{ 0xf3a0f326, "usbnet_open" },
	{ 0xbe9176fe, "usb_interrupt_msg" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0x13947850, "eth_mac_addr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ether";

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "19789E1651C22039A5433AC");
