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
	{ 0x5d6f1c09, "devm_snd_soc_register_card" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd0b36263, "snd_soc_dapm_get_enum_double" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa0feb17f, "snd_soc_dai_set_pll" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0x1e27b672, "snd_soc_component_set_pll" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcbefec57, "snd_ctl_boolean_mono_info" },
	{ 0xcd4410f1, "snd_soc_get_pcm_runtime" },
	{ 0xdedea034, "snd_soc_dai_set_bclk_ratio" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6f722838, "snd_soc_dai_set_clkdiv" },
	{ 0xfbe9f05b, "snd_soc_dai_set_sysclk" },
	{ 0xc47781e3, "snd_soc_component_set_sysclk" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xda94c15b, "snd_pcm_hw_constraint_minmax" },
	{ 0xe70037a0, "snd_soc_component_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x19851286, "snd_soc_dai_set_tdm_slot" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa2ea9332, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd,snd-pcm";

MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrus");
MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrusC*");

MODULE_INFO(srcversion, "298BDCE3FADABD4076EB654");
