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
	{ 0x8ae137ee, "param_ops_string" },
	{ 0xb7700415, "param_ops_int" },
	{ 0xe9760b18, "usbnet_resume" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0xb69b5ca7, "usbnet_disconnect" },
	{ 0xfa7576a6, "usbnet_probe" },
	{ 0x396c9e0b, "rndis_tx_fixup" },
	{ 0xebc4c120, "rndis_rx_fixup" },
	{ 0xbf0e276d, "rndis_status" },
	{ 0x54ed7e1d, "usbnet_get_stats64" },
	{ 0xbbc455b5, "usbnet_tx_timeout" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0x45db7114, "usbnet_start_xmit" },
	{ 0x512b20c4, "usbnet_stop" },
	{ 0xf3a0f326, "usbnet_open" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xb859f38b, "krealloc" },
	{ 0x91715312, "sprintf" },
	{ 0x97255bdf, "strlen" },
	{ 0x59175650, "wiphy_register" },
	{ 0xbd154fc3, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9fe9e987, "wiphy_new_nm" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x2ed581a6, "usbnet_purge_paused_rxq" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0x8b57bdad, "cfg80211_cqm_rssi_notify" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8996466e, "cfg80211_disconnected" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd5916b4e, "cfg80211_roamed" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xeb5195cc, "cfg80211_ibss_joined" },
	{ 0xbd28b044, "cfg80211_connect_done" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xa3c21bac, "usbnet_resume_rx" },
	{ 0xf562608, "wiphy_free" },
	{ 0xc8195693, "wiphy_unregister" },
	{ 0xb0643376, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xf6c73dcc, "cfg80211_scan_done" },
	{ 0x5b7e4022, "cfg80211_put_bss" },
	{ 0x53855f55, "cfg80211_inform_bss_data" },
	{ 0x8414c0a1, "ieee80211_get_channel" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca2fc8b6, "netdev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc5ee1ad1, "rndis_command" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6489b88f, "cfg80211_michael_mic_failure" },
	{ 0xdfc97e7d, "cfg80211_pmksa_candidate_notify" },
	{ 0x6d0e39f7, "usbnet_pause_rx" },
	{ 0xcbfc45e3, "netdev_info" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rndis_host,cfg80211";

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "1CD8E809F189FBACEBEBCC9");
