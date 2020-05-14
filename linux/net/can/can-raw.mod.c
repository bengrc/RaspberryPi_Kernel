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
	{ 0xb5854c0c, "can_rx_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x136a2128, "can_proto_unregister" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x78a9b1b, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xc5a6c57b, "sock_no_sendpage" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0x5f754e5a, "memset" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xa6f16826, "dev_get_by_index" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0x84b926fe, "can_ioctl" },
	{ 0xd0e55644, "can_send" },
	{ 0x84dc8f95, "__sock_recv_ts_and_drops" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x19513f0e, "datagram_poll" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0x37f8dc48, "can_proto_register" },
	{ 0x8bd942d6, "sock_alloc_send_skb" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xfdacf1b5, "sock_no_connect" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x6dc5e4de, "can_rx_unregister" },
	{ 0x9214b99, "skb_put" },
	{ 0x51294cce, "_copy_to_iter" },
	{ 0x8d7996f, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "B7EE842BB5BDB012356121C");
