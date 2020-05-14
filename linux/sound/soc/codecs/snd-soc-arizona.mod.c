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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8f756422, "arizona_request_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8a704e75, "regulator_set_voltage" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x50e77fa8, "snd_soc_dapm_del_routes" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3ba1cdc8, "regmap_raw_write" },
	{ 0xea124bd1, "gcd" },
	{ 0x1027251, "__pm_runtime_suspend" },
	{ 0x7cb18d00, "snd_soc_dapm_get_volsw" },
	{ 0xbdf59154, "regmap_multi_reg_write" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x23d05def, "_dev_crit" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x91280506, "snd_soc_component_disable_pin" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2484ff6f, "snd_soc_dapm_new_controls" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x911ee79e, "of_prop_next_u32" },
	{ 0x4324aaa, "snd_soc_component_enable_pin" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0xca190ce0, "snd_soc_dapm_add_routes" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x9d7bfa3, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd263dd67, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x989e04c9, "arizona_free_irq" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0x889235a0, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x239e7675, "snd_soc_dapm_sync" },
	{ 0x96cf9234, "snd_soc_component_write" },
	{ 0x2fce77bc, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0x8925151d, "snd_soc_bytes_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xaaef47a5, "snd_soc_component_read32" },
	{ 0x90d50559, "regmap_get_val_bytes" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xd41658a1, "__init_rwsem" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "B916B24F75A5264736A0C77");
