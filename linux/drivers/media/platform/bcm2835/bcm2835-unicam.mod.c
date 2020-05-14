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
	{ 0xdc17b92f, "vb2_ioctl_streamoff" },
	{ 0x9cb79952, "vb2_ioctl_streamon" },
	{ 0x36c9729d, "vb2_ioctl_prepare_buf" },
	{ 0xabe5b783, "vb2_ioctl_create_bufs" },
	{ 0xc23bec8f, "vb2_ioctl_dqbuf" },
	{ 0x190b1529, "vb2_ioctl_expbuf" },
	{ 0xf6344e86, "vb2_ioctl_qbuf" },
	{ 0x209697d0, "vb2_ioctl_querybuf" },
	{ 0x4553cbba, "vb2_ioctl_reqbufs" },
	{ 0xc196e91c, "vb2_fop_mmap" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0x11bd3e82, "vb2_fop_poll" },
	{ 0xbb50694c, "vb2_fop_read" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0x6c017d87, "v4l2_event_subscribe" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0x14ca2e8f, "vb2_plane_cookie" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc6234a50, "media_create_pad_link" },
	{ 0xa4928de, "v4l2_device_register_subdev_nodes" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xd36daa13, "vb2_queue_init" },
	{ 0x89a40fe3, "vb2_dma_contig_memops" },
	{ 0xb79a0c96, "v4l2_ctrl_add_handler" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x8ce01341, "v4l2_subdev_alloc_pad_config" },
	{ 0xddd510f, "v4l2_event_queue" },
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0x12a38747, "usleep_range" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xd9849629, "v4l2_fh_release" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x55a3471a, "_vb2_fop_release" },
	{ 0x41cb821b, "v4l2_fh_is_singular" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x638ab86c, "v4l2_g_parm_cap" },
	{ 0x6bd0aa4, "v4l2_s_parm_cap" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9d669763, "memcpy" },
	{ 0x9c587d0, "video_devdata" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0xa1633992, "_dev_err" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0x466a5f4e, "v4l2_async_notifier_register" },
	{ 0x7a900d9b, "of_graph_get_remote_endpoint" },
	{ 0x45b5a542, "of_graph_get_remote_port_parent" },
	{ 0xc6aed248, "v4l2_fwnode_endpoint_parse" },
	{ 0x6c9cf468, "of_graph_get_next_endpoint" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x7f4341bf, "__media_device_register" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0x568b084f, "media_device_init" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0xb81960ca, "snprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xbaa9a2c9, "platform_get_irq" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0xa48dda3a, "devm_ioremap_resource" },
	{ 0xc64803ce, "platform_get_resource" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xce0ecde8, "media_device_cleanup" },
	{ 0x32cd8d92, "media_device_unregister" },
	{ 0x50d65b11, "v4l2_subdev_free_pad_config" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x821f22, "v4l2_async_notifier_unregister" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf2-v4l2,videobuf2-common,media,videobuf2-dma-contig,v4l2-dv-timings,v4l2-common,v4l2-fwnode";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicam");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicamC*");

MODULE_INFO(srcversion, "51570713BDDC20F27E09565");
