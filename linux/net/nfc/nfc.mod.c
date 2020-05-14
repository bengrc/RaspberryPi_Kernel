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
	{ 0x4f7a4dac, "class_find_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5cdc9a0c, "skb_queue_head" },
	{ 0x750bf5c6, "release_sock" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x34ecc16, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe6646669, "genl_register_family" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xe43936f9, "genl_unregister_family" },
	{ 0x5e636344, "sock_no_setsockopt" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xab64b595, "sock_no_getsockopt" },
	{ 0x1f105511, "sock_no_ioctl" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x891591a9, "skb_copy" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x372e218d, "sock_no_getname" },
	{ 0x78a9b1b, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1482de2b, "skb_unlink" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0x655d816b, "__sock_recv_wifi_status" },
	{ 0xb0ff659, "device_del" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0xee749321, "class_dev_iter_init" },
	{ 0x6bf639e3, "rfkill_alloc" },
	{ 0x8e3f4223, "skb_copy_datagram_iter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdf3dd08c, "sock_no_bind" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0x2138166e, "class_unregister" },
	{ 0x21af32f7, "ida_free" },
	{ 0x68183b3b, "nla_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x6b685034, "device_add" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x341c6c58, "init_net" },
	{ 0x61a6ff9, "__class_register" },
	{ 0x4f7e9f73, "devm_kfree" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0xadf507e9, "__sock_recv_timestamp" },
	{ 0xd040e01a, "module_put" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2382bc58, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x43771e5b, "netlink_broadcast" },
	{ 0x142a905e, "put_device" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x19513f0e, "datagram_poll" },
	{ 0x6a2d35f0, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x3e668302, "proto_unregister" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0x77c7bd56, "class_dev_iter_exit" },
	{ 0x1960b0c9, "genl_family_attrbuf" },
	{ 0x8bd942d6, "sock_alloc_send_skb" },
	{ 0xc3ef7099, "__pskb_copy_fclone" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xfdacf1b5, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x9d669763, "memcpy" },
	{ 0x4ecc241c, "genlmsg_put" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x56c0a762, "sock_no_sendmsg" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x67258e26, "device_initialize" },
	{ 0xcd00abbc, "add_wait_queue_exclusive" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x4ce6f09f, "class_dev_iter_next" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0x8d7996f, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";


MODULE_INFO(srcversion, "E589F4EB1A26E682BA0EB15");
