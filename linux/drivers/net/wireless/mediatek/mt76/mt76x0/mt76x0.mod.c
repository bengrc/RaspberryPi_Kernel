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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x7f8a9562, "single_open" },
	{ 0xefec0c3a, "__mt76_poll" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc9a16c73, "page_address" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd07da2bc, "single_release" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xc5d3ef01, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf3ce1ac7, "trace_event_buffer_reserve" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x9943b1a3, "seq_read" },
	{ 0x760d6ec2, "bpf_trace_run3" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x6f648e4d, "ieee80211_stop_queues" },
	{ 0x716fb529, "simple_attr_read" },
	{ 0xc2e38efb, "ieee80211_stop_queue" },
	{ 0xc972cb09, "ieee80211_tx_status" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x2bdabd91, "debugfs_create_u32" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8c2f40f0, "trace_define_field" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x33f33d68, "bpf_trace_run9" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x6b6b856a, "ieee80211_alloc_hw_nm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x761d9018, "ieee80211_free_txskb" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x4fde45da, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x74280c09, "__mt76_poll_msec" },
	{ 0x569164ba, "trace_event_reg" },
	{ 0xced14002, "usb_poison_urb" },
	{ 0x6c44301d, "seq_putc" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfdb00a00, "simple_attr_release" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0xa1633992, "_dev_err" },
	{ 0x3210151f, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x903a213e, "devm_kmemdup" },
	{ 0x5f750b5c, "ieee80211_queue_delayed_work" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0x666ab8d0, "mt76_wcid_alloc" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x894ef2d7, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xf660a8c3, "ieee80211_send_bar" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x92494221, "ieee80211_get_tx_rates" },
	{ 0x66dc6158, "trace_event_buffer_commit" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5dc44398, "ieee80211_wake_queue" },
	{ 0xe05dc78c, "event_triggers_call" },
	{ 0x67e0135f, "ieee80211_get_hdrlen_from_skb" },
	{ 0xa5769beb, "bpf_trace_run2" },
	{ 0x9b7d81f3, "ieee80211_register_hw" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x540ca76b, "trace_event_raw_init" },
	{ 0x1a32a075, "ieee80211_tx_status_ext" },
	{ 0x44ca850b, "skb_add_rx_frag" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x3fde75d1, "ieee80211_free_hw" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5559c507, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xdbfe0b3c, "bpf_trace_run4" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xdec7b88, "simple_attr_open" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xa4cf40cd, "simple_attr_write" },
	{ 0x44dac807, "__skb_pad" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,mt76,cfg80211";

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "5BFBA3833A128E41FFA1056");
