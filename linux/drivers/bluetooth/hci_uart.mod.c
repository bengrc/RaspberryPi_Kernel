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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5cdc9a0c, "skb_queue_head" },
	{ 0x8fa8221b, "hci_recv_diag" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0xc91beaf0, "__hci_cmd_sync" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x51b6a808, "__pm_runtime_use_autosuspend" },
	{ 0x76d324d7, "hci_register_dev" },
	{ 0x1027251, "__pm_runtime_suspend" },
	{ 0x95791d28, "btbcm_patchram" },
	{ 0xeb774cfc, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9ed715b5, "hci_reset_dev" },
	{ 0xf241a7ae, "tty_unthrottle" },
	{ 0x4089ad26, "btbcm_set_bdaddr" },
	{ 0x139f02c8, "__percpu_down_read" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x871a5f43, "serdev_device_close" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfa4c6c9f, "hci_recv_frame" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0xf09d6f5a, "hci_unregister_dev" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb1becd70, "serdev_device_write_buf" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0x9a5ff680, "serdev_device_set_tiocm" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdae38bfa, "__serdev_device_driver_register" },
	{ 0x71c90087, "memcmp" },
	{ 0xf291c241, "__percpu_init_rwsem" },
	{ 0x9338b503, "tty_ldisc_flush" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0x82730dd, "n_tty_ioctl_helper" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd358b1f4, "hci_alloc_dev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x50f398e5, "serdev_device_write_flush" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xa1633992, "_dev_err" },
	{ 0xe8195c48, "percpu_up_write" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xcba6de06, "device_property_read_u32_array" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0x67acf6b0, "tty_driver_flush_buffer" },
	{ 0x6be8b614, "devm_free_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x66c06339, "__pm_runtime_set_status" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x7688d325, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x81f260de, "__percpu_up_read" },
	{ 0x9d669763, "memcpy" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0x5dda3808, "serdev_device_set_flow_control" },
	{ 0xc44b0576, "btbcm_initialize" },
	{ 0x27d7b178, "request_firmware" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0xdb6cbf4, "pm_runtime_set_autosuspend_delay" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6c700ea8, "btbcm_finalize" },
	{ 0xbaa9a2c9, "platform_get_irq" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x26b4024e, "hci_free_dev" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x98d9e47a, "serdev_device_set_baudrate" },
	{ 0xbc2910a0, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x3fba74f1, "percpu_down_write" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x3057fa8d, "tty_set_termios" },
	{ 0x99daf4d4, "percpu_free_rwsem" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,btbcm,serdev";

MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");

MODULE_INFO(srcversion, "C5887DB4F9D7AA003EFCCCA");
