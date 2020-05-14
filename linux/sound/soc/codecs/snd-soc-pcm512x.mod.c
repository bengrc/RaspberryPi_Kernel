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
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xea124bd1, "gcd" },
	{ 0xd9bcc785, "snd_pcm_hw_constraint_ratnums" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x503bd137, "snd_interval_ranges" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8094e119, "regulator_register_notifier" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe2ad7c89, "devm_regulator_bulk_get" },
	{ 0x3f3ba620, "regulator_bulk_enable" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9d7bfa3, "snd_pcm_hw_constraint_list" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x51ea178a, "snd_ctl_boolean_stereo_info" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x9ae45f6d, "snd_pcm_hw_rule_add" },
	{ 0x889235a0, "snd_soc_get_enum_double" },
	{ 0xeb2a6a67, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0x66c06339, "__pm_runtime_set_status" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x375b268e, "regcache_mark_dirty" },
	{ 0x2fce77bc, "snd_soc_put_enum_double" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xc6a8417b, "regcache_sync" },
	{ 0x44bc7da9, "regcache_cache_only" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";


MODULE_INFO(srcversion, "8CB41A2DB347BD60A825106");
