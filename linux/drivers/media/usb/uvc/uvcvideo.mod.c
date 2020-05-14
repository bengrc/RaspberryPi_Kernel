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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0x4be85a03, "memweight" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0xde4146d5, "v4l2_event_queue_fh" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x13ac4b22, "vb2_mmap" },
	{ 0xd56cb15e, "usb_debug_root" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0x39ddd88, "no_llseek" },
	{ 0xe2fcc31d, "vb2_create_bufs" },
	{ 0x11bd3e82, "vb2_fop_poll" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9cb79952, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8027968f, "usb_autopm_get_interface" },
	{ 0x91af71e0, "usb_enable_autosuspend" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x1b5c0864, "v4l2_ctrl_merge" },
	{ 0xeea0399, "strscpy" },
	{ 0x91715312, "sprintf" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0x3b3a1192, "input_event" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0x1fc11772, "vb2_vmalloc_memops" },
	{ 0x431f8187, "usb_string" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc196e91c, "vb2_fop_mmap" },
	{ 0xf6344e86, "vb2_ioctl_qbuf" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x6c017d87, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0x71c90087, "memcmp" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x11f1e5d5, "v4l2_fh_init" },
	{ 0x549deb00, "vb2_plane_vaddr" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x51e26df8, "usb_driver_claim_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3fe8bbfc, "vb2_qbuf" },
	{ 0x36c9729d, "vb2_ioctl_prepare_buf" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xabe5b783, "vb2_ioctl_create_bufs" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0x1ad7f26, "vb2_querybuf" },
	{ 0xc23bec8f, "vb2_ioctl_dqbuf" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xce0ecde8, "media_device_cleanup" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x4b77c88d, "v4l2_ctrl_replace" },
	{ 0x586e908f, "vb2_streamon" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x6e977563, "vb2_fop_release" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xcdd912c3, "vb2_expbuf" },
	{ 0x175ec858, "input_register_device" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x73fd981b, "usb_clear_halt" },
	{ 0x25a5f9ee, "usb_driver_release_interface" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x83ef268d, "v4l2_device_register_subdev" },
	{ 0xc6234a50, "media_create_pad_link" },
	{ 0x698631b0, "vb2_reqbufs" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xc95316f5, "usb_get_intf" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0xb969f089, "v4l2_subdev_init" },
	{ 0x209697d0, "vb2_ioctl_querybuf" },
	{ 0x7f4341bf, "__media_device_register" },
	{ 0xe44818be, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0x82352136, "usb_match_one_id" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0x5df61148, "v4l2_fh_add" },
	{ 0xd3b43007, "v4l2_fh_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xe91afbe9, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xac113e5b, "vb2_poll" },
	{ 0x568b084f, "media_device_init" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xbe398add, "usb_get_current_frame_number" },
	{ 0xdc17b92f, "vb2_ioctl_streamoff" },
	{ 0x276bf8a0, "vb2_queue_release" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xd1ed3c36, "vb2_streamoff" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x32cd8d92, "media_device_unregister" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x524ccab1, "usb_autopm_put_interface" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x2da7e1a5, "usb_put_intf" },
	{ 0x4ae786e5, "v4l2_fh_exit" },
	{ 0x8ccc143c, "input_allocate_device" },
	{ 0xd36daa13, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc,media";

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "75C83C3F7087B9EB0A90888");
