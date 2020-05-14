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
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0x97f1c731, "v4l2_ctrl_log_status" },
	{ 0xd9849629, "v4l2_fh_release" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x5cfece4d, "v4l2_ctrl_poll" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9c587d0, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa8c2115e, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2ce789f8, "v4l2_device_disconnect" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";

MODULE_ALIAS("usb:v046Dp0A0Ed*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "90681AE52F57E370D13E1F0");
