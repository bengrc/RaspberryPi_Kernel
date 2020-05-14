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
	{ 0x3b034454, "ieee80211_rx_napi" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x75a770a, "rtl_deinit_deferred_work" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd747a75, "rtl_deinit_core" },
	{ 0x28ad01c0, "usb_get_from_anchor" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xc5d3ef01, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x5452c3c2, "usb_unanchor_urb" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x1186ce46, "_rtl_dbg_trace" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x6b6b856a, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x46845954, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x84847fc8, "rtl_action_proc" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf8ff6add, "rtl_lps_change_work_callback" },
	{ 0x44c2c2a3, "rtl_init_rx_config" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x128091b0, "ieee80211_tx_status_irqsafe" },
	{ 0x8f3ebc3c, "rtl_ops" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9b7d81f3, "ieee80211_register_hw" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3fde75d1, "ieee80211_free_hw" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xfa871ef7, "rtl_beacon_statistic" },
	{ 0xeb671564, "usb_anchor_urb" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi";


MODULE_INFO(srcversion, "2E8C8902D6CCE2762606AC3");
