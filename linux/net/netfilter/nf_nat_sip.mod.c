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
	{ 0x82b16a6, "nf_ct_helper_expectfn_register" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xb7da1186, "nf_ct_helper_expectfn_unregister" },
	{ 0xae45103e, "nf_nat_sip_hooks" },
	{ 0x265360f9, "ct_sip_parse_numerical_param" },
	{ 0xaa0dedc9, "ct_sip_parse_address_param" },
	{ 0x18ffdf3c, "skb_make_writable" },
	{ 0xecd763a7, "ct_sip_parse_request" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x3a58df19, "ct_sip_parse_header_uri" },
	{ 0xd1256c6c, "nf_ct_seqadj_set" },
	{ 0xb512e819, "nf_ct_helper_log" },
	{ 0xd8451a83, "nf_ct_unexpect_related" },
	{ 0xe21c8f4f, "nf_ct_expect_related_report" },
	{ 0x91715312, "sprintf" },
	{ 0xf12c2dc5, "ct_sip_get_header" },
	{ 0x53a2a648, "ct_sip_get_sdp_header" },
	{ 0x50558fcc, "__nf_nat_mangle_tcp_packet" },
	{ 0xfffd99a6, "nf_nat_mangle_udp_packet" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0xb58a27e9, "nf_nat_setup_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "5570C246B00253B68DD5B23");
