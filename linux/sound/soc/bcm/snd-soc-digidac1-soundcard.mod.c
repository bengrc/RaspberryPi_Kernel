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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x5d6f1c09, "devm_snd_soc_register_card" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa0feb17f, "snd_soc_dai_set_pll" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x76838652, "snd_soc_add_component_controls" },
	{ 0xa1633992, "_dev_err" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xcd4410f1, "snd_soc_get_pcm_runtime" },
	{ 0xdedea034, "snd_soc_dai_set_bclk_ratio" },
	{ 0x889235a0, "snd_soc_get_enum_double" },
	{ 0x6f722838, "snd_soc_dai_set_clkdiv" },
	{ 0xb95641b6, "snd_ctl_remove" },
	{ 0xfbe9f05b, "snd_soc_dai_set_sysclk" },
	{ 0x2fce77bc, "snd_soc_put_enum_double" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x72319994, "snd_soc_card_get_kcontrol" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Crra,digidac1-soundcard");
MODULE_ALIAS("of:N*T*Crra,digidac1-soundcardC*");

MODULE_INFO(srcversion, "383A3970BFB4DFA527F1615");
