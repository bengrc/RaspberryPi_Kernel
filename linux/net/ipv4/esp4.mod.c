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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0xf96b9814, "skb_to_sgvec" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x875dfa0, "xfrm_unregister_type" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xbb18f5f1, "ipv4_update_pmtu" },
	{ 0x4caa30d1, "xfrm4_protocol_deregister" },
	{ 0xc4ed5445, "sg_next" },
	{ 0x3c75619f, "pskb_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x37fe87d3, "skb_page_frag_refill" },
	{ 0x4a7d4102, "skb_cow_data" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x98fe5822, "xfrm_input_resume" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0x5f754e5a, "memset" },
	{ 0x60313cf9, "skb_checksum" },
	{ 0x7c32d0f0, "printk" },
	{ 0x46dbede0, "xfrm_input" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xaebd3763, "crypto_aead_setkey" },
	{ 0xd816047d, "__secpath_destroy" },
	{ 0x49a124fd, "xfrm_register_type" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xbb5f97a4, "ipv4_redirect" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0xbe77afe8, "xfrm_output_resume" },
	{ 0x2858833f, "skb_pull_rcsum" },
	{ 0x42a6dd28, "__xfrm_state_destroy" },
	{ 0x4cb4ab20, "km_new_mapping" },
	{ 0x972e3a93, "xfrm4_rcv" },
	{ 0xafffe4b1, "xfrm4_protocol_register" },
	{ 0x392e88c2, "crypto_aead_setauthsize" },
	{ 0xc00886e1, "crypto_alloc_aead" },
	{ 0x72aa8854, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe2fd7cf2, "___pskb_trim" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0xaf03a486, "__put_page" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "776F017A0DB2D1570B4F326");
