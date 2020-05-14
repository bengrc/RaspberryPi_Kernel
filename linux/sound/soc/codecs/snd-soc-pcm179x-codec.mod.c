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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0x171977d4, "snd_soc_put_volsw_range" },
	{ 0x3490977c, "snd_soc_info_volsw_range" },
	{ 0xb04535c8, "snd_soc_get_volsw_range" },
	{ 0xa1633992, "_dev_err" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0xcafbd334, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "1653DA0C69335E3C3ED936C");
