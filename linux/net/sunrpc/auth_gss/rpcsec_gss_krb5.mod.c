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
	{ 0x474d5fd2, "crypto_alloc_skcipher" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x831074b1, "crypto_alloc_shash" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe1ca11e7, "write_bytes_to_xdr_buf" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x8ddeaec0, "gss_mech_register" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0xd9aa5f6b, "crypto_ahash_final" },
	{ 0x6125801a, "crypto_ahash_digest" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0x51faef1f, "xdr_buf_subsegment" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xfd56100d, "crypto_shash_digest" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x1e7f374e, "crypto_shash_setkey" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0x44132419, "gss_mech_unregister" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x79ff628e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe4ce1d59, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0xb8cbe4a5, "read_bytes_from_xdr_buf" },
	{ 0xd2f365ae, "xdr_process_buf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0xe634bcfa, "xdr_buf_trim" },
	{ 0xd14de94e, "crypto_alloc_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "51C4438B6122AE82834EA79");
