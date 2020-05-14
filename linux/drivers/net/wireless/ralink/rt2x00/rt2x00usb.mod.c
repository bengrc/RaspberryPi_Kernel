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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xe3a9a884, "rt2x00lib_resume" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5452c3c2, "usb_unanchor_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x897ed18c, "rt2x00lib_dmastart" },
	{ 0x591637a, "rt2x00queue_flush_queue" },
	{ 0x6b6b856a, "ieee80211_alloc_hw_nm" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xff87ea11, "rt2x00queue_for_each_entry" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf3729c1f, "rt2x00queue_start_queue" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0x9b933519, "rt2x00lib_remove_dev" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x7e9d2ac4, "rt2x00queue_get_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0xf50f341a, "rt2x00lib_rxdone" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x3fde75d1, "ieee80211_free_hw" },
	{ 0x11fffc6e, "rt2x00lib_txdone_noinfo" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xcaf663f7, "rt2x00lib_dmadone" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x90d44a2c, "rt2x00lib_probe_dev" },
	{ 0xb4d2f425, "rt2x00queue_stop_queue" },
	{ 0x6da96a93, "rt2x00lib_suspend" },
	{ 0xeb671564, "usb_anchor_urb" },
	{ 0x44dac807, "__skb_pad" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "D86C2F8730AD8DAE1BB3994");
