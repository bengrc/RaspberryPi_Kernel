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
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x25f2091d, "wimax_dev_init" },
	{ 0x349cba85, "strchr" },
	{ 0xc494e037, "debugfs_create_u8" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xb92e3d42, "wimax_report_rfkill_sw" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x855cd368, "wimax_msg_data" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0x229f1cb0, "wimax_state_change" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf236eb4d, "wimax_msg_send" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x716fb529, "simple_attr_read" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x2bdabd91, "debugfs_create_u32" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0x9ab89b76, "default_llseek" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x79b1f0e2, "wimax_msg_data_len" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0x9be73228, "debugfs_create_size_t" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0xda4a9a9d, "wimax_state_get" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xfdb00a00, "simple_attr_release" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x1061a901, "simple_open" },
	{ 0xa1633992, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1e0a9f8e, "wimax_report_rfkill_hw" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x61ea8a1b, "wimax_msg_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfed9ad99, "wimax_dev_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x391d538b, "dev_driver_string" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xac52ae73, "wimax_dev_rm" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5bbf538, "wimax_msg" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9214b99, "skb_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xdec7b88, "simple_attr_open" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0xa4cf40cd, "simple_attr_write" },
	{ 0xb859f38b, "krealloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wimax";


MODULE_INFO(srcversion, "214BC04D05CE638A2B6168F");
