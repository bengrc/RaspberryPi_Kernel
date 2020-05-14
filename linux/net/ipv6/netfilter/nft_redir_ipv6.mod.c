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
	{ 0x823fc30, "nft_redir_policy" },
	{ 0x3f822919, "nft_redir_validate" },
	{ 0x322cf7b4, "nft_redir_dump" },
	{ 0xa02ae362, "nft_redir_init" },
	{ 0x29e53e75, "nft_unregister_expr" },
	{ 0x2cfef088, "nft_register_expr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4bb7a537, "nf_nat_redirect_ipv6" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x41dd7d3b, "nf_ct_netns_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_redir,nf_tables,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "40C9667056226E1976F3A5E");
