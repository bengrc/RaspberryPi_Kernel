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
	{ 0x4af9b7c1, "neigh_lookup" },
	{ 0x36464de3, "inet_frag_kill" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x891591a9, "skb_copy" },
	{ 0x970abf7f, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0xf4d91bee, "neigh_destroy" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd37f6f56, "inet_frag_find" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x348fcba9, "kfree_skb_partial" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x539abc6, "inet_frags_fini" },
	{ 0x70e43fed, "inet_frags_exit_net" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc0f31cd1, "ieee802154_hdr_peek" },
	{ 0xa6f16826, "dev_get_by_index" },
	{ 0x585c3a56, "dev_remove_pack" },
	{ 0x59ea77b5, "nd_tbl" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x341c6c58, "init_net" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x7aab1a2b, "lowpan_header_decompress" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0x16918098, "skb_try_coalesce" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xf1cc8cb3, "inet_frag_destroy" },
	{ 0x123e7852, "lowpan_unregister_netdevice" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x60d07074, "ieee802154_hdr_peek_addrs" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x50f3d972, "rhashtable_init" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0x36620e5b, "lowpan_register_netdevice" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x584b7c3a, "inet_frags_init" },
	{ 0x9d4fd290, "dev_add_pack" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x76fc97be, "register_net_sysctl" },
	{ 0x9214b99, "skb_put" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x7b802843, "skb_morph" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=6lowpan,ieee802154,ipv6";


MODULE_INFO(srcversion, "8E37E00CA7334908ED1BB33");
