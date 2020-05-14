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
	{ 0x1fde532e, "tcf_em_unregister" },
	{ 0x3c8f91d3, "tcf_em_register" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xbe08d5b5, "ip_set_nfnl_get_byindex" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xafd84233, "dev_get_by_index_rcu" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xb0d4b872, "ip_set_test" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0xb53aeb67, "ip_set_nfnl_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "6108B419687F8B8B6C03922");
