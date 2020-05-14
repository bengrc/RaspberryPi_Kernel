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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x3b523bde, "snd_soc_info_enum_double" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xfc8a6297, "snd_soc_unregister_card" },
	{ 0xa1633992, "_dev_err" },
	{ 0x57d87391, "snd_soc_info_volsw" },
	{ 0xcd4410f1, "snd_soc_get_pcm_runtime" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x96cf9234, "snd_soc_component_write" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x37a0cba, "kfree" },
	{ 0x27d7b178, "request_firmware" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0xe70037a0, "snd_soc_component_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xcfeb6c54, "snd_soc_limit_volume" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xee3b7bd2, "snd_soc_register_card" },
	{ 0x51c4f30d, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Callo,piano-dac-plus");
MODULE_ALIAS("of:N*T*Callo,piano-dac-plusC*");

MODULE_INFO(srcversion, "7E769FCB65AC0181F7E0C33");
