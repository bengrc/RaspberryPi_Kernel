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
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd0b36263, "snd_soc_dapm_get_enum_double" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0x3f3ba620, "regulator_bulk_enable" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2604e0eb, "regulator_bulk_get" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xeb2a6a67, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x5fb1836d, "regulator_get_optional" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0x4aa24183, "regulator_get_voltage" },
	{ 0x96cf9234, "snd_soc_component_write" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0x5d913362, "regulator_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x45315288, "regulator_bulk_free" },
	{ 0xaaef47a5, "snd_soc_component_read32" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xc6a8417b, "regcache_sync" },
	{ 0x44bc7da9, "regcache_cache_only" },
	{ 0xa2ea9332, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,sgtl5000C*");

MODULE_INFO(srcversion, "D83E180F0ED74DB7A71724F");
