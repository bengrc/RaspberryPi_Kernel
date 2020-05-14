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
	{ 0x56ae6874, "ip_tunnel_dellink" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x7c2a22e5, "ip_tunnel_get_iflink" },
	{ 0x5be73168, "ip_tunnel_get_stats64" },
	{ 0xa7bcfa33, "ip_tunnel_change_mtu" },
	{ 0x5ac3a5fd, "ip_tunnel_uninit" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x78d51c29, "unregister_pernet_device" },
	{ 0xbf6895ba, "xfrm4_tunnel_deregister" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0x575a7d5, "xfrm4_tunnel_register" },
	{ 0xd478eb29, "register_pernet_device" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb5b3cbe3, "ip_tunnel_init_net" },
	{ 0xa765f5ba, "ip_tunnel_delete_nets" },
	{ 0x4ce7f44b, "__xfrm_policy_check" },
	{ 0xdce689dc, "ip_tunnel_rcv" },
	{ 0x7c095c8e, "metadata_dst_alloc" },
	{ 0x6743b30, "__iptunnel_pull_header" },
	{ 0xbb5f97a4, "ipv4_redirect" },
	{ 0xbb18f5f1, "ipv4_update_pmtu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd9d3823b, "ip_tunnel_lookup" },
	{ 0x8db1cb05, "ip_tunnel_init" },
	{ 0xc1634dcd, "ip_tunnel_xmit" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xddbdf298, "ip_md_tunnel_xmit" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x78f92566, "iptunnel_handle_offloads" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x8d6d1ec7, "ip_tunnel_ioctl" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x82e20976, "ip_tunnel_setup" },
	{ 0xb2641164, "ip_tunnel_newlink" },
	{ 0x12f5769e, "ip_tunnel_changelink" },
	{ 0x1828d961, "ip_tunnel_encap_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "B2CCDB04988D130A6570F5B");
