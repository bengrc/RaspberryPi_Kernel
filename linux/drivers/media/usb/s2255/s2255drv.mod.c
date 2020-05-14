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
	{ 0xdc17b92f, "vb2_ioctl_streamoff" },
	{ 0x9cb79952, "vb2_ioctl_streamon" },
	{ 0xc23bec8f, "vb2_ioctl_dqbuf" },
	{ 0xf6344e86, "vb2_ioctl_qbuf" },
	{ 0x209697d0, "vb2_ioctl_querybuf" },
	{ 0x4553cbba, "vb2_ioctl_reqbufs" },
	{ 0x6e977563, "vb2_fop_release" },
	{ 0xc196e91c, "vb2_fop_mmap" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x11bd3e82, "vb2_fop_poll" },
	{ 0xbb50694c, "vb2_fop_read" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0xd36daa13, "vb2_queue_init" },
	{ 0x1fc11772, "vb2_vmalloc_memops" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x2ce789f8, "v4l2_device_disconnect" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9f8c16c3, "__v4l2_ctrl_s_ctrl" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0x549deb00, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5f754e5a, "memset" },
	{ 0xa1633992, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf2-v4l2,videobuf2-vmalloc,videobuf2-common";

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3C76B0B1DA1755B93F1883E");
