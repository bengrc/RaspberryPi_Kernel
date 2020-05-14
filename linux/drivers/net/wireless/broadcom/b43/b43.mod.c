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
	{ 0x5cdc9a0c, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x79c5c52, "ssb_dma_translation" },
	{ 0x52526626, "device_remove_file" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x84b4489c, "bcma_pmu_spuravoid_pllupdate" },
	{ 0x75214c3c, "dma_release_from_dev_coherent" },
	{ 0x5d5000cb, "mem_map" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xda22418d, "ieee80211_queue_work" },
	{ 0xadf77bed, "bcma_host_pci_down" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0x5eeb720d, "ieee80211_rts_get" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5d9efaa3, "ssb_commit_settings" },
	{ 0x4fcde537, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xc5d3ef01, "ieee80211_unregister_hw" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfe6f594e, "ssb_bus_powerup" },
	{ 0x9ad4f136, "bcma_host_pci_up" },
	{ 0xee6824ab, "wiphy_rfkill_start_polling" },
	{ 0xc2993702, "__ieee80211_get_assoc_led_name" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x53d4637e, "__ssb_driver_register" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0x2c28325b, "of_led_classdev_register" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xc2e38efb, "ieee80211_stop_queue" },
	{ 0xc972cb09, "ieee80211_tx_status" },
	{ 0x12d8a2c7, "dma_alloc_from_dev_coherent" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x4c1fb01f, "ssb_driver_unregister" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x6b6b856a, "ieee80211_alloc_hw_nm" },
	{ 0x6b9c58d6, "bcma_core_dma_translation" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x761d9018, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4fde45da, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x702dd919, "ssb_device_enable" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x16e12baa, "bcma_core_set_clockmode" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x501ff362, "__bcma_driver_register" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x6be22925, "ieee80211_ctstoself_get" },
	{ 0x1e0535cc, "request_firmware_nowait" },
	{ 0x5f750b5c, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0x17d1439f, "bcma_host_pci_irq_ctl" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4b7365a1, "bcma_chipco_gpio_control" },
	{ 0x85174419, "__ieee80211_get_rx_led_name" },
	{ 0x26c437e4, "bcma_core_is_enabled" },
	{ 0x5b01552f, "ssb_pmu_set_ldo_voltage" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb17b6018, "ssb_device_disable" },
	{ 0x9844eda2, "bcma_core_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x450eb181, "wiphy_rfkill_set_hw_state" },
	{ 0x82af3efe, "bcma_driver_unregister" },
	{ 0x8f39758d, "bcma_core_pll_ctl" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x2fc7504b, "hwrng_register" },
	{ 0x2e33337f, "__ieee80211_get_tx_led_name" },
	{ 0x95b351c9, "ssb_set_devtypedata" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5dc44398, "ieee80211_wake_queue" },
	{ 0x86e58cf1, "ieee80211_generic_frame_duration" },
	{ 0xd5348666, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x9b7d81f3, "ieee80211_register_hw" },
	{ 0x1804c3b9, "led_classdev_unregister" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x3fde75d1, "ieee80211_free_hw" },
	{ 0x68560013, "ssb_bus_may_powerdown" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0xe7f2c0b5, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x918eeab8, "ssb_pmu_set_ldo_paref" },
	{ 0x5fc2c660, "hwrng_unregister" },
	{ 0x9214b99, "skb_put" },
	{ 0x7b612b64, "ssb_device_is_enabled" },
	{ 0x8a040771, "bcma_core_disable" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x535402fd, "ieee80211_get_tkip_p1k_iv" },
	{ 0xe8c5ce96, "ieee80211_get_response_rate" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ssb,bcma,cfg80211";

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "04C61B6BC3EACDBBEDD6BDE");
