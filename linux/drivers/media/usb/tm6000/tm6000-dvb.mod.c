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
	{ 0x81760a5e, "tm6000_unregister_extension" },
	{ 0x175dae70, "tm6000_register_extension" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x402b8281, "__request_module" },
	{ 0xdff8e89d, "tm6000_tuner_callback" },
	{ 0xad36d4f0, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x242cca6f, "dvb_register_frontend" },
	{ 0x2309a6d6, "tm6000_xc5000_callback" },
	{ 0x6992c268, "dvb_register_adapter" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfcf12852, "dvb_unregister_adapter" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x49c68e3f, "dvb_dmxdev_release" },
	{ 0x4a1a8bdb, "dvb_frontend_detach" },
	{ 0x96ae9a85, "dvb_unregister_frontend" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x89b611dd, "tm6000_debug" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x73fd981b, "usb_clear_halt" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x6783b77c, "tm6000_init_digital_mode" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tm6000,dvb-core";


MODULE_INFO(srcversion, "28DC70E7F89F601153D2713");
