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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xa1633992, "_dev_err" },
	{ 0x91af71e0, "usb_enable_autosuspend" },
	{ 0xd27e611c, "btbcm_setup_patchram" },
	{ 0x4089ad26, "btbcm_set_bdaddr" },
	{ 0xf4b36cd, "btintel_set_diag" },
	{ 0x92828c08, "btintel_hw_error" },
	{ 0xad898e2f, "btintel_set_bdaddr" },
	{ 0x19ed67d4, "btintel_set_diag_mfg" },
	{ 0xe91afbe9, "usb_ifnum_to_if" },
	{ 0x6e151630, "btbcm_setup_apple" },
	{ 0x7c093fe4, "of_property_read_variable_u16_array" },
	{ 0x76d324d7, "hci_register_dev" },
	{ 0x51e26df8, "usb_driver_claim_interface" },
	{ 0xd004bc19, "btrtl_shutdown_realtek" },
	{ 0x4a95a840, "btrtl_setup_realtek" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x651294be, "of_irq_get_byname" },
	{ 0x47820ec9, "of_match_device" },
	{ 0xd358b1f4, "hci_alloc_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x43a2a13f, "usb_match_id" },
	{ 0xaf790576, "btintel_set_event_mask" },
	{ 0xc366b93, "btintel_load_ddc_config" },
	{ 0xf3005ce8, "btintel_send_intel_reset" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x675e1f9, "btintel_download_firmware" },
	{ 0x7c06de7b, "btintel_read_boot_params" },
	{ 0x6212693a, "btintel_version_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x8fa8221b, "hci_recv_diag" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x524ccab1, "usb_autopm_put_interface" },
	{ 0x8027968f, "usb_autopm_get_interface" },
	{ 0x9277c76, "btintel_exit_mfg" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0xe6cfe876, "btintel_check_bdaddr" },
	{ 0xce15021f, "btintel_set_event_mask_mfg" },
	{ 0x71c90087, "memcmp" },
	{ 0x2e41bae0, "__hci_cmd_sync_ev" },
	{ 0x2b5fe40c, "btintel_enter_mfg" },
	{ 0x27d7b178, "request_firmware" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd7442057, "bt_info" },
	{ 0x91285fe8, "btintel_read_version" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc91beaf0, "__hci_cmd_sync" },
	{ 0x25a5f9ee, "usb_driver_release_interface" },
	{ 0x26b4024e, "hci_free_dev" },
	{ 0xf09d6f5a, "hci_unregister_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x28ad01c0, "usb_get_from_anchor" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0xfa4c6c9f, "hci_recv_frame" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x9d669763, "memcpy" },
	{ 0x9214b99, "skb_put" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x47022514, "bt_err" },
	{ 0x5452c3c2, "usb_unanchor_urb" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xeb671564, "usb_anchor_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btbcm,btintel,bluetooth,btrtl";

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1248BD0A9030CBDB832F7F");
