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
	{ 0xf686693, "__devm_regmap_init_spi" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0xe2ad7c89, "devm_regulator_bulk_get" },
	{ 0x3f3ba620, "regulator_bulk_enable" },
	{ 0x9d7bfa3, "snd_pcm_hw_constraint_list" },
	{ 0x7c32d0f0, "printk" },
	{ 0x76838652, "snd_soc_add_component_controls" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xa1633992, "_dev_err" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xeb2a6a67, "regulator_bulk_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0x96cf9234, "snd_soc_component_write" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xc6a8417b, "regcache_sync" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Cwlf,wm8741");
MODULE_ALIAS("of:N*T*Cwlf,wm8741C*");
MODULE_ALIAS("i2c:wm8741");

MODULE_INFO(srcversion, "DD1BBEE4AE7BE8E5BAC26AE");
