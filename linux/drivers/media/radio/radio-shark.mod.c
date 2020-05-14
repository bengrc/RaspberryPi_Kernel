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
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x14c4f572, "snd_tea575x_init" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0x2c28325b, "of_led_classdev_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0x21db50df, "v4l2_device_set_name" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbe9176fe, "usb_interrupt_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xa8c2115e, "v4l2_device_put" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x1804c3b9, "led_classdev_unregister" },
	{ 0x63b8f718, "snd_tea575x_exit" },
	{ 0x2ce789f8, "v4l2_device_disconnect" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xae5ab339, "snd_tea575x_set_freq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tea575x,videodev";

MODULE_ALIAS("usb:v077Dp627Ad0001dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "82A439569AAE486DD834107");
