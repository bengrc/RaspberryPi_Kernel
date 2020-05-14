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
	{ 0x5d6f1c09, "devm_snd_soc_register_card" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x9d7bfa3, "snd_pcm_hw_constraint_list" },
	{ 0xa1633992, "_dev_err" },
	{ 0xdedea034, "snd_soc_dai_set_bclk_ratio" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x8722ee95, "gpiod_set_value" },
	{ 0xc153dc88, "gpiod_put" },
	{ 0xec2f513d, "gpiod_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplushd");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplushdC*");

MODULE_INFO(srcversion, "F903EA2022887D0A92F2BF4");
