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
	{ 0x59bf63a0, "crypto_attr_alg2" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xc4d6db13, "ahash_register_instance" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa675987b, "shash_attr_alg" },
	{ 0x9c385e63, "crypto_mod_put" },
	{ 0x73dbd144, "crypto_ablkcipher_type" },
	{ 0xf857a05d, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xadc01544, "shash_ahash_digest" },
	{ 0xb1ec8596, "crypto_grab_skcipher" },
	{ 0xcffae43b, "crypto_unregister_template" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xaad9a877, "crypto_init_spawn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x8c517411, "crypto_shash_final" },
	{ 0x66bd198, "crypto_spawn_tfm" },
	{ 0x8691fc1, "shash_ahash_finup" },
	{ 0xc9528b7a, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbc793412, "crypto_grab_aead" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdbe6cf20, "crypto_register_template" },
	{ 0xb6124b53, "crypto_register_instance" },
	{ 0x1e7f374e, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0xef279ccc, "crypto_drop_spawn" },
	{ 0xaebd3763, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xc568d58f, "crypto_enqueue_request" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0x2ce98559, "kcrypto_wq" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x392e88c2, "crypto_aead_setauthsize" },
	{ 0xc00886e1, "crypto_alloc_aead" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xfed6c63e, "crypto_spawn_tfm2" },
	{ 0x588ba8a1, "crypto_init_shash_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x478cab5c, "shash_ahash_update" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xc74cf532, "shash_no_setkey" },
	{ 0x6a6194f2, "crypto_alloc_base" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x4bad3be5, "aead_register_instance" },
	{ 0xd14de94e, "crypto_alloc_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7ACCB55CC985ADFBC3105E4");
