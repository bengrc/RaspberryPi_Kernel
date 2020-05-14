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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x88045b28, "snd_pcm_period_elapsed" },
	{ 0x100f3c99, "_snd_pcm_stream_lock_irqsave" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0x11bd3e82, "vb2_fop_poll" },
	{ 0x9cb79952, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0xbb50694c, "vb2_fop_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2ce789f8, "v4l2_device_disconnect" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x1fc11772, "vb2_vmalloc_memops" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc196e91c, "vb2_fop_mmap" },
	{ 0xf6344e86, "vb2_ioctl_qbuf" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x8bcaf4a7, "snd_pcm_set_ops" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x549deb00, "vb2_plane_vaddr" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa7cb3ad5, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x36c9729d, "vb2_ioctl_prepare_buf" },
	{ 0xe9d78811, "snd_pcm_lib_free_pages" },
	{ 0xc1d0155d, "snd_pcm_lib_ioctl" },
	{ 0xabe5b783, "vb2_ioctl_create_bufs" },
	{ 0xc23bec8f, "vb2_ioctl_dqbuf" },
	{ 0x2b05479f, "snd_pcm_lib_malloc_pages" },
	{ 0x194d4716, "snd_card_new" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x6e977563, "vb2_fop_release" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x73fd981b, "usb_clear_halt" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0x209697d0, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0x788f810c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x20de800c, "snd_card_free" },
	{ 0xf2c69986, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x972a0334, "snd_pcm_new" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xdc17b92f, "vb2_ioctl_streamoff" },
	{ 0x276bf8a0, "vb2_queue_release" },
	{ 0xa8c2115e, "v4l2_device_put" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xd36daa13, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,snd-pcm,videobuf2-vmalloc,videobuf2-common,snd";

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3306d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ACCEDA2E95E2095A87EA146");
