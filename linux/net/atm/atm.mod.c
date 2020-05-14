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
	{ 0x750bf5c6, "release_sock" },
	{ 0x402b8281, "__request_module" },
	{ 0x52526626, "device_remove_file" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x34ecc16, "sock_init_data" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xd573bd25, "proc_create_seq_private" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x86616e0b, "send_sig" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6122337, "atomic_notifier_chain_unregister" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xc5a6c57b, "sock_no_sendpage" },
	{ 0x7914a643, "sock_get_timestamp" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0xfe0bbbd2, "atomic_notifier_call_chain" },
	{ 0x3ea40fd3, "PDE_DATA" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0xb0ff659, "device_del" },
	{ 0xe864e62d, "device_register" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x8e3f4223, "skb_copy_datagram_iter" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0x2138166e, "class_unregister" },
	{ 0x6c44301d, "seq_putc" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x13cd319b, "proc_mkdir_data" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0x9dc00216, "sock_wake_async" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x341c6c58, "init_net" },
	{ 0x61a6ff9, "__class_register" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0x84dc8f95, "__sock_recv_ts_and_drops" },
	{ 0xd040e01a, "module_put" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2382bc58, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x142a905e, "put_device" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0xb284c739, "sock_get_timestampns" },
	{ 0x33e9e0a2, "atomic_notifier_chain_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a2d35f0, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x3e668302, "proto_unregister" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0x92601b1f, "refcount_sub_and_test_checked" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5123e79, "remove_proc_subtree" },
	{ 0x2ab39df1, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x8d7996f, "skb_free_datagram" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "572ABCE11C0482354D0E6A8");
