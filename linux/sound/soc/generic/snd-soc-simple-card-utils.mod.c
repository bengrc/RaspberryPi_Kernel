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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x862afa29, "snd_soc_of_parse_card_name" },
	{ 0xf82bb555, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x202fc86d, "of_graph_get_port_parent" },
	{ 0x85f8518a, "snd_soc_of_get_dai_name" },
	{ 0x6c9cf468, "of_graph_get_next_endpoint" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2a568fd9, "devm_get_clk_from_child" },
	{ 0x8629fafa, "of_graph_get_endpoint_count" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0xfbe9f05b, "snd_soc_dai_set_sysclk" },
	{ 0x54e06c6a, "devm_kvasprintf" },
	{ 0xa565c6b6, "snd_soc_of_parse_audio_routing" },
	{ 0xdaec4415, "snd_soc_card_jack_new" },
	{ 0x177eb374, "snd_soc_get_dai_id" },
	{ 0xbff3cd19, "snd_soc_get_dai_name" },
	{ 0xc238b862, "snd_soc_jack_add_gpios" },
	{ 0xfc11e517, "snd_soc_of_parse_daifmt" },
	{ 0xe99f7653, "of_parse_phandle_with_args" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x19851286, "snd_soc_dai_set_tdm_slot" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x9cf2a557, "of_node_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "3F5D5474957FDF2B3222DCE");
