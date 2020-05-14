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
	{ 0xcbfc45e3, "netdev_info" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xefa42dd4, "lbs_host_sleep_cfg" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa013d8e5, "lbs_resume" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4ab9d294, "lbs_stop_card" },
	{ 0x162933c1, "__lbs_cmd" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x4bffc7e0, "lbs_start_card" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x54873e19, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa73093e7, "lbs_send_tx_feedback" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd9325cfb, "lbs_get_firmware_async" },
	{ 0x8e073fdc, "lbs_cmd_copyback" },
	{ 0x40db976e, "lbs_suspend" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4a3e2c6f, "lbs_remove_card" },
	{ 0x6d8b8829, "lbs_process_rxed_packet" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0x2343e412, "lbs_host_to_card_done" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xd4be3a39, "lbs_add_card" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9214b99, "skb_put" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x85762025, "lbs_notify_command_response" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B535990995FF5F553E82554");
