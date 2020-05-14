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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x7936b376, "scatterwalk_ffwd" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8334c6bc, "crypto_init_ahash_spawn" },
	{ 0x9c385e63, "crypto_mod_put" },
	{ 0x466a873c, "ahash_attr_alg" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xb1ec8596, "crypto_grab_skcipher" },
	{ 0xcffae43b, "crypto_unregister_template" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc4166a52, "crypto_get_default_null_skcipher" },
	{ 0xd8ff470f, "scatterwalk_map_and_copy" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0x6125801a, "crypto_ahash_digest" },
	{ 0xdbe6cf20, "crypto_register_template" },
	{ 0xef279ccc, "crypto_drop_spawn" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xfed6c63e, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0xe4ce1d59, "crypto_ahash_setkey" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4bad3be5, "aead_register_instance" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9A370EE5E8D08A671EFC597");
