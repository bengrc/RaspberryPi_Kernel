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
	{ 0xc52c16eb, "asoc_simple_card_canonicalize_dailink" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xaeb6e72c, "asoc_simple_card_canonicalize_cpu" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0x217acc34, "asoc_simple_card_clean_reference" },
	{ 0xc9add4d8, "snd_soc_pm_ops" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x76a0724, "asoc_simple_card_clk_enable" },
	{ 0x40383fb8, "asoc_simple_card_init_jack" },
	{ 0x627dc2c, "of_device_is_available" },
	{ 0xe8b99712, "asoc_simple_card_clk_disable" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xcd536be4, "asoc_simple_card_of_parse_widgets" },
	{ 0x9aeb12cd, "asoc_simple_card_set_dailink_name" },
	{ 0x8c241992, "asoc_simple_card_of_parse_routing" },
	{ 0xa1633992, "_dev_err" },
	{ 0xc269e05, "of_get_child_by_name" },
	{ 0x5ea00893, "asoc_simple_card_init_dai" },
	{ 0x23d56b8a, "asoc_simple_card_parse_clk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d442dbc, "asoc_simple_card_parse_daifmt" },
	{ 0x1b2f588a, "of_get_next_child" },
	{ 0xfbe9f05b, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x5e82b61, "asoc_simple_card_parse_card_name" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xb4371bf1, "snd_soc_of_parse_tdm_slot" },
	{ 0x1e00894e, "asoc_simple_card_parse_dai" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-simple-card-utils";

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");

MODULE_INFO(srcversion, "92FCB1E8D35ED20EA0BC2AD");
