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
	{ 0x978b0c30, "regulator_disable" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x87388ff7, "regcache_cache_bypass" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2484ff6f, "snd_soc_dapm_new_controls" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc56b13e9, "snd_pcm_hw_constraint_mask64" },
	{ 0x9d7bfa3, "snd_pcm_hw_constraint_list" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0x91866963, "devm_regulator_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0x5b151d90, "devm_regulator_get_optional" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x375b268e, "regcache_mark_dirty" },
	{ 0xda94c15b, "snd_pcm_hw_constraint_minmax" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xc6a8417b, "regcache_sync" },
	{ 0x44bc7da9, "regcache_cache_only" },
	{ 0xf5e18bfd, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "8DFC2D0BAE8720EE83062C7");
