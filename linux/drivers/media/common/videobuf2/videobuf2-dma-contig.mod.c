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
	{ 0x689f370d, "frame_vector_to_pages" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x75214c3c, "dma_release_from_dev_coherent" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0x92c4cbda, "dma_buf_detach" },
	{ 0x8f8b8994, "set_page_dirty_lock" },
	{ 0xc4ed5445, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xab31d65a, "vb2_create_framevec" },
	{ 0x12d8a2c7, "dma_alloc_from_dev_coherent" },
	{ 0xf6ca3df9, "dma_buf_vunmap" },
	{ 0x7b42e13d, "dma_common_get_sgtable" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xa97bf16c, "dma_buf_unmap_attachment" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2db0a65e, "sg_alloc_table" },
	{ 0x6acf273f, "dma_buf_map_attachment" },
	{ 0x94cd904f, "dma_buf_export" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x21ca6752, "dma_buf_attach" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x20726117, "vb2_common_vm_ops" },
	{ 0xa7976048, "sg_alloc_table_from_pages" },
	{ 0x1fe56ac7, "dma_common_mmap" },
	{ 0x13817285, "sg_free_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xd70027c1, "dma_buf_vmap" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-memops";


MODULE_INFO(srcversion, "74A51E7B97D4CDBF155AB4D");
