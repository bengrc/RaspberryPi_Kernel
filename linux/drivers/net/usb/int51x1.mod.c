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
	{ 0xfa7576a6, "usbnet_probe" },
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
	{ 0xfa6625c1, "usbnet_get_endpoints" },
	{ 0xf817accb, "usbnet_get_ethernet_addr" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xcbfc45e3, "netdev_info" },
	{ 0xebe89604, "usbnet_write_cmd_async" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x99bb8806, "memmove" },
	{ 0x5f754e5a, "memset" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v09E1p5121d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8770B7C2A21740EB80A8FE4");
