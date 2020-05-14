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
	{ 0x70185124, "icmpv6_send" },
	{ 0xd112babc, "xfrm6_tunnel_deregister" },
	{ 0xd478eb29, "register_pernet_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9a81089a, "dst_release" },
	{ 0x7c095c8e, "metadata_dst_alloc" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x3c6f329a, "dst_cache_set_ip6" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x8f6a8b20, "skb_set_owner_w" },
	{ 0xf4d91bee, "neigh_destroy" },
	{ 0x3f22a4e7, "__icmp_send" },
	{ 0x91715312, "sprintf" },
	{ 0xeb995028, "skb_realloc_headroom" },
	{ 0xe7d050ec, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x22bf920c, "ip6_redirect" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x6743b30, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x7c32d0f0, "printk" },
	{ 0x78d51c29, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x68183b3b, "nla_put" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5c7f5a8a, "dst_cache_get" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xece3437, "gro_cells_receive" },
	{ 0xafd84233, "dev_get_by_index_rcu" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x341c6c58, "init_net" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x7d120420, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x7023d8ce, "ip_route_input_noref" },
	{ 0x1403b0e1, "ipv6_chk_addr_and_flags" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0x65c4b17c, "ip6_route_output_flags" },
	{ 0x69439a68, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x4ec9b719, "__get_hash_from_flowi6" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0xc6d4866b, "ip6_update_pmtu" },
	{ 0x9ebc3fbf, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x78f92566, "iptunnel_handle_offloads" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6b729fc6, "gro_cells_init" },
	{ 0x4ce7f44b, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xbe6d244a, "rt6_lookup" },
	{ 0x9d669763, "memcpy" },
	{ 0xb6b86c6, "ip6tun_encaps" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x6eb522a, "ip6_local_out" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xb7ee2056, "ip6_dst_hoplimit" },
	{ 0x6a465956, "xfrm6_tunnel_register" },
	{ 0xd3f7986d, "xfrm_lookup" },
	{ 0x7d8ec863, "ipv6_push_frag_opts" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6,ipv6";


MODULE_INFO(srcversion, "90106A47D16DE37CAB57D3A");
