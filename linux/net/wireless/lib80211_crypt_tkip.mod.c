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
	{ 0x7c8461ff, "lib80211_unregister_crypto_ops" },
	{ 0x1025715b, "lib80211_register_crypto_ops" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x831074b1, "crypto_alloc_shash" },
	{ 0x474d5fd2, "crypto_alloc_skcipher" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x99bb8806, "memmove" },
	{ 0x122170da, "crc32_le" },
	{ 0x79ff628e, "sg_init_one" },
	{ 0x9214b99, "skb_put" },
	{ 0x2321993a, "wireless_send_event" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x71c90087, "memcmp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8c517411, "crypto_shash_final" },
	{ 0x148febdb, "crypto_shash_update" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0x1e7f374e, "crypto_shash_setkey" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lib80211";


MODULE_INFO(srcversion, "2DAF09F06EAA12126A4D3F4");
