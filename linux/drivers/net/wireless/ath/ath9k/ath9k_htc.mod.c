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
	{ 0x3b034454, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5eecb0e0, "ath9k_hw_set_txq_props" },
	{ 0x29344e4, "ieee80211_csa_finish" },
	{ 0x6a59444f, "ath9k_hw_init" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x63c3a37c, "ath9k_cmn_get_channel" },
	{ 0x98754676, "ath9k_hw_deinit" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa81df998, "device_release_driver" },
	{ 0x4f778a18, "ath9k_hw_set_gpio" },
	{ 0xc22f49ff, "ath9k_cmn_init_crypto" },
	{ 0xda22418d, "ieee80211_queue_work" },
	{ 0xfda7a91b, "ath9k_cmn_process_rate" },
	{ 0xc2bcbbfc, "ieee80211_csa_is_complete" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x7da569f6, "ath9k_hw_btcoex_enable" },
	{ 0xdd2b5df9, "ath9k_hw_wait" },
	{ 0x17fa386, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0x785d8b05, "ath9k_hw_stopdmarecv" },
	{ 0x70913ba, "ath_key_delete" },
	{ 0x6b22806a, "ath9k_cmn_update_txpow" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4fcde537, "ieee80211_beacon_get_tim" },
	{ 0xe83af67a, "ath9k_hw_gpio_get" },
	{ 0xf4941334, "ath_regd_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xc5d3ef01, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xebfc26a, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x90ce3592, "ath9k_hw_setrxfilter" },
	{ 0xcd6034e, "ath9k_hw_get_txq_props" },
	{ 0xe49aa5bb, "ath9k_hw_releasetxqueue" },
	{ 0x538b1447, "ath9k_hw_reset_tsf" },
	{ 0xee6824ab, "wiphy_rfkill_start_polling" },
	{ 0x6b23a259, "ath9k_cmn_reload_chainmask" },
	{ 0x91715312, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa66fdbc5, "ath9k_cmn_init_channels_rates" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x6f648e4d, "ieee80211_stop_queues" },
	{ 0x5452c3c2, "usb_unanchor_urb" },
	{ 0x2c28325b, "of_led_classdev_register" },
	{ 0x754f348a, "complete_all" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xc972cb09, "ieee80211_tx_status" },
	{ 0xb2eb4688, "ath_printk" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8a7ea05d, "ath9k_hw_setopmode" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xbe4099e5, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x83580d70, "ath9k_hw_resettxqueue" },
	{ 0x186a41de, "ath9k_hw_gettsf64" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x6b6b856a, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1e721df9, "ath9k_hw_set_sta_beacon_timers" },
	{ 0xdda5b9cc, "ath9k_hw_set_tsfadjust" },
	{ 0xfca8f83a, "ath9k_cmn_beacon_config_ap" },
	{ 0x4fde45da, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x6392145b, "ath9k_hw_btcoex_disable" },
	{ 0x30338182, "ath9k_hw_getrxfilter" },
	{ 0x6db56109, "ath9k_hw_ani_monitor" },
	{ 0xbcc329f7, "ath_is_mybeacon" },
	{ 0xdf523344, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x63c66962, "ath9k_cmn_process_rssi" },
	{ 0x84b183ae, "strncmp" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xbe4ab180, "wiphy_rfkill_stop_polling" },
	{ 0x1e0535cc, "request_firmware_nowait" },
	{ 0xa1633992, "_dev_err" },
	{ 0xc0741042, "ath9k_hw_write_associd" },
	{ 0x5f750b5c, "ieee80211_queue_delayed_work" },
	{ 0x45ae79dd, "ath_reg_notifier_apply" },
	{ 0xb6cbfed8, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x885b46c1, "ath9k_hw_init_btcoex_hw" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x1f151f09, "ath9k_hw_beaconq_setup" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xa4a7ecf9, "ath9k_hw_name" },
	{ 0x7d317734, "ath9k_hw_init_global_settings" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xe3330fb5, "ath9k_hw_settsf64" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x450eb181, "wiphy_rfkill_set_hw_state" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x4b5f986d, "ath9k_hw_beaconinit" },
	{ 0xf4dd5647, "ieee80211_find_sta" },
	{ 0x2fbd7087, "ieee80211_get_buffered_bc" },
	{ 0xbe9176fe, "usb_interrupt_msg" },
	{ 0x93ff09c8, "ath9k_hw_gpio_free" },
	{ 0xb3e562a6, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xd143464a, "ath9k_hw_setrxabort" },
	{ 0xb2d99563, "ath9k_cmn_beacon_config_sta" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb1dc612c, "ath_hw_setbssidmask" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x56404ca7, "ath9k_cmn_rx_skb_postprocess" },
	{ 0xcc7d49f8, "ath9k_hw_phy_disable" },
	{ 0xd5348666, "__ieee80211_get_radio_led_name" },
	{ 0x67e0135f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x6b8214a0, "ath9k_hw_setpower" },
	{ 0x37b1cd50, "__ieee80211_create_tpt_led_trigger" },
	{ 0x9b7d81f3, "ieee80211_register_hw" },
	{ 0x1804c3b9, "led_classdev_unregister" },
	{ 0x725921dc, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0x52d7669c, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0xc601b9f5, "ath9k_hw_setmcastfilter" },
	{ 0x7e4dd03b, "ieee80211_start_tx_ba_session" },
	{ 0x97c37892, "ath9k_hw_gpio_request_out" },
	{ 0x5e5cbd27, "ath9k_hw_startpcureceive" },
	{ 0xf4bda2e9, "ath9k_hw_setuptxqueue" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x27d7b178, "request_firmware" },
	{ 0xfc6343cb, "ath9k_hw_reset" },
	{ 0x3fde75d1, "ieee80211_free_hw" },
	{ 0xaae21285, "ath9k_cmn_rx_accept" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe91afbe9, "usb_ifnum_to_if" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x414d321c, "ath9k_hw_btcoex_init_3wire" },
	{ 0x3f6a89ef, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xf93ff56d, "ath9k_hw_reset_calvalid" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xeb671564, "usb_anchor_urb" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3AD3E2199B8FACB6B996701");
