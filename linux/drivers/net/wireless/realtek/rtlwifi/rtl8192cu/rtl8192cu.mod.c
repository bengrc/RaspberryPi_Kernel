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
	{ 0x664881a, "rtl_cam_delete_one_entry" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb75a0371, "rtl_fw_cb" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x507099a3, "rtl_cam_get_free_entry" },
	{ 0x7f847d11, "rtl92c_phy_set_rfpath_switch" },
	{ 0x96a5989, "rtl_usb_disconnect" },
	{ 0xcf0974cb, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0xb7700415, "param_ops_int" },
	{ 0xd672f316, "rtl92c_phy_set_txpower_level" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x643d9544, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0xe39cac55, "rtl92c_dm_check_txpower_tracking" },
	{ 0x9d19a43b, "rtl_ps_disable_nic" },
	{ 0x76026552, "rtl92c_dm_watchdog" },
	{ 0x7974128f, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x33fa411b, "_rtl92c_phy_rf_serial_write" },
	{ 0x419d5fae, "rtl_get_tcb_desc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd50fa9b, "_rtl92c_phy_rf_serial_read" },
	{ 0xbb1cf427, "rtl92c_phy_set_bw_mode" },
	{ 0x3df44134, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xce0c8a1, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x49b461ce, "rtl_phy_scan_operation_backup" },
	{ 0x80e9b966, "rtl92c_dm_init_edca_turbo" },
	{ 0xe9860a96, "rtl92c_phy_iq_calibrate" },
	{ 0x6a02cf88, "rtl92c_dm_init" },
	{ 0x152d8a2b, "rtl_usb_probe" },
	{ 0x1186ce46, "_rtl_dbg_trace" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5e86ba10, "rtl92c_phy_set_bb_reg" },
	{ 0x5f754e5a, "memset" },
	{ 0xf5373f59, "rtl_ps_enable_nic" },
	{ 0xe3594372, "rtl_get_hwinfo" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x604ad1f7, "rtl92c_dm_rf_saving" },
	{ 0xcab64b99, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x66cc70c9, "dm_writepowerindex" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x730976b4, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x51ca37aa, "_rtl_dbg_print_data" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x37ec198b, "_rtl92c_phy_set_rf_sleep" },
	{ 0x1e0535cc, "request_firmware_nowait" },
	{ 0xebb9bb9a, "rtlwifi_rate_mapping" },
	{ 0x30c46bec, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x66453b6, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x91da9b26, "rtl_rfreg_delay" },
	{ 0xe9cafcae, "rtl92c_phy_set_io_cmd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4dd5647, "ieee80211_find_sta" },
	{ 0x286c6c70, "_rtl_dbg_print" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x1c4ae385, "rtl_cam_mark_invalid" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x7393a1fa, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a7c2ce5, "rtl_cam_del_entry" },
	{ 0x45711b09, "rtl_cam_empty_entry" },
	{ 0x38f7019b, "rtl92ce_phy_set_rf_on" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xaed9b5f7, "rtl92c_phy_query_bb_reg" },
	{ 0x1fa5ea7, "_rtl92c_store_pwrIndex_diffrate_offset" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x676e37df, "rtl_cam_reset_all_entry" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x92e04548, "rtl_process_phyinfo" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xc4f0e2ae, "dm_restorepowerindex" },
	{ 0x11a56b7c, "efuse_read_1byte" },
	{ 0x3f604efb, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0xc18c6aab, "rtl92c_fill_h2c_cmd" },
	{ 0xd7baa401, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0xfc0ff41d, "param_ops_ullong" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi,rtl8192c-common,rtl_usb";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FBA296B9A6B53204ADB174F");
