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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd9d30ec0, "init_dummy_netdev" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x5d5000cb, "mem_map" },
	{ 0xc494e037, "debugfs_create_u8" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa28ac79e, "ieee80211_sta_ps_transition" },
	{ 0x1fe912f1, "netdev_alloc_frag" },
	{ 0xc9a16c73, "page_address" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x39ddd88, "no_llseek" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xc5d3ef01, "ieee80211_unregister_hw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf3ce1ac7, "trace_event_buffer_reserve" },
	{ 0x760d6ec2, "bpf_trace_run3" },
	{ 0x2544d559, "netif_napi_del" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc2e38efb, "ieee80211_stop_queue" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf08c67de, "napi_alloc_frag" },
	{ 0x2bdabd91, "debugfs_create_u32" },
	{ 0x8c2f40f0, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x432b976b, "ieee80211_tx_dequeue" },
	{ 0x6b6b856a, "ieee80211_alloc_hw_nm" },
	{ 0x761d9018, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xa821334e, "wiphy_read_of_freq_limits" },
	{ 0x434ac834, "ieee80211_sta_pspoll" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x569164ba, "trace_event_reg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe82f888a, "ieee80211_find_sta_by_ifaddr" },
	{ 0x2fd40cda, "netif_napi_add" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0xfdb00a00, "simple_attr_release" },
	{ 0x379a920d, "debugfs_create_file_unsafe" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x3210151f, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x903a213e, "devm_kmemdup" },
	{ 0x5f750b5c, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xab945a16, "__iowrite32_copy" },
	{ 0x25558a29, "debugfs_attr_read" },
	{ 0xc269e05, "of_get_child_by_name" },
	{ 0x4ad6f0f0, "build_skb" },
	{ 0x2fd87284, "devm_of_led_classdev_register" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xfbe951b7, "of_get_mac_address" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x894ef2d7, "trace_event_ignore_this_pid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x6126d321, "debugfs_create_devm_seqfile" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91b925ae, "ieee80211_sta_uapsd_trigger" },
	{ 0x1317364, "ieee80211_sta_set_buffered" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x288ba3f1, "ieee80211_get_key_rx_seq" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xf660a8c3, "ieee80211_send_bar" },
	{ 0x92494221, "ieee80211_get_tx_rates" },
	{ 0x65f1710b, "napi_complete_done" },
	{ 0x66dc6158, "trace_event_buffer_commit" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5dc44398, "ieee80211_wake_queue" },
	{ 0xe05dc78c, "event_triggers_call" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37b1cd50, "__ieee80211_create_tpt_led_trigger" },
	{ 0x9b7d81f3, "ieee80211_register_hw" },
	{ 0x540ca76b, "trace_event_raw_init" },
	{ 0xd828d89c, "debugfs_create_blob" },
	{ 0x44ca850b, "skb_add_rx_frag" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5559c507, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xa7890420, "debugfs_attr_write" },
	{ 0xdec7b88, "simple_attr_open" },
	{ 0xd0e9c7f, "dmam_alloc_coherent" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "EA8079BA83A9639BAF5AE00");
