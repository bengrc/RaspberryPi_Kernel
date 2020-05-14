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
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x874fd33a, "nf_nat_used_tuple" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x50d27dd7, "nf_nat_l4proto_register" },
	{ 0x84d2e8a7, "nf_nat_l4proto_nlattr_to_range" },
	{ 0xd734a92f, "nf_nat_l4proto_unregister" },
	{ 0x18ffdf3c, "skb_make_writable" },
	{ 0x1a1c4632, "nf_nat_l4proto_in_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat";


MODULE_INFO(srcversion, "5CBB72D08C6E5DCA061E981");
