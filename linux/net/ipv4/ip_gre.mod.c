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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xd478eb29, "register_pernet_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5be73168, "ip_tunnel_get_stats64" },
	{ 0x7c2a22e5, "ip_tunnel_get_iflink" },
	{ 0x9a81089a, "dst_release" },
	{ 0x7c095c8e, "metadata_dst_alloc" },
	{ 0xbb18f5f1, "ipv4_update_pmtu" },
	{ 0xd9d3823b, "ip_tunnel_lookup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa44e5750, "__ip_tunnel_change_mtu" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x894ea3bb, "dst_cache_get_ip4" },
	{ 0x3f22a4e7, "__icmp_send" },
	{ 0xc1634dcd, "ip_tunnel_xmit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x6743b30, "__iptunnel_pull_header" },
	{ 0x82e20976, "ip_tunnel_setup" },
	{ 0x56ae6874, "ip_tunnel_dellink" },
	{ 0x5f754e5a, "memset" },
	{ 0x60313cf9, "skb_checksum" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xa765f5ba, "ip_tunnel_delete_nets" },
	{ 0x7639bdc3, "gre_add_protocol" },
	{ 0xb2641164, "ip_tunnel_newlink" },
	{ 0x7c32d0f0, "printk" },
	{ 0x78d51c29, "unregister_pernet_device" },
	{ 0x5ac3a5fd, "ip_tunnel_uninit" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x68183b3b, "nla_put" },
	{ 0xadc5cf8, "gre_del_protocol" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x6b4307eb, "iptunnel_xmit" },
	{ 0x8db1cb05, "ip_tunnel_init" },
	{ 0x36ea8d7f, "ip_tunnel_get_link_net" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x8d6d1ec7, "ip_tunnel_ioctl" },
	{ 0x12f5769e, "ip_tunnel_changelink" },
	{ 0x142b4c11, "rtnl_configure_link" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xbb5f97a4, "ipv4_redirect" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x335f6ace, "ether_setup" },
	{ 0xb5b3cbe3, "ip_tunnel_init_net" },
	{ 0x78f92566, "iptunnel_handle_offloads" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0xaa3f1f31, "rtnl_create_link" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x6b6aff04, "ip6_err_gen_icmpv6_unreach" },
	{ 0x9d669763, "memcpy" },
	{ 0xe2fd7cf2, "___pskb_trim" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0x22d9fc84, "dst_cache_set_ip4" },
	{ 0x1828d961, "ip_tunnel_encap_setup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa7bcfa33, "ip_tunnel_change_mtu" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0xf92ded78, "gre_parse_header" },
	{ 0xdce689dc, "ip_tunnel_rcv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre,ipv6";


MODULE_INFO(srcversion, "A98596724F4B3B422356C4C");
