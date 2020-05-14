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
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcf44e6ed, "v4l2_ctrl_cluster" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xc9a16c73, "page_address" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0x2ce789f8, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9645ed0b, "pgprot_user" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd9849629, "v4l2_fh_release" },
	{ 0x41cb821b, "v4l2_fh_is_singular" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x843c5c75, "v4l2_ctrl_grab" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x5cba7af8, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdbfc0f68, "vmalloc_to_page" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xa8c2115e, "v4l2_device_put" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x5cfece4d, "v4l2_ctrl_poll" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("usb:v0553p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0151d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CE0847B1B3AEF3CA072B6C5");
