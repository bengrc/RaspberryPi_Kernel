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
	{ 0x42261281, "i2400m_cmd_enter_powersave" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd13b76b2, "i2400m_dev_reset_handle" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xc494e037, "debugfs_create_u8" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe20625db, "usb_init_urb" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xec0ddd80, "i2400m_tx_msg_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x87dd7c52, "i2400m_rx" },
	{ 0x8027968f, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x91af71e0, "usb_enable_autosuspend" },
	{ 0x824a22f5, "usb_get_urb" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc9642a45, "i2400m_setup" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe9f258f1, "i2400m_is_boot_barker" },
	{ 0x6456409, "i2400m_post_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x54111370, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x9be73228, "debugfs_create_size_t" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x44c7f0c3, "i2400m_netdev_setup" },
	{ 0xa1633992, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa6f42fd8, "i2400m_unknown_barker" },
	{ 0x41aa8f6a, "i2400m_pre_reset" },
	{ 0x3a5827aa, "usb_queue_reset_device" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x73fd981b, "usb_clear_halt" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x391d538b, "dev_driver_string" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb00b793c, "i2400m_bm_cmd_prepare" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x79efa7a3, "i2400m_release" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x10171564, "i2400m_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0xdb6cbf4, "pm_runtime_set_autosuspend_delay" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x9214b99, "skb_put" },
	{ 0x8831adbd, "i2400m_tx_msg_sent" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x524ccab1, "usb_autopm_put_interface" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2400m";

MODULE_ALIAS("usb:v8086p0186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0181d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1405d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0180d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0182d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1406d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C3FBA1AFD9B44932DB485C4");
