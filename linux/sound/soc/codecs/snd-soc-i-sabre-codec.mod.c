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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x539719c, "snd_soc_component_update_bits" },
	{ 0x4b1dc8a0, "snd_soc_put_volsw" },
	{ 0x6b33b888, "snd_soc_register_component" },
	{ 0x8cfecad3, "snd_soc_get_volsw" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0x171977d4, "snd_soc_put_volsw_range" },
	{ 0x9d7bfa3, "snd_pcm_hw_constraint_list" },
	{ 0x3490977c, "snd_soc_info_volsw_range" },
	{ 0xb04535c8, "snd_soc_get_volsw_range" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf9718f91, "snd_soc_unregister_component" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0x889235a0, "snd_soc_get_enum_double" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x2fce77bc, "snd_soc_put_enum_double" },
	{ 0xcafbd334, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:i-sabre-codec");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-codec");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-codecC*");

MODULE_INFO(srcversion, "0AC5F3E0FBDA8181672744A");
