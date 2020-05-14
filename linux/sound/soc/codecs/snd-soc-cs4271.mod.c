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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0xe2ad7c89, "devm_regulator_bulk_get" },
	{ 0x3f3ba620, "regulator_bulk_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x185038dd, "gpiod_direction_output_raw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0x47820ec9, "of_match_device" },
	{ 0xcbefec57, "snd_ctl_boolean_mono_info" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xeb2a6a67, "regulator_bulk_disable" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0xd2027ac4, "of_get_property" },
	{ 0x375b268e, "regcache_mark_dirty" },
	{ 0xc67f27a7, "gpiod_set_raw_value" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x4fdcc69f, "devm_gpio_request" },
	{ 0xc6a8417b, "regcache_sync" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Ccirrus,cs4271");
MODULE_ALIAS("of:N*T*Ccirrus,cs4271C*");

MODULE_INFO(srcversion, "A2D7947203CDF134D71B327");
