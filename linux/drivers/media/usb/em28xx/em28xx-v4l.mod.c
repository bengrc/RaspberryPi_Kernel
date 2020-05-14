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
	{ 0xd1ff5830, "em28xx_read_reg" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb74a0255, "media_device_unregister_entity" },
	{ 0xf455bd65, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x9d6dd0d1, "em28xx_write_regs" },
	{ 0xcfb25f18, "v4l2_ctrl_notify" },
	{ 0x7ebaeb98, "em28xx_setup_xc3028" },
	{ 0x93b7b6b7, "dev_printk" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0x11bd3e82, "vb2_fop_poll" },
	{ 0x11ccd43d, "v4l2_mc_create_media_graph" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9cb79952, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0x47826ea8, "em28xx_init_usb_xfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe548ad75, "em28xx_register_extension" },
	{ 0x36311113, "media_entity_setup_link" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0xbb50694c, "vb2_fop_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2ce789f8, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x1fc11772, "vb2_vmalloc_memops" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc196e91c, "vb2_fop_mmap" },
	{ 0xf6344e86, "vb2_ioctl_qbuf" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0x549deb00, "vb2_plane_vaddr" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0x76521881, "em28xx_unregister_extension" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x36c9729d, "vb2_ioctl_prepare_buf" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x3ef6fdd9, "em28xx_uninit_usb_xfer" },
	{ 0xabe5b783, "vb2_ioctl_create_bufs" },
	{ 0xa1633992, "_dev_err" },
	{ 0xc23bec8f, "vb2_ioctl_dqbuf" },
	{ 0x4fdb023a, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x2f426a63, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6e977563, "vb2_fop_release" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd6321f52, "em28xx_audio_setup" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x59e6b22c, "v4l2_i2c_subdev_addr" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0x5ca94142, "em28xx_set_mode" },
	{ 0x209697d0, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0xd5887d2d, "em28xx_stop_urbs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3c100274, "em28xx_write_reg" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x76e50e4c, "em28xx_audio_analog_set" },
	{ 0xdc17b92f, "vb2_ioctl_streamoff" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x1d1b04a4, "em28xx_boards" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8bfe7b81, "em28xx_init_camera" },
	{ 0xd36daa13, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,em28xx,videodev,media,v4l2-common,videobuf2-vmalloc,videobuf2-common";


MODULE_INFO(srcversion, "D3C49AE5B85C493509C4391");
