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
	{ 0x8eafff9a, "shash_register_instance" },
	{ 0xcef8fd2e, "shash_free_instance" },
	{ 0xaad9a877, "crypto_init_spawn" },
	{ 0xa34137e1, "crypto_alloc_instance2" },
	{ 0x59bf63a0, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x66bd198, "crypto_spawn_tfm" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xe4ce1d59, "crypto_ahash_setkey" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0xc4ed5445, "sg_next" },
	{ 0x5211589a, "crypto_ahash_finup" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb1ec8596, "crypto_grab_skcipher" },
	{ 0x8334c6bc, "crypto_init_ahash_spawn" },
	{ 0x9c385e63, "crypto_mod_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0x808c330b, "crypto_find_alg" },
	{ 0x12dabfe9, "crypto_ahash_type" },
	{ 0x4bad3be5, "aead_register_instance" },
	{ 0xb81960ca, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xef279ccc, "crypto_drop_spawn" },
	{ 0xbc793412, "crypto_grab_aead" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xfed6c63e, "crypto_spawn_tfm2" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0xaebd3763, "crypto_aead_setkey" },
	{ 0x392e88c2, "crypto_aead_setauthsize" },
	{ 0x7936b376, "scatterwalk_ffwd" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x5d5000cb, "mem_map" },
	{ 0xd8ff470f, "scatterwalk_map_and_copy" },
	{ 0x9d669763, "memcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1DCC60CFB39BF5BB2D293E2");
