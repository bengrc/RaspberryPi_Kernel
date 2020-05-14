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
	{ 0x5cdc9a0c, "skb_queue_head" },
	{ 0xa1422ebd, "hid_add_device" },
	{ 0x34ecc16, "sock_init_data" },
	{ 0xe40af604, "hid_ignore" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x50093f6, "kernel_sendmsg" },
	{ 0xcf05465c, "sockfd_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5e636344, "sock_no_setsockopt" },
	{ 0x5a3be0be, "hid_parse_report" },
	{ 0xab64b595, "sock_no_getsockopt" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x372e218d, "sock_no_getname" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x732e0f66, "bt_sock_register" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf29d6f39, "hid_input_report" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xafa10a99, "down_read" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x3b3a1192, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0x43a5bbcf, "sock_no_recvmsg" },
	{ 0xf6af34ed, "bt_sock_unlink" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0x3035d93a, "l2cap_conn_put" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe5deb55e, "l2cap_is_socket" },
	{ 0xdf3dd08c, "sock_no_bind" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x94425488, "up_write" },
	{ 0x341c6c58, "init_net" },
	{ 0xbc22018b, "down_write" },
	{ 0xce6c0a2c, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0x3d70134, "bt_sock_link" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x2382bc58, "proto_register" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x175ec858, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x3e668302, "proto_unregister" },
	{ 0x1a5ceb2f, "l2cap_register_user" },
	{ 0xbd6bfdfd, "__module_put_and_exit" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x2cc4f2c1, "hid_destroy_device" },
	{ 0x8a47b56f, "hid_allocate_device" },
	{ 0x3545bcb0, "l2cap_conn_get" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x60e1284f, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfdacf1b5, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0x56c0a762, "sock_no_sendmsg" },
	{ 0x3a32ed08, "set_user_nice" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0x23928327, "bt_procfs_init" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0x7e0d759f, "bt_procfs_cleanup" },
	{ 0x4dec6038, "memscan" },
	{ 0x88331edd, "l2cap_unregister_user" },
	{ 0x8ccc143c, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "87294FA2AE731D91D1C61FE");
