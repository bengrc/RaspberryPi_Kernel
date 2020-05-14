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
	{ 0x79fc61ee, "drm_dev_register" },
	{ 0x63ef2fa5, "drm_dev_alloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x66ae7004, "drm_mode_config_cleanup" },
	{ 0x484d9be9, "drm_atomic_helper_connector_reset" },
	{ 0x58676374, "drm_helper_probe_single_connector_modes" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9611fc3e, "drm_dev_unref" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x8bd267fc, "drm_connector_cleanup" },
	{ 0x225af7bc, "drm_simple_display_pipe_init" },
	{ 0xa86c9d47, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xf6ca3df9, "dma_buf_vunmap" },
	{ 0xab81d21f, "drm_fbdev_generic_setup" },
	{ 0x890447f1, "drm_gem_fb_create_with_funcs" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c1c5a1c, "drm_mode_copy" },
	{ 0xb35fb5e1, "drm_dev_unregister" },
	{ 0x1636571f, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x43904821, "drm_mode_duplicate" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa1633992, "_dev_err" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xddceb699, "drm_connector_init" },
	{ 0x236bfcff, "drm_modeset_unlock" },
	{ 0xb51877be, "drm_modeset_lock" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x7d3064b1, "devm_add_action" },
	{ 0x787f9135, "drm_atomic_helper_connector_destroy_state" },
	{ 0xc2acc033, "hex_dump_to_buffer" },
	{ 0xf5f309a3, "drm_atomic_helper_check" },
	{ 0x88573266, "drm_atomic_helper_commit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x9f5abaa0, "drm_crtc_send_vblank_event" },
	{ 0xd14f4ea7, "drm_format_plane_cpp" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xd0a5ad35, "drm_gem_cma_prime_import_sg_table" },
	{ 0xdb5503d7, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x61d62576, "drm_atomic_helper_shutdown" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1c5d222c, "drm_mode_probed_add" },
	{ 0x4a5139b3, "drm_gem_cma_free_object" },
	{ 0xd70027c1, "dma_buf_vmap" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xffa44d9c, "drm_dev_enter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper";


MODULE_INFO(srcversion, "4996CF4CB4AB6B00040C28A");
