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
	{ 0x593c25e6, "xfrm4_prepare_output" },
	{ 0xacd2cab6, "xfrm_prepare_input" },
	{ 0x49f8784e, "xfrm_unregister_mode" },
	{ 0x84bfa434, "xfrm_register_mode" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x99bb8806, "memmove" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5f754e5a, "memset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EE7EFD6B6CF02EF4ACD05F9");
