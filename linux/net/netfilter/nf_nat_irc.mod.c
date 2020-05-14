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
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x6c3bdd63, "nf_nat_irc_hook" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd8451a83, "nf_ct_unexpect_related" },
	{ 0xb512e819, "nf_ct_helper_log" },
	{ 0x50558fcc, "__nf_nat_mangle_tcp_packet" },
	{ 0x97255bdf, "strlen" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe21c8f4f, "nf_ct_expect_related_report" },
	{ 0xb14f6407, "nf_nat_follow_master" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_irc,nf_conntrack,nf_nat";


MODULE_INFO(srcversion, "FA5629F9D37B8D8204138B1");
