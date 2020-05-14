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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x186a41de, "ath9k_hw_gettsf64" },
	{ 0x5f754e5a, "memset" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x67e0135f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x99bb8806, "memmove" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x19a76d53, "ath_hw_keyreset" },
	{ 0x40d06e59, "ath9k_hw_set_txpowerlimit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211,ath9k_hw,ath";


MODULE_INFO(srcversion, "E62CD4F3ED9CC1746780280");
