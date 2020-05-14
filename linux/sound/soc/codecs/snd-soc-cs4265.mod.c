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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x93a8a282, "snd_soc_get_volsw_sx" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd0b36263, "snd_soc_dapm_get_enum_double" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0x7cb18d00, "snd_soc_dapm_get_volsw" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0xa8f862a7, "snd_soc_info_volsw_sx" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0xc0d6b2e2, "snd_soc_bytes_info" },
	{ 0xd263dd67, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x889235a0, "snd_soc_get_enum_double" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x2fce77bc, "snd_soc_put_enum_double" },
	{ 0xe64ff2a8, "snd_soc_bytes_get" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x8925151d, "snd_soc_bytes_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xce2aa50c, "snd_soc_put_volsw_sx" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xa2ea9332, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Ccirrus,cs4265");
MODULE_ALIAS("of:N*T*Ccirrus,cs4265C*");
MODULE_ALIAS("i2c:cs4265");

MODULE_INFO(srcversion, "8136104BD8545DCED247542");
