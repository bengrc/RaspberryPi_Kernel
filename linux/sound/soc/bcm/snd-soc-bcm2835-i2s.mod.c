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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xeb387f25, "devm_snd_dmaengine_pcm_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa48dda3a, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x379d4f7f, "__devm_regmap_init_mmio_clk" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xc64803ce, "platform_get_resource" },
	{ 0xa1633992, "_dev_err" },
	{ 0x8d419e57, "of_get_address" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf138a9be, "regmap_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2s");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2sC*");

MODULE_INFO(srcversion, "994137C751057114DDB74A6");
