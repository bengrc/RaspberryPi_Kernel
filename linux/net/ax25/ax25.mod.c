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
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0x5cdc9a0c, "skb_queue_head" },
	{ 0x750bf5c6, "release_sock" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x34ecc16, "sock_init_data" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xd573bd25, "proc_create_seq_private" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xd03f84c8, "from_kuid_munged" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x86616e0b, "send_sig" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x891591a9, "skb_copy" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0x78a9b1b, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x8f6a8b20, "skb_set_owner_w" },
	{ 0x25f8a9fb, "sock_i_ino" },
	{ 0xedd55fd9, "sock_rfree" },
	{ 0xeb995028, "skb_realloc_headroom" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0xc5a6c57b, "sock_no_sendpage" },
	{ 0x7914a643, "sock_get_timestamp" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0xe020c0b8, "skb_dequeue_tail" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0x8e3f4223, "skb_copy_datagram_iter" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x543ef284, "seq_hlist_start" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0x585c3a56, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x341c6c58, "init_net" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2382bc58, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x69439a68, "make_kuid" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xb284c739, "sock_get_timestampns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x19513f0e, "datagram_poll" },
	{ 0x6a2d35f0, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x3e668302, "proto_unregister" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0x8bd942d6, "sock_alloc_send_skb" },
	{ 0x2fd1d842, "__dev_get_by_name" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9d4fd290, "dev_add_pack" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x76fc97be, "register_net_sysctl" },
	{ 0x9214b99, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8d7996f, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "811805CB4C7F2A7DA7BBEAF");
