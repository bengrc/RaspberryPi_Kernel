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
	{ 0xbfee3ad5, "loop_unregister_transfer" },
	{ 0x46bd3cc6, "loop_register_transfer" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x474d5fd2, "crypto_alloc_skcipher" },
	{ 0x9d669763, "memcpy" },
	{ 0x99bb8806, "memmove" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x328a05f1, "strncpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1A48C44B752CE54D1A99334");
