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
	{ 0x55a515c6, "register_netdevice" },
	{ 0x85db92e9, "sdio_writeb" },
	{ 0xf38d4bb4, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf562608, "wiphy_free" },
	{ 0x7410aba2, "strreplace" },
	{ 0xbd28b044, "cfg80211_connect_done" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x349cba85, "strchr" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xa81df998, "device_release_driver" },
	{ 0x6eea09b9, "irq_of_parse_and_map" },
	{ 0xea124bd1, "gcd" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x53855f55, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x1906648e, "brcmu_boardrev_str" },
	{ 0x86616e0b, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb4401a7b, "sdio_enable_func" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6fd651e3, "cfg80211_report_wowlan_wakeup" },
	{ 0x62825602, "sdio_claim_irq" },
	{ 0xb08c5297, "sdio_retune_release" },
	{ 0x9560a24c, "brcmu_pkt_buf_get_skb" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xcfe9f8a8, "seq_write" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x15a1e456, "cfg80211_rx_mgmt" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xc4ed5445, "sg_next" },
	{ 0x4c2ae700, "strnstr" },
	{ 0x9e4f089d, "driver_for_each_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x316d83bb, "brcmu_pktq_pdeq_tail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x16c6ac6a, "of_device_is_compatible" },
	{ 0x82d43f64, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0xc525976d, "pm_runtime_allow" },
	{ 0x1ee4f6a0, "brcmu_pktq_penq" },
	{ 0x46784247, "cfg80211_unregister_wdev" },
	{ 0x72d2afb0, "brcmu_pktq_mdeq" },
	{ 0x72fc2334, "pm_runtime_forbid" },
	{ 0x91715312, "sprintf" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1482de2b, "skb_unlink" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdf78e86e, "cfg80211_mgmt_tx_status" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xb66cf861, "mmc_wait_for_req" },
	{ 0x2bdabd91, "debugfs_create_u32" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x6c9dcac2, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x370e3281, "cfg80211_vendor_cmd_reply" },
	{ 0x3bdb1d60, "brcmu_pktq_pdeq_match" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa4451529, "dev_coredumpv" },
	{ 0x7c32d0f0, "printk" },
	{ 0x54111370, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xa821334e, "wiphy_read_of_freq_limits" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0xc8195693, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x68183b3b, "nla_put" },
	{ 0x5323f8bd, "mmc_set_data_timeout" },
	{ 0x1da4f796, "sdio_readl" },
	{ 0x27ed6f64, "cfg80211_del_sta_sinfo" },
	{ 0x8414c0a1, "ieee80211_get_channel" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xcae33825, "brcmu_pktq_peek_tail" },
	{ 0xa9fdd204, "brcmu_pktq_flush" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x118de2d7, "sdio_retune_crc_enable" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6489b88f, "cfg80211_michael_mic_failure" },
	{ 0x9c168508, "wiphy_apply_custom_regulatory" },
	{ 0x2b85b7ae, "irq_get_irq_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x1e0535cc, "request_firmware_nowait" },
	{ 0xeb5195cc, "cfg80211_ibss_joined" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc8d67c1f, "brcmu_dbg_hex_dump" },
	{ 0x287c5eab, "sdio_readsb" },
	{ 0xf27b0a69, "sdio_unregister_driver" },
	{ 0x2db0a65e, "sg_alloc_table" },
	{ 0x189a0bdb, "sdio_f0_writeb" },
	{ 0x82821841, "cfg80211_check_combinations" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x9f984513, "strrchr" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd5916b4e, "cfg80211_roamed" },
	{ 0x5b7e4022, "cfg80211_put_bss" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0x63ebeb95, "__cfg80211_alloc_reply_skb" },
	{ 0x59175650, "wiphy_register" },
	{ 0x8b671a9b, "cfg80211_crit_proto_stopped" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x6126d321, "debugfs_create_devm_seqfile" },
	{ 0x116beeb9, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x484be2d3, "cfg80211_classify8021d" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x9acdb1a9, "cfg80211_ready_on_channel" },
	{ 0x9fe9e987, "wiphy_new_nm" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0xf164d149, "sdio_f0_readb" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x8996466e, "cfg80211_disconnected" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0x1552bcdc, "cfg80211_new_sta" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x249b3a4a, "sdio_memcpy_toio" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x945d078a, "brcmu_pktq_penq_head" },
	{ 0x704173ef, "brcmu_pktq_init" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x5fd99fb2, "cfg80211_remain_on_channel_expired" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x13817285, "sg_free_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x322634b3, "sdio_register_driver" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xd568ab4d, "sdio_memcpy_fromio" },
	{ 0x7cc6324d, "cfg80211_sched_scan_stopped" },
	{ 0x31c3c7e3, "sdio_claim_host" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xf74ea683, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf6c73dcc, "cfg80211_scan_done" },
	{ 0x6c4f4ce6, "sdio_retune_crc_disable" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe9b6a900, "brcmu_pkt_buf_free_skb" },
	{ 0x9214b99, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xde3edb39, "sdio_set_block_size" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x185fd8a6, "sdio_disable_func" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x54699fd1, "sdio_release_host" },
	{ 0x1d87fb4, "sdio_retune_hold_now" },
	{ 0xc6bc4ba6, "cfg80211_sched_scan_results" },
	{ 0xd0717958, "brcmu_pktq_mlen" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=brcmutil,cfg80211";

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2D0A86861EEE70E1769AFA0");
