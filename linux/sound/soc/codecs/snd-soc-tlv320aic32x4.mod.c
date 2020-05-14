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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x5e223257, "clk_hw_register_clkdev" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd0b36263, "snd_soc_dapm_get_enum_double" },
	{ 0x7cb18d00, "snd_soc_dapm_get_volsw" },
	{ 0x9d173ed2, "clk_bulk_prepare" },
	{ 0x978b0c30, "regulator_disable" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5656c613, "of_clk_get_parent_name" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x76f88834, "devm_clk_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x76838652, "snd_soc_add_component_controls" },
	{ 0x90c930b1, "dev_get_regmap" },
	{ 0xd263dd67, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcbefec57, "snd_ctl_boolean_mono_info" },
	{ 0x8090c15c, "devm_gpio_request_one" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0x2614671, "clk_bulk_enable" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x889235a0, "snd_soc_get_enum_double" },
	{ 0x91866963, "devm_regulator_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x50ef6baa, "devm_clk_bulk_get" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0x96cf9234, "snd_soc_component_write" },
	{ 0x5b151d90, "devm_regulator_get_optional" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x2fce77bc, "snd_soc_put_enum_double" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0xc67f27a7, "gpiod_set_raw_value" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x29eea1d3, "of_property_match_string" },
	{ 0xaaef47a5, "snd_soc_component_read32" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xf5e18bfd, "regulator_enable" },
	{ 0xa2ea9332, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";


MODULE_INFO(srcversion, "B50FBCFAE17E7071B44B1C9");
