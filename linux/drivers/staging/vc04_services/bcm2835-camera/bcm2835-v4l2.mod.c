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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x80c8b05d, "module_layout" },
	{ 0x4553cbba, "vb2_ioctl_reqbufs" },
	{ 0xcc004cdc, "vchiq_mmal_port_set_format" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0xd308d31d, "vchiq_mmal_port_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97f1c731, "v4l2_ctrl_log_status" },
	{ 0x5611fb71, "vchiq_mmal_port_parameter_set" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0x11bd3e82, "vb2_fop_poll" },
	{ 0x9cb79952, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x91715312, "sprintf" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0xbb50694c, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0x95cd773d, "vchiq_mmal_component_finalise" },
	{ 0x5f754e5a, "memset" },
	{ 0x1fc11772, "vb2_vmalloc_memops" },
	{ 0xc196e91c, "vb2_fop_mmap" },
	{ 0xf6344e86, "vb2_ioctl_qbuf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xab6deaf8, "vchiq_mmal_port_connect_tunnel" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0x549deb00, "vb2_plane_vaddr" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x36901ec6, "vchiq_mmal_component_enable" },
	{ 0x36c9729d, "vb2_ioctl_prepare_buf" },
	{ 0xabe5b783, "vb2_ioctl_create_bufs" },
	{ 0xa1633992, "_dev_err" },
	{ 0xc23bec8f, "vb2_ioctl_dqbuf" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0xbdc60da4, "v4l2_ctrl_new_int_menu" },
	{ 0x30cbbb14, "vchiq_mmal_component_init" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x6e977563, "vb2_fop_release" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb66c357c, "vchiq_mmal_component_disable" },
	{ 0x954dad06, "v4l2_ctrl_auto_cluster" },
	{ 0xc6e09492, "mmal_vchi_buffer_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0x54375549, "vchiq_mmal_port_enable" },
	{ 0x209697d0, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6192e1a2, "vchiq_mmal_version" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x91a2c57a, "vchiq_mmal_submit_buffer" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x101e5022, "mmal_vchi_buffer_cleanup" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xdc17b92f, "vb2_ioctl_streamoff" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x4badc71a, "vchiq_mmal_port_parameter_get" },
	{ 0xd36daa13, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,videobuf2-vmalloc,videobuf2-common,v4l2-common";


MODULE_INFO(srcversion, "0F765D307016ED9D9D341E3");
