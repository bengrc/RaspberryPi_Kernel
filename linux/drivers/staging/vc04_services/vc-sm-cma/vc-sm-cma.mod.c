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
	{ 0x32c3ca87, "v7_dma_flush_range" },
	{ 0x56253a11, "v7_dma_inv_range" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa7ab0408, "v7_dma_clean_range" },
	{ 0x75214c3c, "dma_release_from_dev_coherent" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x7f8a9562, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0xd07da2bc, "single_release" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0x92c4cbda, "dma_buf_detach" },
	{ 0x431f3c4b, "vchi_service_open" },
	{ 0xd0d9eeb6, "down_interruptible" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xc4ed5445, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x9943b1a3, "seq_read" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x4390690, "vchi_service_use" },
	{ 0x6216493d, "vchi_msg_peek" },
	{ 0x12d8a2c7, "dma_alloc_from_dev_coherent" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x42e7859a, "misc_register" },
	{ 0x7b42e13d, "dma_common_get_sgtable" },
	{ 0x5f754e5a, "memset" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xfc90ea41, "vchi_msg_remove" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x61cd0ac1, "dma_buf_fd" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0xfb7931f2, "dma_buf_put" },
	{ 0xb45f9c3e, "vchi_connect" },
	{ 0xcf748c43, "dma_buf_get" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xa97bf16c, "dma_buf_unmap_attachment" },
	{ 0xa22e9df3, "vchiq_add_connected_callback" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0x61275678, "idr_remove" },
	{ 0x2db0a65e, "sg_alloc_table" },
	{ 0x6acf273f, "dma_buf_map_attachment" },
	{ 0x94cd904f, "dma_buf_export" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x21ca6752, "dma_buf_attach" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x581cde4e, "up" },
	{ 0x3a32ed08, "set_user_nice" },
	{ 0x1fe56ac7, "dma_common_mmap" },
	{ 0x13817285, "sg_free_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xaf38e081, "idr_find" },
	{ 0x83ef67e5, "misc_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C4DEB8E0D2AEB887B60C049");
