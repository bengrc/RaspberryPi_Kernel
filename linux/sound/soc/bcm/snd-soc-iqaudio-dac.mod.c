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
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0xfc8a6297, "snd_soc_unregister_card" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcd4410f1, "snd_soc_get_pcm_runtime" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0xcfeb6c54, "snd_soc_limit_volume" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xee3b7bd2, "snd_soc_register_card" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dac");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dacC*");

MODULE_INFO(srcversion, "9C73F76AB1CF8E6BF51BC4D");
