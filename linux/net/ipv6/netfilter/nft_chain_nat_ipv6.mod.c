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
	{ 0x52b4432d, "nft_unregister_chain_type" },
	{ 0x4679fe50, "nft_register_chain_type" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x31a8ce5a, "nft_do_chain" },
	{ 0xcdfd9f76, "ipv6_find_hdr" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9a3196e5, "nf_nat_l3proto_ipv6_register_fn" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdd13892d, "nf_nat_l3proto_ipv6_unregister_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_nat_ipv6";


MODULE_INFO(srcversion, "C5E8F566627213A1BC028BD");
