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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x317ed3fc, "__nf_ct_refresh_acct" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1fff35c6, "nf_ct_expect_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x4404cc64, "textsearch_prepare" },
	{ 0x9249e5b9, "nf_conntrack_helpers_register" },
	{ 0x300f1ba4, "skb_find_text" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1147424b, "nf_ct_expect_put" },
	{ 0x2ec309de, "nf_ct_expect_alloc" },
	{ 0xe21c8f4f, "nf_ct_expect_related_report" },
	{ 0xe2a770c7, "nf_conntrack_helpers_unregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb512e819, "nf_ct_helper_log" },
	{ 0xba2c23ed, "textsearch_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x41d8a0c5, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "A6CE521A142D56869BE235F");
