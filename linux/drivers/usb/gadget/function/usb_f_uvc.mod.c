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
	{ 0x52526626, "device_remove_file" },
	{ 0xb42858a4, "usb_function_deactivate" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd2bd8a0c, "usb_ep_autoconfig_ss" },
	{ 0x62500b66, "usb_gstrings_attach" },
	{ 0xcaa1c48c, "usb_free_all_descriptors" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xde7dcd04, "usb_ep_disable" },
	{ 0x69097fbc, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xddd510f, "v4l2_event_queue" },
	{ 0x13ac4b22, "vb2_mmap" },
	{ 0xdba4938b, "usb_ep_queue" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8178afc0, "config_item_put" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x1f02a56b, "config_item_init_type_name" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x65bffd8d, "usb_ep_set_halt" },
	{ 0xc173e2ac, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xeccf05fe, "usb_function_unregister" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0x49f2f9c1, "usb_function_activate" },
	{ 0x5f754e5a, "memset" },
	{ 0x1fc11772, "vb2_vmalloc_memops" },
	{ 0x7a3fe895, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x6c017d87, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x998b9ae3, "usb_ep_autoconfig" },
	{ 0x11f1e5d5, "v4l2_fh_init" },
	{ 0x549deb00, "vb2_plane_vaddr" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3fe8bbfc, "vb2_qbuf" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x310917fe, "sort" },
	{ 0x1ad7f26, "vb2_querybuf" },
	{ 0xd1182788, "usb_function_register" },
	{ 0xddb0ad34, "usb_composite_setup_continue" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0xff5167c9, "usb_ep_dequeue" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x586e908f, "vb2_streamon" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x3f7f5daf, "config_ep_by_speed" },
	{ 0x86ccf98c, "hex2bin" },
	{ 0x698631b0, "vb2_reqbufs" },
	{ 0xa6ebd2cf, "usb_ep_free_request" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xe44818be, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0x5df61148, "v4l2_fh_add" },
	{ 0x63ba6f18, "usb_interface_id" },
	{ 0xd3b43007, "v4l2_fh_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xac113e5b, "vb2_poll" },
	{ 0x276bf8a0, "vb2_queue_release" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x96c25614, "config_group_find_item" },
	{ 0xd1ed3c36, "vb2_streamoff" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x4ae786e5, "v4l2_fh_exit" },
	{ 0xd36daa13, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,videodev,udc-core,videobuf2-common,videobuf2-v4l2,videobuf2-vmalloc";


MODULE_INFO(srcversion, "E1119B03A76A3336870A86E");
