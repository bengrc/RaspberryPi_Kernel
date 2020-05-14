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
	{ 0x80f1a4c3, "nf_flow_table_free" },
	{ 0x67ed438, "nf_flow_table_init" },
	{ 0x89f3dcae, "nft_unregister_flowtable_type" },
	{ 0x2af7874f, "nft_register_flowtable_type" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe0adb4ee, "nf_flow_offload_ip_hook" },
	{ 0x68763b41, "nf_flow_offload_ipv6_hook" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_flow_table,nf_tables";


MODULE_INFO(srcversion, "591F685E1978F346D5A7356");
