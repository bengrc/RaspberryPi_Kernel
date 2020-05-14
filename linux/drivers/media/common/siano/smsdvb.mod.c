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
	{ 0xf36bd06b, "smscore_register_hotplug" },
	{ 0x7ef00083, "smscore_get_board_id" },
	{ 0x1e6ce593, "sms_board_setup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xfcf12852, "dvb_unregister_adapter" },
	{ 0xc713d937, "sms_board_event" },
	{ 0x242cca6f, "dvb_register_frontend" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0x96ae9a85, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x63222b29, "smsclient_sendrequest" },
	{ 0x49c68e3f, "dvb_dmxdev_release" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb5561aad, "sms_board_lna_control" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xaabdbe81, "smscore_putbuffer" },
	{ 0xfab2aacb, "smscore_unregister_hotplug" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x6992c268, "dvb_register_adapter" },
	{ 0x924e35b3, "sms_board_power" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xa3abf0cd, "sms_board_led_feedback" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x8f029992, "smscore_register_client" },
	{ 0x2471a805, "smscore_get_device_mode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xad36d4f0, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv,dvb-core";


MODULE_INFO(srcversion, "64977CC3D5A70597553F3C8");
