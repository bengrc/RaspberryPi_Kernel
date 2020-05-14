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
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0x570ed8c5, "snd_soc_dapm_info_pin_switch" },
	{ 0xa05870d0, "snd_soc_dapm_put_pin_switch" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa0feb17f, "snd_soc_dai_set_pll" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0xfc8a6297, "snd_soc_unregister_card" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcd4410f1, "snd_soc_get_pcm_runtime" },
	{ 0xdedea034, "snd_soc_dai_set_bclk_ratio" },
	{ 0xfecea416, "snd_soc_dapm_get_pin_switch" },
	{ 0x239e7675, "snd_soc_dapm_sync" },
	{ 0xfbe9f05b, "snd_soc_dai_set_sysclk" },
	{ 0x7aecf048, "snd_soc_dapm_disable_pin" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xee3b7bd2, "snd_soc_register_card" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-codec");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-codecC*");

MODULE_INFO(srcversion, "717893961AC2D4D9A522412");
