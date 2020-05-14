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
	{ 0xd51514c, "ip_local_out" },
	{ 0x9a81089a, "dst_release" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xc3ef7099, "__pskb_copy_fclone" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F6232651898B6AEC5AAF525");
