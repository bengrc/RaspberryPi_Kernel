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
	{ 0xf13ed84b, "crypto_unregister_skciphers" },
	{ 0xefe73979, "simd_skcipher_free" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x88638552, "simd_skcipher_create_compat" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0xb9018580, "skcipher_walk_done" },
	{ 0x7e995a6d, "crypto_aes_expand_key" },
	{ 0xc8bedd88, "crypto_register_skciphers" },
	{ 0xf09fd06d, "skcipher_walk_virt" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0x9d669763, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6a6194f2, "crypto_alloc_base" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crypto_simd";


MODULE_INFO(srcversion, "7C195F718E7C0AC8BE2B4DF");
