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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xab8da85a, "iptun_encaps" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9a81089a, "dst_release" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x894ea3bb, "dst_cache_get_ip4" },
	{ 0xf4d91bee, "neigh_destroy" },
	{ 0x3f22a4e7, "__icmp_send" },
	{ 0xe7d050ec, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6b4307eb, "iptunnel_xmit" },
	{ 0xece3437, "gro_cells_receive" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x341c6c58, "init_net" },
	{ 0x95d77d0f, "__dev_get_by_index" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xe9474bde, "dst_cache_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x9ebc3fbf, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6b729fc6, "gro_cells_init" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x9d669763, "memcpy" },
	{ 0x22d9fc84, "dst_cache_set_ip4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4db0ad33, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F220A4FA1983453B9D4D9F7");
