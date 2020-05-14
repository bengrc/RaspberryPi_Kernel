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
	{ 0x34ecc16, "sock_init_data" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x50093f6, "kernel_sendmsg" },
	{ 0xcf05465c, "sockfd_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5e636344, "sock_no_setsockopt" },
	{ 0xab64b595, "sock_no_getsockopt" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x372e218d, "sock_no_getname" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x732e0f66, "bt_sock_register" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xafa10a99, "down_read" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0x43a5bbcf, "sock_no_recvmsg" },
	{ 0xf6af34ed, "bt_sock_unlink" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0xe5deb55e, "l2cap_is_socket" },
	{ 0xdf3dd08c, "sock_no_bind" },
	{ 0x71c90087, "memcmp" },
	{ 0xd8e4198d, "baswap" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x94425488, "up_write" },
	{ 0x341c6c58, "init_net" },
	{ 0xbc22018b, "down_write" },
	{ 0xce6c0a2c, "fput" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0x3d70134, "bt_sock_link" },
	{ 0xd040e01a, "module_put" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x2382bc58, "proto_register" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x3e668302, "proto_unregister" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0xbd6bfdfd, "__module_put_and_exit" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x60e1284f, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xfdacf1b5, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0x6d87b69, "crc32_be" },
	{ 0x56c0a762, "sock_no_sendmsg" },
	{ 0x3a32ed08, "set_user_nice" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x23928327, "bt_procfs_init" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7e0d759f, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "EE2904DC6B5F1151D5BBE0F");
