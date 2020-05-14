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
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x76838652, "snd_soc_add_component_controls" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xa1633992, "_dev_err" },
	{ 0x4f7e9f73, "devm_kfree" },
	{ 0x889235a0, "snd_soc_get_enum_double" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x96cf9234, "snd_soc_component_write" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x2fce77bc, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x861dd7b9, "snd_soc_dai_set_fmt" },
	{ 0xe70037a0, "snd_soc_component_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x19851286, "snd_soc_dai_set_tdm_slot" },
	{ 0xcfeb6c54, "snd_soc_limit_volume" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xee3b7bd2, "snd_soc_register_card" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcpro");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcproC*");

MODULE_INFO(srcversion, "AE625D4452F4A6EB527045A");
