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
	{ 0x4553cbba, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0xc5dbb8c0, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x8f18f5a3, "__media_pipeline_start" },
	{ 0xdd4cbb26, "media_device_unregister_entity_notify" },
	{ 0x55a3471a, "_vb2_fop_release" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xfcf12852, "dvb_unregister_adapter" },
	{ 0xb74a0255, "media_device_unregister_entity" },
	{ 0xf455bd65, "v4l2_i2c_new_subdev" },
	{ 0x97f1c731, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x87c2a1c5, "dvb_frontend_suspend" },
	{ 0x242cca6f, "dvb_register_frontend" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0x54bd7b4c, "dvb_frontend_resume" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x5e5393bb, "__media_device_usb_init" },
	{ 0x11bd3e82, "vb2_fop_poll" },
	{ 0x11ccd43d, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9cb79952, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xbad87e4, "v4l_disable_media_source" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0x96ae9a85, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x36311113, "media_entity_setup_link" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0xa9a114fa, "rc_allocate_device" },
	{ 0x3d23dc80, "dvb_net_release" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb187d90f, "i2c_add_adapter" },
	{ 0x4a1a8bdb, "dvb_frontend_detach" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0xbb50694c, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2ce789f8, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x1fc11772, "vb2_vmalloc_memops" },
	{ 0xb6458f7, "rc_free_device" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc196e91c, "vb2_fop_mmap" },
	{ 0xf6344e86, "vb2_ioctl_qbuf" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x49c68e3f, "dvb_dmxdev_release" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0x72b9055b, "dvb_net_init" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0x549deb00, "vb2_plane_vaddr" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa42d6554, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x36c9729d, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4a9801cc, "tveeprom_read" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xabe5b783, "vb2_ioctl_create_bufs" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0xa1633992, "_dev_err" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xc23bec8f, "vb2_ioctl_dqbuf" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x868784cb, "__symbol_get" },
	{  0xe19eb, "v4l_enable_media_source" },
	{ 0xce0ecde8, "media_device_cleanup" },
	{ 0x4fdb023a, "media_device_register_entity" },
	{ 0xf63bc4f, "i2c_del_adapter" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xb2b7abf2, "media_device_register_entity_notify" },
	{ 0xdafc31c5, "dvb_dmx_swfilter_packets" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x150eb54d, "__media_pipeline_stop" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xc6234a50, "media_create_pad_link" },
	{ 0x6992c268, "dvb_register_adapter" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x209697d0, "vb2_ioctl_querybuf" },
	{ 0x7f4341bf, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2d827c6, "__media_entity_setup_link" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0x145b7614, "ir_raw_event_store" },
	{ 0xa445a5f8, "i2c_probe_func_quick_read" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe91afbe9, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x190b1529, "vb2_ioctl_expbuf" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdc17b92f, "vb2_ioctl_streamoff" },
	{ 0x276bf8a0, "vb2_queue_release" },
	{ 0xa8c2115e, "v4l2_device_put" },
	{ 0x465ebc71, "ir_raw_event_handle" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x32cd8d92, "media_device_unregister" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xad36d4f0, "dvb_dmxdev_init" },
	{ 0xd36daa13, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,media,dvb-core,v4l2-common,tveeprom,videobuf2-vmalloc,videobuf2-common";

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6E2D901B73099B0CBAEE480");
