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
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x52526626, "device_remove_file" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xfcf12852, "dvb_unregister_adapter" },
	{ 0x97255bdf, "strlen" },
	{ 0xf455bd65, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x242cca6f, "dvb_register_frontend" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x96ae9a85, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdaff62f9, "cx2341x_fill_defaults" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xc889377e, "cx2341x_log_status" },
	{ 0x3d23dc80, "dvb_net_release" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb187d90f, "i2c_add_adapter" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x4a1a8bdb, "dvb_frontend_detach" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0x8d3a49fd, "cx2341x_ctrl_get_menu" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2ce789f8, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0xae577d12, "v4l2_s_ctrl" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0xe864e62d, "device_register" },
	{ 0x748ee2a6, "usb_lock_device_for_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xb9c8f3f1, "cx2341x_update" },
	{ 0x2ec92974, "freezing_slow_path" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x49c68e3f, "dvb_dmxdev_release" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x54111370, "kthread_stop" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x2138166e, "class_unregister" },
	{ 0x72b9055b, "dvb_net_init" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x11f1e5d5, "v4l2_fh_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe49a3afb, "device_move" },
	{ 0x24d273d1, "add_timer" },
	{ 0x61a6ff9, "__class_register" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x41af589f, "usb_urb_ep_type_check" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0xf63bc4f, "i2c_del_adapter" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x142a905e, "put_device" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x73fd981b, "usb_clear_halt" },
	{ 0xeb854f47, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x6992c268, "dvb_register_adapter" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x5df61148, "v4l2_fh_add" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0xd3b43007, "v4l2_fh_del" },
	{ 0xa20fee2, "cx2341x_ext_ctrls" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x36790da2, "i2c_new_device" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xad36d4f0, "dvb_dmxdev_init" },
	{ 0x4ae786e5, "v4l2_fh_exit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,v4l2-common,tveeprom,videodev,cx2341x";

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "925FBDA7FC3769C8C8F535F");
