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
	{ 0xc09e2333, "mt76x2_init_device" },
	{ 0x2b80061c, "mt76x2_queue_rx_skb" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbd2ee4d8, "mt76u_mcu_msg_alloc" },
	{ 0x7aebff8f, "mt76x2_phy_set_txpower" },
	{ 0x10b4af38, "mt76x2_phy_set_txpower_regs" },
	{ 0x7e7372c9, "mt76x2_read_rx_gain" },
	{ 0xe726a1af, "mt76u_mcu_init_rx" },
	{ 0xefec0c3a, "__mt76_poll" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf49a7c7e, "mt76x2_mac_load_tx_status" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6c2dc7d1, "mt76x2_get_power_info" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4350e7d, "mt76x2_phy_set_band" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xb7a8c063, "mt76u_buf_free" },
	{ 0x7e45d5ae, "mt76u_vendor_request" },
	{ 0xc5d3ef01, "ieee80211_unregister_hw" },
	{ 0x139969b2, "mt76x2_phy_get_min_avg_rssi" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x89e33d71, "mt76u_alloc_queues" },
	{ 0x66e3a2fa, "mt76_txq_schedule_all" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xca02bd24, "mt76x2_sta_remove" },
	{ 0x6c5cb694, "mt76u_submit_rx_buffers" },
	{ 0x6f648e4d, "ieee80211_stop_queues" },
	{ 0xd14e3b57, "mt76x2_txq_init" },
	{ 0x68322779, "mt76x2_send_tx_status" },
	{ 0x4f454879, "mt76x2_eeprom_parse_hw_cap" },
	{ 0x6939d131, "mt76x2_tx_complete" },
	{ 0xe35e8e3d, "mt76x2_configure_filter" },
	{ 0x3af8700e, "mt76u_stop_queues" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x1fd1a0df, "mt76u_mcu_fw_reset" },
	{ 0xb37ef8a, "mt76u_init" },
	{ 0x5db8842e, "mt76u_mcu_complete_urb" },
	{ 0x1be9b2d8, "mt76x2_init_txpower" },
	{ 0xfc2a28ee, "mt76x2_phy_set_bw" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4fde45da, "ieee80211_wake_queues" },
	{ 0x74280c09, "__mt76_poll_msec" },
	{ 0x31d20e61, "mt76x2_tx" },
	{ 0x1a41a807, "mt76_set_channel" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3a323d4d, "mt76x2_set_key" },
	{ 0xb5d4de93, "mt76x2_ext_pa_enabled" },
	{ 0x242ff22, "mt76u_skb_dma_info" },
	{ 0x4499ab4b, "mt76_register_device" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6d78ba77, "mt76x2_rates" },
	{ 0xd9b6cf5b, "mt76x2_insert_hdr_pad" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xa1633992, "_dev_err" },
	{ 0x5f750b5c, "ieee80211_queue_delayed_work" },
	{ 0xdbb7ab5d, "mt76u_queues_deinit" },
	{ 0xd497cb6a, "mt76x2_conf_tx" },
	{ 0x44fa5ea7, "mt76x2_init_debugfs" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xd5fb9c29, "mt76x2_sta_add" },
	{ 0xf6a6e36b, "mt76x2_mac_write_txwi" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb07ddad, "mt76u_submit_buf" },
	{ 0x83bc39f0, "mt76x2_configure_tx_delay" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0xb8d7fb54, "mt76x2_mac_stop" },
	{ 0x5b7f5be5, "mt76x2_remove_interface" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0xca0fadeb, "mt76_alloc_device" },
	{ 0x33ff58a3, "mt76u_stop_stat_wk" },
	{ 0x67e0135f, "ieee80211_get_hdrlen_from_skb" },
	{ 0xbe993f1a, "mt76x2_apply_gain_adj" },
	{ 0x223a716a, "mt76_wake_tx_queue" },
	{ 0x3e3d3301, "mt76x2_reset_wlan" },
	{ 0x56795176, "mt76_write_mac_initvals" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x79457027, "mt76u_mcu_send_msg" },
	{ 0x3fde75d1, "ieee80211_free_hw" },
	{ 0xc0e3f2d5, "mt76x2_sta_rate_tbl_update" },
	{ 0x517c00fd, "mt76u_mcu_fw_send_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x310ae80a, "mt76x2_ampdu_action" },
	{ 0x51c4f30d, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mt76x2-common,mt76-usb,mt76,mac80211,cfg80211";

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BCBB07352E0D8C7724EE162");
