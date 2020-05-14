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
	{ 0x36489dc, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0x8e31ed40, "devm_sigmadsp_init_i2c" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0xd8d84bdd, "sigmadsp_attach" },
	{ 0xe2ad7c89, "devm_regulator_bulk_get" },
	{ 0x3f3ba620, "regulator_bulk_enable" },
	{ 0xbdfaece4, "of_property_read_variable_u8_array" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x437ec5b3, "sigmadsp_reset" },
	{ 0x9828aa04, "sigmadsp_setup" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0x8090c15c, "devm_gpio_request_one" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xba3f6f33, "sigmadsp_restrict_params" },
	{ 0xeb2a6a67, "regulator_bulk_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x375b268e, "regcache_mark_dirty" },
	{ 0x50f61d60, "gpiod_set_raw_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf138a9be, "regmap_write" },
	{ 0xc6a8417b, "regcache_sync" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp";

MODULE_ALIAS("of:N*T*Cadi,adau1701");
MODULE_ALIAS("of:N*T*Cadi,adau1701C*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "62314E8281E8CA8E9784094");
