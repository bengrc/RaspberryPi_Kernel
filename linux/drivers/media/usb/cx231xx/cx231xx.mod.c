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
	{ 0x92b57248, "flush_work" },
	{ 0x3f56898, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6ff3b4b4, "i2c_mux_add_adapter" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb2302f2, "videobuf_mmap_mapper" },
	{ 0xf455bd65, "v4l2_i2c_new_subdev" },
	{ 0x97f1c731, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xd7417963, "i2c_mux_del_adapters" },
	{ 0x17e06c91, "usb_reset_endpoint" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x5e5393bb, "__media_device_usb_init" },
	{ 0x92dd0bbd, "cx2341x_handler_set_50hz" },
	{ 0x258fdd05, "cx2341x_handler_init" },
	{ 0x1d0275f8, "videobuf_queue_vmalloc_init" },
	{ 0x11ccd43d, "v4l2_mc_create_media_graph" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xaaf1c1ba, "videobuf_streamon" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x3e679942, "videobuf_iolock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x36311113, "media_entity_setup_link" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0xa9a114fa, "rc_allocate_device" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb187d90f, "i2c_add_adapter" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x1404de7c, "i2c_mux_alloc" },
	{ 0xae577d12, "v4l2_s_ctrl" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf0259a32, "videobuf_qbuf" },
	{ 0x71c90087, "memcmp" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x11f1e5d5, "v4l2_fh_init" },
	{ 0x982c86bb, "v4l2_event_pending" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0x666c3ea5, "videobuf_querybuf" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf40e8a25, "videobuf_read_stream" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0x5347d8c2, "i2c_unregister_device" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xce0ecde8, "media_device_cleanup" },
	{ 0x4fdb023a, "media_device_register_entity" },
	{ 0x2aa02408, "videobuf_stop" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xf63bc4f, "i2c_del_adapter" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0xafd9380f, "cx2341x_handler_setup" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x73fd981b, "usb_clear_halt" },
	{ 0x5fc3d59, "videobuf_vmalloc_free" },
	{ 0x72ab1f08, "videobuf_to_vmalloc" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x15d842b6, "videobuf_dqbuf" },
	{ 0xcd013e2d, "videobuf_queue_is_busy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x7f4341bf, "__media_device_register" },
	{ 0x8d065f1d, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x6795cabc, "videobuf_reqbufs" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x5df61148, "v4l2_fh_add" },
	{ 0xd3b43007, "v4l2_fh_del" },
	{ 0xb79a0c96, "v4l2_ctrl_add_handler" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0xf143ff7f, "v4l2_ctrl_radio_filter" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xa61455f8, "videobuf_read_stop" },
	{ 0x36790da2, "i2c_new_device" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x32cd8d92, "media_device_unregister" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x63217b02, "videobuf_poll_stream" },
	{ 0x5cfece4d, "v4l2_ctrl_poll" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4ae786e5, "v4l2_fh_exit" },
	{ 0xa43a3b8f, "videobuf_streamoff" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videodev,i2c-mux,v4l2-common,tveeprom,media,cx2341x,videobuf-vmalloc";

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "833BB907F41CA6C8626D853");
