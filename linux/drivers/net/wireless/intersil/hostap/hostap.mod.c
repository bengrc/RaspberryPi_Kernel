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
	{ 0x55a515c6, "register_netdevice" },
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7d2d8dff, "iw_handler_set_thrspy" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0xd573bd25, "proc_create_seq_private" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0x3e231a30, "proc_create_single_data" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x891591a9, "skb_copy" },
	{ 0x97397745, "lib80211_crypt_delayed_deinit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x91715312, "sprintf" },
	{ 0xeb995028, "skb_realloc_headroom" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0xe8040962, "proc_remove" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0xe34ea837, "wireless_spy_update" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x3ea40fd3, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x4dec644, "proc_mkdir" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xdb92fc9c, "iw_handler_get_spy" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x6c44301d, "seq_putc" },
	{ 0x2321993a, "wireless_send_event" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x3c0bd0f2, "dev_close" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x341c6c58, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xa25ed979, "dev_open" },
	{ 0xd040e01a, "module_put" },
	{ 0xf806327e, "lib80211_get_crypto_ops" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x363356bf, "netif_device_attach" },
	{ 0xc38b8475, "netif_device_detach" },
	{ 0xcbb6783f, "eth_header_cache_update" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xae198ead, "iw_handler_get_thrspy" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x2ab39df1, "proc_create_data" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xd713673f, "iw_handler_set_spy" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6a1fa5ef, "eth_header_cache" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0xa87767f7, "eth_header" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb952953d, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lib80211";


MODULE_INFO(srcversion, "59B7A2C750601A14D6917C9");
