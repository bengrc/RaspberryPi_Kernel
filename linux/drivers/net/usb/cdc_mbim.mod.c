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
	{ 0x54ed7e1d, "usbnet_get_stats64" },
	{ 0xbbc455b5, "usbnet_tx_timeout" },
	{ 0xe9291223, "cdc_ncm_change_mtu" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0x45db7114, "usbnet_start_xmit" },
	{ 0x512b20c4, "usbnet_stop" },
	{ 0xf3a0f326, "usbnet_open" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x43a2a13f, "usb_match_id" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0xe03272ec, "usb_cdc_wdm_register" },
	{ 0x79f66011, "cdc_ncm_bind_common" },
	{ 0xd423b664, "cdc_ncm_select_altsetting" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0xe9760b18, "usbnet_resume" },
	{ 0x44de32d3, "cdc_ncm_unbind" },
	{ 0x524ccab1, "usb_autopm_put_interface" },
	{ 0x8027968f, "usb_autopm_get_interface" },
	{ 0xb7323cb6, "__vlan_find_dev_deep_rcu" },
	{ 0xcef8e48d, "in6_dev_finish_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x62da577d, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0x9214b99, "skb_put" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xdd91bb1f, "cdc_ncm_rx_verify_ndp16" },
	{ 0x5db8703, "ipv6_stub" },
	{ 0xb8f9c99, "cdc_ncm_rx_verify_nth16" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x55f26413, "cdc_ncm_fill_tx_frame" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ncm,cdc-wdm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "25D7BD2E7451CFFD3B1BCD8");
