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
	{ 0x50b03c47, "sg_init_table" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1fe912f1, "netdev_alloc_frag" },
	{ 0xc9a16c73, "page_address" },
	{ 0xc505af38, "skb_to_sgvec_nomark" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf3ce1ac7, "trace_event_buffer_reserve" },
	{ 0x2e691e5b, "mt76_rx_poll_complete" },
	{ 0x760d6ec2, "bpf_trace_run3" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8c2f40f0, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x569164ba, "trace_event_reg" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xa1633992, "_dev_err" },
	{ 0x3210151f, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x5f750b5c, "ieee80211_queue_delayed_work" },
	{ 0x4ad6f0f0, "build_skb" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x894ef2d7, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xe3953cfc, "mt76_txq_schedule" },
	{ 0x66dc6158, "trace_event_buffer_commit" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5dc44398, "ieee80211_wake_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe05dc78c, "event_triggers_call" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x540ca76b, "trace_event_raw_init" },
	{ 0x44ca850b, "skb_add_rx_frag" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5559c507, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x44dac807, "__skb_pad" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mt76,mac80211";


MODULE_INFO(srcversion, "9B240BE9A4958D12571B2D4");
