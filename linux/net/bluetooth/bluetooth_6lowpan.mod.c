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
	{ 0x8bd94e43, "l2cap_chan_set_defaults" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0x7f8a9562, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xd07da2bc, "single_release" },
	{ 0x88c49d6b, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x891591a9, "skb_copy" },
	{ 0x970abf7f, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe4cd8faf, "l2cap_chan_send" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6b1a5765, "l2cap_add_psm" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x9943b1a3, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x716fb529, "simple_attr_read" },
	{ 0x47022514, "bt_err" },
	{ 0x8f67adad, "l2cap_chan_close" },
	{ 0xd7442057, "bt_info" },
	{ 0xedfaf1f5, "hci_get_route" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0x7d3c293f, "l2cap_chan_put" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xd8e4198d, "baswap" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x2b626e72, "iov_iter_kvec" },
	{ 0x6415795a, "debugfs_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c0bd0f2, "dev_close" },
	{ 0xfdb00a00, "simple_attr_release" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xa25ed979, "dev_open" },
	{ 0x7aab1a2b, "lowpan_header_decompress" },
	{ 0xd040e01a, "module_put" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0xa554d969, "lowpan_unregister_netdev" },
	{ 0xfa9ba28a, "bt_debugfs" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x9ff3fba2, "l2cap_chan_connect" },
	{ 0xa8d0cea9, "netdev_notify_peers" },
	{ 0x6971deb3, "lowpan_register_netdev" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x34480ab2, "l2cap_chan_create" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xdec7b88, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xa4cf40cd, "simple_attr_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,6lowpan";


MODULE_INFO(srcversion, "FA70B9666CD71A3417E127E");
