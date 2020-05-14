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
	{ 0x8f756422, "arizona_request_irq" },
	{ 0xa6dfa48a, "wm_adsp2_event" },
	{ 0xcd9ba592, "arizona_lhpf4_mode" },
	{ 0xa42928c7, "arizona_set_fll" },
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0x8db61810, "arizona_free_spk_irqs" },
	{ 0x935eb3ca, "arizona_lhpf_coeff_put" },
	{ 0x516ec108, "arizona_init_vol_limit" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd0b36263, "snd_soc_dapm_get_enum_double" },
	{ 0xd8e87be3, "arizona_init_dai" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x9f8618b7, "arizona_in_ev" },
	{ 0x91280506, "snd_soc_component_disable_pin" },
	{ 0x541f87a3, "dapm_regulator_event" },
	{ 0x9fa38a35, "arizona_lhpf1_mode" },
	{ 0x729a5ef3, "arizona_mixer_values" },
	{ 0x2bbd2670, "wm_adsp_compr_set_params" },
	{ 0x336119fe, "regmap_write_async" },
	{ 0x1db0bb01, "arizona_dvfs_down" },
	{ 0x8f29fa59, "wm_adsp_compr_trigger" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeed5f598, "wm_adsp_fw_get" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x1410f7bc, "arizona_init_dvfs" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0x5f311937, "wm_adsp2_init" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xde358410, "wm_adsp2_component_remove" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0x83e67e6, "wm_adsp2_preloader_get" },
	{ 0x373d5311, "wm_adsp_compr_free" },
	{ 0xa90159b6, "arizona_dvfs_up" },
	{ 0x67548053, "wm_adsp2_preloader_put" },
	{ 0x171977d4, "snd_soc_put_volsw_range" },
	{ 0xf8617ed7, "wm_adsp2_component_probe" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x83aeb78c, "wm_adsp_compr_open" },
	{ 0xda3f3ecc, "wm_adsp_fw_enum" },
	{ 0xc9c29637, "arizona_mixer_tlv" },
	{ 0x4fde599f, "arizona_out_ev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x92c004d5, "arizona_adsp2_rate_controls" },
	{ 0xdd9a2aa9, "arizona_clk_ev" },
	{ 0x76838652, "snd_soc_add_component_controls" },
	{ 0x3490977c, "snd_soc_info_volsw_range" },
	{ 0xc0d6b2e2, "snd_soc_bytes_info" },
	{ 0x86d07cce, "arizona_init_spk" },
	{ 0x61c1cec, "arizona_hp_ev" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb04535c8, "snd_soc_get_volsw_range" },
	{ 0xe36beaf5, "wm_adsp_compr_copy" },
	{ 0xa1633992, "_dev_err" },
	{ 0x10a1b468, "arizona_simple_dai_ops" },
	{ 0x6626ff59, "wm_adsp_compr_get_caps" },
	{ 0x989e04c9, "arizona_free_irq" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0x1074c54c, "arizona_set_irq_wake" },
	{ 0xc0826abf, "snd_soc_rtdcom_lookup" },
	{ 0x83c9b1c, "arizona_lhpf3_mode" },
	{ 0x9c9a77f4, "arizona_out_vi_ramp" },
	{ 0x6cf5827, "arizona_isrc_fsl" },
	{ 0x16f44281, "snd_soc_component_init_regmap" },
	{ 0xe8282742, "arizona_in_vi_ramp" },
	{ 0x889235a0, "snd_soc_get_enum_double" },
	{ 0x5dbba744, "arizona_dai_ops" },
	{ 0x7f26f273, "arizona_mixer_texts" },
	{ 0x7147009a, "arizona_init_fll" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0x69f7328a, "arizona_of_get_audio_pdata" },
	{ 0xe7a9ab78, "arizona_set_fll_refclk" },
	{ 0xc6b0d408, "arizona_init_gpio" },
	{ 0x9eca0f58, "arizona_dvfs_sysclk_ev" },
	{ 0xfd4d1634, "arizona_out_vd_ramp" },
	{ 0x89ff4682, "arizona_in_vd_ramp" },
	{ 0x2fce77bc, "snd_soc_put_enum_double" },
	{ 0x49634e80, "arizona_eq_coeff_put" },
	{ 0x9b9772f6, "wm_adsp2_remove" },
	{ 0xe64ff2a8, "snd_soc_bytes_get" },
	{ 0x48442d03, "arizona_set_sysclk" },
	{ 0x540b8b27, "wm_adsp2_early_event" },
	{ 0x7bf5ddf, "arizona_ng_hold" },
	{ 0x92ffe232, "snd_soc_new_compress" },
	{ 0x8925151d, "snd_soc_bytes_put" },
	{ 0x6d4ee5c4, "wm_adsp_compr_handle_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xe1218e15, "snd_soc_bytes_info_ext" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x9d96a454, "arizona_init_spk_irqs" },
	{ 0x87f15354, "arizona_init_common" },
	{ 0x55c25ff7, "wm_adsp_compr_pointer" },
	{ 0x81bf122d, "wm_adsp_fw_put" },
	{ 0xa2ea9332, "snd_soc_dapm_put_enum_double" },
	{ 0xae4b90a8, "arizona_lhpf2_mode" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-wm-adsp,snd-soc-arizona,snd-soc-core";


MODULE_INFO(srcversion, "F94722CB9271D562A93570E");
