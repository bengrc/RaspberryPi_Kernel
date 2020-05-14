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
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0x815d4afc, "devm_gpiod_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa0feb17f, "snd_soc_dai_set_pll" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb1c0ec82, "of_match_node" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0xa1633992, "_dev_err" },
	{ 0xdedea034, "snd_soc_dai_set_bclk_ratio" },
	{ 0x6f722838, "snd_soc_dai_set_clkdiv" },
	{ 0xfbe9f05b, "snd_soc_dai_set_sysclk" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x8774fc51, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cjustboom,justboom-digi");
MODULE_ALIAS("of:N*T*Cjustboom,justboom-digiC*");
MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digi");
MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digiC*");
MODULE_ALIAS("of:N*T*Callo,allo-digione");
MODULE_ALIAS("of:N*T*Callo,allo-digioneC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digi");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digiC*");

MODULE_INFO(srcversion, "11D2E8FCDCC3EB59997FFD3");
