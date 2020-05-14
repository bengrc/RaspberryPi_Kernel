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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb95c2691, "ethtool_op_get_ts_info" },
	{ 0xb5bc6b5e, "usb_altnum_to_altsetting" },
	{ 0xe9760b18, "usbnet_resume" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6e1698a, "hrtimer_active" },
	{ 0xfa7576a6, "usbnet_probe" },
	{ 0x9e90e872, "usbnet_link_change" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0xb69b5ca7, "usbnet_disconnect" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x512b20c4, "usbnet_stop" },
	{ 0x39bbbda9, "usbnet_update_max_qlen" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x91715312, "sprintf" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x326b63e, "netif_schedule_queue" },
	{ 0x4870700a, "usbnet_nway_reset" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x86afe178, "usbnet_set_link_ksettings" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0x54ed7e1d, "usbnet_get_stats64" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5498466b, "usbnet_get_link_ksettings" },
	{ 0x51e26df8, "usb_driver_claim_interface" },
	{ 0x73e25e23, "usbnet_get_drvinfo" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x45db7114, "usbnet_start_xmit" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0x9e7a4696, "usbnet_get_link" },
	{ 0xa1633992, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5e6a1207, "usbnet_read_cmd" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xbbc455b5, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a69d4b8, "cdc_parse_cdc_header" },
	{ 0xf817accb, "usbnet_get_ethernet_addr" },
	{ 0x62da577d, "usbnet_skb_return" },
	{ 0x25a5f9ee, "usb_driver_release_interface" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xf3a0f326, "usbnet_open" },
	{ 0x45bfa587, "usbnet_get_msglevel" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x61939521, "usbnet_unlink_rx_urbs" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe91afbe9, "usb_ifnum_to_if" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0x2de48532, "usbnet_manage_power" },
	{ 0x77ad9c38, "usbnet_write_cmd" },
	{ 0x5fb0a2da, "usbnet_set_msglevel" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "3AF2C31DEFBD416D77660A7");
