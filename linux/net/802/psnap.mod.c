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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x2858833f, "skb_pull_rcsum" },
	{ 0x2c6f0be4, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd46a21c, "llc_sap_close" },
	{ 0xe31ee468, "llc_build_and_send_ui_pkt" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=llc";


MODULE_INFO(srcversion, "4726E2E25AEF8F9AD7B3BA8");
