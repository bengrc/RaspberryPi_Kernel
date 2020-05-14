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
	{ 0x2821f9cc, "ppp_unregister_compressor" },
	{ 0xeea18690, "ppp_register_compressor" },
	{ 0x5f754e5a, "memset" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x831074b1, "crypto_alloc_shash" },
	{ 0x474d5fd2, "crypto_alloc_skcipher" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x8c517411, "crypto_shash_final" },
	{ 0x148febdb, "crypto_shash_update" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x7a4497db, "kzfree" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";


MODULE_INFO(srcversion, "DABF7D7EE9FDD596533B063");
