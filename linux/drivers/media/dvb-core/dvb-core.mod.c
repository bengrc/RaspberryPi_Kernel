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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x489c6f18, "cdev_del" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x60cd5082, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xcd4c97a1, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd0d9eeb6, "down_interruptible" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x38142440, "device_destroy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xafa10a99, "down_read" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x9ab89b76, "default_llseek" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2ec92974, "freezing_slow_path" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x54111370, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf0ef52e8, "down" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x69e1d2e, "device_create" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x5347d8c2, "i2c_unregister_device" },
	{ 0x94425488, "up_write" },
	{ 0xa1633992, "_dev_err" },
	{ 0xbc22018b, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0xab9fff11, "cdev_add" },
	{ 0xd040e01a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa3bcc5bc, "eth_header_parse" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x335f6ace, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6d87b69, "crc32_be" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x581cde4e, "up" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x49970de8, "finish_wait" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9214b99, "skb_put" },
	{ 0x9c921cae, "__class_create" },
	{ 0x36790da2, "i2c_new_device" },
	{ 0xa87767f7, "eth_header" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "373DE53BAAA8BAAC9A15314");
