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
	{ 0x29e53e75, "nft_unregister_expr" },
	{ 0x2cfef088, "nft_register_expr" },
	{ 0x1af0a71d, "nf_tproxy_handle_time_wait6" },
	{ 0x2dbe068c, "sock_gen_put" },
	{ 0xaebef328, "nf_tproxy_handle_time_wait4" },
	{ 0x386551e7, "nf_tproxy_laddr4" },
	{ 0xdd303b0a, "nf_tproxy_get_sock_v4" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0xa4137a43, "sock_edemux" },
	{ 0x8029a1c6, "nf_tproxy_laddr6" },
	{ 0xc7c24b56, "nf_tproxy_get_sock_v6" },
	{ 0x403bb37d, "nf_defrag_ipv4_enable" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x64c2510d, "nf_defrag_ipv6_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x482b1022, "nft_dump_register" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_tproxy_ipv6,nf_tproxy_ipv4,nf_defrag_ipv4,nf_defrag_ipv6";


MODULE_INFO(srcversion, "2FBA6E7BA10BC401E594BCE");
