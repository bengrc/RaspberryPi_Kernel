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
	{ 0x9807f3d1, "nft_unregister_obj" },
	{ 0x29e53e75, "nft_unregister_expr" },
	{ 0xbe3e96e6, "nft_register_obj" },
	{ 0x2cfef088, "nft_register_expr" },
	{ 0xb716c645, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x482b1022, "nft_dump_register" },
	{ 0x9d669763, "memcpy" },
	{ 0x7c095c8e, "metadata_dst_alloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xcd49cfa, "metadata_dst_free" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9a81089a, "dst_release" },
	{ 0x16305289, "warn_slowpath_null" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "8EC2E8AC768BB188095C219");
