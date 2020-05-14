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
	{ 0x29776c2c, "xt_unregister_targets" },
	{ 0xcd5adf65, "xt_unregister_target" },
	{ 0x3a109778, "xt_register_targets" },
	{ 0xff2238b4, "xt_register_target" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd195b302, "nf_ct_helper_ext_add" },
	{ 0x9f9559ba, "nf_conntrack_helper_try_module_get" },
	{ 0x58b1c7c6, "nf_conntrack_helper_put" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xc4f1b8b, "nf_ct_ext_add" },
	{ 0x41dd7d3b, "nf_ct_netns_put" },
	{ 0x15967e2c, "nf_ct_tmpl_free" },
	{ 0xe743d4b1, "nf_ct_tmpl_alloc" },
	{ 0x25afd127, "nf_ct_netns_get" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";


MODULE_INFO(srcversion, "55C1F7275F26CCB039865DD");
