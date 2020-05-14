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
	{ 0xcffae43b, "crypto_unregister_template" },
	{ 0xdbe6cf20, "crypto_register_template" },
	{ 0x4bad3be5, "aead_register_instance" },
	{ 0x2e7b3573, "aead_exit_geniv" },
	{ 0x355b6401, "aead_init_geniv" },
	{ 0xa7cb3889, "aead_geniv_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd8ff470f, "scatterwalk_map_and_copy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xcbc25602, "aead_geniv_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CDA459BDFC9FE9BF0CA09A2");
