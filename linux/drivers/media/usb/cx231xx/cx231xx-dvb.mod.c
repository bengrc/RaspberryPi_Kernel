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
	{ 0xb7700415, "param_ops_int" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x3f51c6b6, "cx231xx_unregister_extension" },
	{ 0xbe7d6f7f, "cx231xx_register_extension" },
	{ 0x7c32d0f0, "printk" },
	{ 0x402b8281, "__request_module" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1633992, "_dev_err" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x72b9055b, "dvb_net_init" },
	{ 0xad36d4f0, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x242cca6f, "dvb_register_frontend" },
	{ 0x6992c268, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9d669763, "memcpy" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x2823991d, "dvb_module_probe" },
	{ 0xa4ca7a49, "cx231xx_demod_reset" },
	{ 0xad4a04d8, "cx231xx_get_i2c_adap" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xc12fc5b5, "dvb_module_release" },
	{ 0xfcf12852, "dvb_unregister_adapter" },
	{ 0x4a1a8bdb, "dvb_frontend_detach" },
	{ 0x96ae9a85, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x49c68e3f, "dvb_dmxdev_release" },
	{ 0x3d23dc80, "dvb_net_release" },
	{ 0xe3bbdcd8, "cx231xx_init_bulk" },
	{ 0xf2f52f6e, "cx231xx_init_isoc" },
	{ 0x466385d2, "cx231xx_set_alt_setting" },
	{ 0x6f9b73da, "cx231xx_uninit_isoc" },
	{ 0xaedc3d4a, "cx231xx_uninit_bulk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x18be205a, "cx231xx_set_mode" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx,dvb-core";


MODULE_INFO(srcversion, "34A9DA1F6B8D577F33C6AF2");
