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
	{ 0xfce2b040, "__skb_get_hash_symmetric" },
	{ 0x9d669763, "memcpy" },
	{ 0x40d9b4d9, "nft_set_lookup_global" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb716c645, "nft_validate_register_store" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0xde57b5f5, "nft_parse_u32_check" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x97255bdf, "strlen" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x482b1022, "nft_dump_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "E5D29BDCBD7E783A254C493");
