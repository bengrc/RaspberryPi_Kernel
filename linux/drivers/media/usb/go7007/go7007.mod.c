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
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xddd510f, "v4l2_event_queue" },
	{ 0x97f1c731, "v4l2_ctrl_log_status" },
	{ 0x88045b28, "snd_pcm_period_elapsed" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xde88e1cf, "v4l2_ctrl_g_ctrl" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0x11bd3e82, "vb2_fop_poll" },
	{ 0x9cb79952, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xc6aeafe4, "snd_card_disconnect" },
	{ 0xb187d90f, "i2c_add_adapter" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0xbb50694c, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0x1fc11772, "vb2_vmalloc_memops" },
	{ 0x8dc5e1f9, "snd_device_new" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc196e91c, "vb2_fop_mmap" },
	{ 0xf6344e86, "vb2_ioctl_qbuf" },
	{ 0x6c017d87, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x8bcaf4a7, "snd_pcm_set_ops" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0x549deb00, "vb2_plane_vaddr" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0x570f3106, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0xc1d0155d, "snd_pcm_lib_ioctl" },
	{ 0xa1633992, "_dev_err" },
	{ 0xc23bec8f, "vb2_ioctl_dqbuf" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x194d4716, "snd_card_new" },
	{ 0xf63bc4f, "i2c_del_adapter" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x6e977563, "vb2_fop_release" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x843c5c75, "v4l2_ctrl_grab" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x209697d0, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x20de800c, "snd_card_free" },
	{ 0x6ed427b8, "v4l2_i2c_new_subdev_board" },
	{ 0xf2c69986, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x972a0334, "snd_pcm_new" },
	{ 0x99bb8806, "memmove" },
	{ 0xdbfc0f68, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xdc17b92f, "vb2_ioctl_streamoff" },
	{ 0xa8c2115e, "v4l2_device_put" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0xd36daa13, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-vmalloc,videobuf2-common,v4l2-common";


MODULE_INFO(srcversion, "4A3A0E0B3AE18ABFFA669B1");
