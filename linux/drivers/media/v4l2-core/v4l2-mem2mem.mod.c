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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xb74a0255, "media_device_unregister_entity" },
	{ 0x13ac4b22, "vb2_mmap" },
	{ 0xf904ee5f, "media_devnode_create" },
	{ 0xe2fcc31d, "vb2_create_bufs" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb6f02c00, "media_remove_intf_links" },
	{ 0xc98cc173, "vb2_prepare_buf" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0x982c86bb, "v4l2_event_pending" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3fe8bbfc, "vb2_qbuf" },
	{ 0x1ad7f26, "vb2_querybuf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4fdb023a, "media_device_register_entity" },
	{ 0x586e908f, "vb2_streamon" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xcdd912c3, "vb2_expbuf" },
	{ 0x1000e51, "schedule" },
	{ 0xc6234a50, "media_create_pad_link" },
	{ 0x698631b0, "vb2_reqbufs" },
	{ 0xe884fec2, "media_entity_remove_links" },
	{ 0xd7958ec3, "media_create_intf_link" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xe44818be, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x276bf8a0, "vb2_queue_release" },
	{ 0xd1ed3c36, "vb2_streamoff" },
	{ 0x4cdbdf66, "media_devnode_remove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=media,videobuf2-common,videobuf2-v4l2,videodev";


MODULE_INFO(srcversion, "E11AA88F9FEC774EA698CD7");
