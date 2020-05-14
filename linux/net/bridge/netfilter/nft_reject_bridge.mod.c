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
	{ 0x7ea0ac52, "nft_reject_policy" },
	{ 0x29e53e75, "nft_unregister_expr" },
	{ 0x2cfef088, "nft_register_expr" },
	{ 0xc32be98, "nf_reject_ip6_tcphdr_put" },
	{ 0x56c14019, "nf_reject_ip6_tcphdr_get" },
	{ 0x6a68774b, "nf_reject_ip_tcphdr_put" },
	{ 0xff03a5d9, "nf_reject_ip_tcphdr_get" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x4ee83ba9, "nf_reject_ip6hdr_put" },
	{ 0x772d3dd3, "nf_ip6_checksum" },
	{ 0x11b34904, "ipv6_skip_exthdr" },
	{ 0x6f2fda53, "pskb_trim_rcsum_slow" },
	{ 0xe2ed0b2a, "nf_ip_checksum" },
	{ 0xca86836c, "br_forward" },
	{ 0x2124474, "ip_send_check" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9d669763, "memcpy" },
	{ 0x9214b99, "skb_put" },
	{ 0x7ade3d77, "nf_reject_iphdr_put" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2f89e6c2, "nft_chain_validate_hooks" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables,nf_reject_ipv6,nf_reject_ipv4,bridge";


MODULE_INFO(srcversion, "798F876596E20ECAA902AD8");
