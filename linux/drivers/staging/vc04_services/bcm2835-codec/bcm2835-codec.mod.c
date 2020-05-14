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
	{ 0x7753c5f4, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xcc004cdc, "vchiq_mmal_port_set_format" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x62c23361, "v4l2_event_unsubscribe" },
	{ 0xd308d31d, "vchiq_mmal_port_disable" },
	{ 0xb0b456e0, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x4a4ef108, "v4l2_m2m_register_media_controller" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0xde4146d5, "v4l2_event_queue_fh" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xeac5e951, "v4l2_m2m_ctx_init" },
	{ 0x5611fb71, "vchiq_mmal_port_parameter_set" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xfa0056bd, "vb2_ops_wait_prepare" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3cc2e35a, "v4l2_m2m_fop_mmap" },
	{ 0xeea0399, "strscpy" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xf2100c59, "v4l2_m2m_ioctl_streamon" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xffb487d1, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3567df62, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x95cd773d, "vchiq_mmal_component_finalise" },
	{ 0x5f754e5a, "memset" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x6c017d87, "v4l2_event_subscribe" },
	{ 0x4babc732, "v4l2_m2m_ioctl_streamoff" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0x99f02534, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x11f1e5d5, "v4l2_fh_init" },
	{ 0x78436c35, "v4l2_ctrl_subscribe_event" },
	{ 0x549deb00, "vb2_plane_vaddr" },
	{ 0xbecf70b9, "vb2_buffer_done" },
	{ 0xfb7931f2, "dma_buf_put" },
	{ 0x328a05f1, "strncpy" },
	{ 0xcf748c43, "dma_buf_get" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x36901ec6, "vchiq_mmal_component_enable" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0xce0ecde8, "media_device_cleanup" },
	{ 0xfdd20a0, "v4l2_m2m_get_vq" },
	{ 0x30cbbb14, "vchiq_mmal_component_init" },
	{ 0x2f426a63, "v4l2_ctrl_find" },
	{ 0x7ee9a440, "v4l2_m2m_ioctl_qbuf" },
	{ 0x8852f2e6, "v4l2_m2m_fop_poll" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xefda4423, "v4l2_m2m_buf_queue" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0xb66c357c, "vchiq_mmal_component_disable" },
	{ 0x30c33c, "v4l2_m2m_ioctl_querybuf" },
	{ 0xc6e09492, "mmal_vchi_buffer_init" },
	{ 0x13d718e0, "v4l2_m2m_ioctl_expbuf" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x54375549, "vchiq_mmal_port_enable" },
	{ 0x7f4341bf, "__media_device_register" },
	{ 0x89a40fe3, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x91a2c57a, "vchiq_mmal_submit_buffer" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x942154ac, "v4l2_src_change_event_subscribe" },
	{ 0xbffe5d22, "v4l2_m2m_buf_remove" },
	{ 0xcdf980a1, "vb2_ops_wait_finish" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x5df61148, "v4l2_fh_add" },
	{ 0xd3683183, "v4l2_m2m_ctx_release" },
	{ 0xd3b43007, "v4l2_fh_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x568b084f, "media_device_init" },
	{ 0x101e5022, "mmal_vchi_buffer_cleanup" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x32cd8d92, "media_device_unregister" },
	{ 0x6a15ad16, "video_ioctl2" },
	{ 0xdd83a671, "vb2_core_expbuf_dmabuf" },
	{ 0x681031c0, "v4l2_m2m_job_finish" },
	{ 0x4badc71a, "vchiq_mmal_port_parameter_get" },
	{ 0x4ae786e5, "v4l2_fh_exit" },
	{ 0xd36daa13, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-mem2mem,bcm2835-mmal-vchiq,videodev,videobuf2-v4l2,videobuf2-common,media,videobuf2-dma-contig";


MODULE_INFO(srcversion, "959A4D7CC2FA65007369CAA");
