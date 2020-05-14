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
	{ 0x815588a6, "clk_enable" },
	{ 0xf686693, "__devm_regmap_init_spi" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd0b36263, "snd_soc_dapm_get_enum_double" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0x7cb18d00, "snd_soc_dapm_get_volsw" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0xe2ad7c89, "devm_regulator_bulk_get" },
	{ 0x3f3ba620, "regulator_bulk_enable" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x9d7bfa3, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd263dd67, "snd_soc_dapm_put_volsw" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcbefec57, "snd_ctl_boolean_mono_info" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xeb2a6a67, "regulator_bulk_disable" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0x239e7675, "snd_soc_dapm_sync" },
	{ 0x96cf9234, "snd_soc_component_write" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x375b268e, "regcache_mark_dirty" },
	{ 0xaaef47a5, "snd_soc_component_read32" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xc6a8417b, "regcache_sync" },
	{ 0xa2ea9332, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Cwlf,wm8731");
MODULE_ALIAS("of:N*T*Cwlf,wm8731C*");
MODULE_ALIAS("i2c:wm8731");

MODULE_INFO(srcversion, "3302CC79E6995267993E648");
