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
	{ 0xc4ed5445, "sg_next" },
	{ 0x5211589a, "crypto_ahash_finup" },
	{ 0xe4ce1d59, "crypto_ahash_setkey" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x7a4497db, "kzfree" },
	{ 0x58a253c2, "crypto_req_done" },
	{ 0x79ff628e, "sg_init_one" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x84b183ae, "strncmp" },
	{ 0xb1ec8596, "crypto_grab_skcipher" },
	{ 0x9c385e63, "crypto_mod_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8334c6bc, "crypto_init_ahash_spawn" },
	{ 0x808c330b, "crypto_find_alg" },
	{ 0x12dabfe9, "crypto_ahash_type" },
	{ 0x4bad3be5, "aead_register_instance" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbc793412, "crypto_grab_aead" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0x7936b376, "scatterwalk_ffwd" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x5d5000cb, "mem_map" },
	{ 0xd8ff470f, "scatterwalk_map_and_copy" },
	{ 0x37a0cba, "kfree" },
	{ 0xef279ccc, "crypto_drop_spawn" },
	{ 0xc4166a52, "crypto_get_default_null_skcipher" },
	{ 0xfed6c63e, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0xaebd3763, "crypto_aead_setkey" },
	{ 0x392e88c2, "crypto_aead_setauthsize" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8D20F670530C2B5D35D6346");
