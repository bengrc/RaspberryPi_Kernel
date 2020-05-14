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
	{ 0xd2a80e17, "xfrm6_rcv" },
	{ 0xa477febc, "xfrm6_find_1stfragopt" },
	{ 0x49288cbd, "xfrm6_protocol_deregister" },
	{ 0x875dfa0, "xfrm_unregister_type" },
	{ 0xc17de577, "xfrm6_protocol_register" },
	{ 0x49a124fd, "xfrm_register_type" },
	{ 0x7c32d0f0, "printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xe4ce1d59, "crypto_ahash_setkey" },
	{ 0xd14de94e, "crypto_alloc_ahash" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0x98fe5822, "xfrm_input_resume" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x6125801a, "crypto_ahash_digest" },
	{ 0xc505af38, "skb_to_sgvec_nomark" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x4a7d4102, "skb_cow_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x99bb8806, "memmove" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xbe77afe8, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x22bf920c, "ip6_redirect" },
	{ 0x42a6dd28, "__xfrm_state_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc6d4866b, "ip6_update_pmtu" },
	{ 0x69439a68, "make_kuid" },
	{ 0x72aa8854, "xfrm_state_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "C8EA3DA49797EE1D4AA7349");
