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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf455bd65, "v4l2_i2c_new_subdev" },
	{ 0x97f1c731, "v4l2_ctrl_log_status" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x11bd3e82, "vb2_fop_poll" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9cb79952, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb187d90f, "i2c_add_adapter" },
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
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0x549deb00, "vb2_plane_vaddr" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0xa1633992, "_dev_err" },
	{ 0xc23bec8f, "vb2_ioctl_dqbuf" },
	{ 0xf63bc4f, "i2c_del_adapter" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6e977563, "vb2_fop_release" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0x209697d0, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x190b1529, "vb2_ioctl_expbuf" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0xdc17b92f, "vb2_ioctl_streamoff" },
	{ 0xa8c2115e, "v4l2_device_put" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xd36daa13, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,v4l2-common,videobuf2-vmalloc,videobuf2-common";

MODULE_ALIAS("usb:v05E1p0408d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "22C3A750A55B412223C157D");
