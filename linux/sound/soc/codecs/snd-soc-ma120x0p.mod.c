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
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0x171977d4, "snd_soc_put_volsw_range" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3490977c, "snd_soc_info_volsw_range" },
	{ 0xb04535c8, "snd_soc_get_volsw_range" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf9718f91, "snd_soc_unregister_component" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0x889235a0, "snd_soc_get_enum_double" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0xf38ce67c, "devm_snd_soc_register_component" },
	{ 0x96cf9234, "snd_soc_component_write" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x2fce77bc, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0x6420dc40, "snd_soc_component_test_bits" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x7fcce07f, "gpiod_get_value_cansleep" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cma,ma120x0p");
MODULE_ALIAS("of:N*T*Cma,ma120x0pC*");
MODULE_ALIAS("i2c:ma120x0p");

MODULE_INFO(srcversion, "B3F70617D7A5CA2D426EB08");
