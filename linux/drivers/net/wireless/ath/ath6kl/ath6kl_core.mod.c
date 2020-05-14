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
	{ 0x55a515c6, "register_netdevice" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf562608, "wiphy_free" },
	{ 0xbd28b044, "cfg80211_connect_done" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x53855f55, "cfg80211_inform_bss_data" },
	{ 0x47c9da32, "cfg80211_conn_failed" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaf0fe58e, "cfg80211_chandef_create" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x891591a9, "skb_copy" },
	{ 0xd0d9eeb6, "down_interruptible" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x15a1e456, "cfg80211_rx_mgmt" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x463b1f04, "cfg80211_check_station_change" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xdf78e86e, "cfg80211_mgmt_tx_status" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0xdfc97e7d, "cfg80211_pmksa_candidate_notify" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0xc75cde66, "cfg80211_get_bss" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0x71c90087, "memcmp" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0xc8195693, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x27ed6f64, "cfg80211_del_sta_sinfo" },
	{ 0x8414c0a1, "ieee80211_get_channel" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6489b88f, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xeb5195cc, "cfg80211_ibss_joined" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x988aeff6, "cfg80211_get_drvinfo" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0x77824dc5, "cfg80211_ch_switch_notify" },
	{ 0xd5916b4e, "cfg80211_roamed" },
	{ 0x5b7e4022, "cfg80211_put_bss" },
	{ 0x59175650, "wiphy_register" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x9acdb1a9, "cfg80211_ready_on_channel" },
	{ 0x9fe9e987, "wiphy_new_nm" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0x2aab2538, "of_find_compatible_node" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0xd2027ac4, "of_get_property" },
	{ 0x335f6ace, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x8996466e, "cfg80211_disconnected" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdfbe5f36, "netdev_set_default_ethtool_ops" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0x1552bcdc, "cfg80211_new_sta" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb9f3ed41, "cfg80211_find_ie_match" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x52d7669c, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0x581cde4e, "up" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x5fd99fb2, "cfg80211_remain_on_channel_expired" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x7cc6324d, "cfg80211_sched_scan_stopped" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf6c73dcc, "cfg80211_scan_done" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x200e9426, "cfg80211_cqm_txe_notify" },
	{ 0xc6bc4ba6, "cfg80211_sched_scan_results" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "9010F1B6A23360E8323702A");
