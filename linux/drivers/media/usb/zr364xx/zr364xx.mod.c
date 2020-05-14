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
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0x97f1c731, "v4l2_ctrl_log_status" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x4aed314b, "videobuf_read_one" },
	{ 0xaaf1c1ba, "videobuf_streamon" },
	{ 0xcd013e2d, "videobuf_queue_is_busy" },
	{ 0xd9849629, "v4l2_fh_release" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb2302f2, "videobuf_mmap_mapper" },
	{ 0x3e679942, "videobuf_iolock" },
	{ 0x5fc3d59, "videobuf_vmalloc_free" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x1d0275f8, "videobuf_queue_vmalloc_init" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x999e8297, "vfree" },
	{ 0x3f56898, "videobuf_mmap_free" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0x63217b02, "videobuf_poll_stream" },
	{ 0x5cfece4d, "v4l2_ctrl_poll" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x6795cabc, "videobuf_reqbufs" },
	{ 0x666c3ea5, "videobuf_querybuf" },
	{ 0xf0259a32, "videobuf_qbuf" },
	{ 0x15d842b6, "videobuf_dqbuf" },
	{ 0xa43a3b8f, "videobuf_streamoff" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xa8c2115e, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2ce789f8, "v4l2_device_disconnect" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x72ab1f08, "videobuf_to_vmalloc" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9d669763, "memcpy" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa1633992, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf-core,videobuf-vmalloc,v4l2-common";

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E0EFD954B1151C5612098B");
