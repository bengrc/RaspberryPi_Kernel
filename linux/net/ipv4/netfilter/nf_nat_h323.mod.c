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
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xb7da1186, "nf_ct_helper_expectfn_unregister" },
	{ 0x82b16a6, "nf_ct_helper_expectfn_register" },
	{ 0xfa8308c9, "nat_q931_hook" },
	{ 0xd79c6807, "nat_callforwarding_hook" },
	{ 0xc8ae0dc8, "nat_h245_hook" },
	{ 0xfcd5aba5, "nat_t120_hook" },
	{ 0xdde1ee7a, "nat_rtp_rtcp_hook" },
	{ 0xa4b113b9, "set_ras_addr_hook" },
	{ 0x4cc0ff85, "set_sig_addr_hook" },
	{ 0x44a95bd9, "set_h225_addr_hook" },
	{ 0xc73935a2, "set_h245_addr_hook" },
	{ 0xd8451a83, "nf_ct_unexpect_related" },
	{ 0xfa9840c9, "get_h225_addr" },
	{ 0xe21c8f4f, "nf_ct_expect_related_report" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x50558fcc, "__nf_nat_mangle_tcp_packet" },
	{ 0xfffd99a6, "nf_nat_mangle_udp_packet" },
	{ 0xb14f6407, "nf_nat_follow_master" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb58a27e9, "nf_nat_setup_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "0BB3919E42B7A81C30B5040");
