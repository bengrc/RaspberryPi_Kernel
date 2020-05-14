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
	{ 0x9807f3d1, "nft_unregister_obj" },
	{ 0x2cfef088, "nft_register_expr" },
	{ 0xbe3e96e6, "nft_register_obj" },
	{ 0x68183b3b, "nla_put" },
	{ 0x25afd127, "nf_ct_netns_get" },
	{ 0xbe03a217, "nf_conncount_list_init" },
	{ 0x41dd7d3b, "nf_ct_netns_put" },
	{ 0x268a4802, "nf_conncount_cache_free" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x78fb5816, "nf_conncount_gc_list" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xa48ecf8b, "nf_ct_get_tuplepr" },
	{ 0x8e08986f, "nf_conncount_add" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_conntrack,nf_conncount";


MODULE_INFO(srcversion, "5D9B81F50AE07EBD377317D");
