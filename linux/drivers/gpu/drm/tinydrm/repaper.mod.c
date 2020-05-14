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
	{ 0x2ec77622, "drm_gem_cma_vm_ops" },
	{ 0x8ea553b6, "drm_gem_cma_dumb_create" },
	{ 0xbb9f1e48, "drm_gem_cma_prime_mmap" },
	{ 0x20cffef2, "drm_gem_cma_prime_vunmap" },
	{ 0xce3147ca, "drm_gem_cma_prime_vmap" },
	{ 0x69fce1be, "tinydrm_gem_cma_prime_import_sg_table" },
	{ 0x9336bc27, "drm_gem_cma_prime_get_sg_table" },
	{ 0x3cdc9abf, "drm_gem_prime_import" },
	{ 0xe4dd71dc, "drm_gem_prime_export" },
	{ 0x5649222d, "drm_gem_prime_fd_to_handle" },
	{ 0x1a75568c, "drm_gem_prime_handle_to_fd" },
	{ 0xdfd3d381, "drm_gem_cma_print_info" },
	{ 0x30b95ada, "tinydrm_gem_cma_free_object" },
	{ 0xdaeaa570, "drm_release" },
	{ 0xd8d6e853, "drm_open" },
	{ 0x2905b755, "drm_gem_cma_mmap" },
	{ 0x18240536, "drm_ioctl" },
	{ 0xb3b49dbb, "drm_poll" },
	{ 0xc5d34783, "drm_read" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x40af5c5d, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0x33b380c6, "tinydrm_display_pipe_update" },
	{ 0xe048d679, "tinydrm_fb_dirty" },
	{ 0xe7917cf6, "drm_gem_fb_create_handle" },
	{ 0x271a31d9, "drm_gem_fb_destroy" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xa1633992, "_dev_err" },
	{ 0x7fcce07f, "gpiod_get_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x484ecd4b, "dma_buf_end_cpu_access" },
	{ 0x1aaf69cb, "tinydrm_xrgb8888_to_gray8" },
	{ 0x611da015, "dma_buf_begin_cpu_access" },
	{ 0x610e1fd1, "thermal_zone_get_temp" },
	{ 0xbeaa5c0, "drm_fb_cma_get_gem_obj" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xd2a64942, "spi_get_device_id" },
	{ 0x139da6fb, "devm_tinydrm_register" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x855178b4, "drm_mode_config_reset" },
	{ 0x99eb3ac2, "tinydrm_display_pipe_init" },
	{ 0x3d6a74e4, "devm_tinydrm_init" },
	{ 0xd451d6f3, "drm_dev_printk" },
	{ 0x577558e5, "thermal_zone_get_zone_by_name" },
	{ 0x850c6b8a, "device_property_read_string" },
	{ 0x815d4afc, "devm_gpiod_get" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x47820ec9, "of_match_device" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe9da6c10, "tinydrm_shutdown" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,tinydrm,drm_kms_helper";

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "8DB9B51A4313B2A4F95E4AB");
