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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x750bf5c6, "release_sock" },
	{ 0x4af9b7c1, "neigh_lookup" },
	{ 0xcbfc45e3, "netdev_info" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5be73168, "ip_tunnel_get_stats64" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xcc71b5b8, "ip_mc_leave_group" },
	{ 0x55cfcea1, "udp_tunnel_notify_del_rx_port" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9acc6729, "ip_tunnel_metadata_cnt" },
	{ 0x172d62c9, "arp_tbl" },
	{ 0x9a81089a, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe94c8760, "udp_tunnel_xmit_skb" },
	{ 0x95ada117, "rtnl_notify" },
	{ 0x3c6f329a, "dst_cache_set_ip6" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6fa045e, "udp_tun_rx_dst" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x894ea3bb, "dst_cache_get_ip4" },
	{ 0x92c666f0, "dst_cache_get_ip6" },
	{ 0xf4d91bee, "neigh_destroy" },
	{ 0xe7d050ec, "skb_scrub_packet" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x39eb8ecc, "udp_sock_create6" },
	{ 0xc87b7b87, "setup_udp_tunnel_sock" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x6743b30, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xce9fb4d6, "udp_tunnel_sock_release" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xf156d8f7, "arp_create" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x1aae1a5e, "udp_tunnel_push_rx_port" },
	{ 0x249d5a5b, "ip_mc_join_group" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x68183b3b, "nla_put" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x38a9f7c5, "in6addr_loopback" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xece3437, "gro_cells_receive" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x5db8703, "ipv6_stub" },
	{ 0xd317669c, "__skb_get_hash" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x95d77d0f, "__dev_get_by_index" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x4fa4760f, "peernet2id" },
	{ 0x142b4c11, "rtnl_configure_link" },
	{ 0x15234bd5, "eth_gro_receive" },
	{ 0xf510b1f5, "rtnl_set_sk_err" },
	{ 0x72962390, "eth_gro_complete" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xb1885eb4, "udp_tunnel_notify_add_rx_port" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x5bd1382d, "udp_tunnel_drop_rx_port" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x78f92566, "iptunnel_handle_offloads" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0xaa3f1f31, "rtnl_create_link" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6b729fc6, "gro_cells_init" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0x2f5db15, "udp_tunnel6_xmit_skb" },
	{ 0x22d9fc84, "dst_cache_set_ip4" },
	{ 0x1600582b, "udp_sock_create4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0xb7ee2056, "ip6_dst_hoplimit" },
	{ 0x9214b99, "skb_put" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x46fca8a2, "inet_get_local_port_range" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xac1ae6a4, "__skb_checksum_complete" },
	{ 0x200b2041, "in6addr_any" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udp_tunnel,ip6_udp_tunnel";


MODULE_INFO(srcversion, "5A1E5A4099F27B8F34074FC");
