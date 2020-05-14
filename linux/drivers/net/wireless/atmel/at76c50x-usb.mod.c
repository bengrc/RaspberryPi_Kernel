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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x35c0eb59, "led_trigger_unregister_simple" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x27bea91c, "led_trigger_register_simple" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xc5372c5d, "ieee80211_scan_completed" },
	{ 0xe1837e7a, "led_trigger_event" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0x9b7d81f3, "ieee80211_register_hw" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6b6b856a, "ieee80211_alloc_hw_nm" },
	{ 0x93b7b6b7, "dev_printk" },
	{ 0x27d7b178, "request_firmware" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x4fde45da, "ieee80211_wake_queues" },
	{ 0x128091b0, "ieee80211_tx_status_irqsafe" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xda22418d, "ieee80211_queue_work" },
	{ 0x5f750b5c, "ieee80211_queue_delayed_work" },
	{ 0x5f754e5a, "memset" },
	{ 0x6f648e4d, "ieee80211_stop_queues" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x278a9ab8, "ieee80211_rx_irqsafe" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xb9f3ed41, "cfg80211_find_ie_match" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x9214b99, "skb_put" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa1633992, "_dev_err" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc5d3ef01, "ieee80211_unregister_hw" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3fde75d1, "ieee80211_free_hw" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v03EBp7603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0919d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055DpA000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2219d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p5743d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p3220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2233d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12FDp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7617d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7615d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DC464764F5624B149032C90");
