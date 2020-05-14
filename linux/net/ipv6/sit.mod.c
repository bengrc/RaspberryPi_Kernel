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
	{ 0x36ea8d7f, "ip_tunnel_get_link_net" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x7c2a22e5, "ip_tunnel_get_iflink" },
	{ 0x5be73168, "ip_tunnel_get_stats64" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0x575a7d5, "xfrm4_tunnel_register" },
	{ 0xd478eb29, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x78d51c29, "unregister_pernet_device" },
	{ 0xbf6895ba, "xfrm4_tunnel_deregister" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x70185124, "icmpv6_send" },
	{ 0x6b4307eb, "iptunnel_xmit" },
	{ 0xab8da85a, "iptun_encaps" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x8f6a8b20, "skb_set_owner_w" },
	{ 0xeb995028, "skb_realloc_headroom" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xf4d91bee, "neigh_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xa0c96fa4, "ipv6_chk_prefix" },
	{ 0xb20a8d0f, "ipv6_chk_custom_prefix" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x71c90087, "memcmp" },
	{ 0xc1634dcd, "ip_tunnel_xmit" },
	{ 0x78f92566, "iptunnel_handle_offloads" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x341c6c58, "init_net" },
	{ 0x1828d961, "ip_tunnel_encap_setup" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x55a515c6, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4ce7f44b, "__xfrm_policy_check" },
	{ 0xdce689dc, "ip_tunnel_rcv" },
	{ 0x6743b30, "__iptunnel_pull_header" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xbb5f97a4, "ipv4_redirect" },
	{ 0xbb18f5f1, "ipv4_update_pmtu" },
	{ 0x6b6aff04, "ip6_err_gen_icmpv6_unreach" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9ebc3fbf, "netdev_state_change" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x95d77d0f, "__dev_get_by_index" },
	{ 0x9a81089a, "dst_release" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0x69439a68, "make_kuid" },
	{ 0x5f754e5a, "memset" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4,ipv6";


MODULE_INFO(srcversion, "95B604ECCC38898AF0A0432");
