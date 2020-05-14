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
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd0b36263, "snd_soc_dapm_get_enum_double" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x95915fbf, "regmap_read" },
	{ 0xe2ad7c89, "devm_regulator_bulk_get" },
	{ 0x3f3ba620, "regulator_bulk_enable" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0x74a0f07, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa1633992, "_dev_err" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xeb2a6a67, "regulator_bulk_disable" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x98be6918, "devm_regulator_register_notifier" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0x66c06339, "__pm_runtime_set_status" },
	{ 0x96cf9234, "snd_soc_component_write" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x375b268e, "regcache_mark_dirty" },
	{ 0x6420dc40, "snd_soc_component_test_bits" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xaaef47a5, "snd_soc_component_read32" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xc6a8417b, "regcache_sync" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "4BE2CEF34386882EA98080D");
