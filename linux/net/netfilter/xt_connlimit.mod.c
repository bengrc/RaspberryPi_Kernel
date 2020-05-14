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
	{ 0x240b2221, "xt_unregister_match" },
	{ 0xa5db76c1, "xt_register_match" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xa48ecf8b, "nf_ct_get_tuplepr" },
	{ 0x2e41a00, "nf_conncount_count" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x597a52b9, "nf_conncount_init" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x23a6337f, "nf_conncount_destroy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack,nf_conncount";


MODULE_INFO(srcversion, "F0CC22E5A20DADE14DCA5A7");
