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
	{ 0x2ba28f3a, "tinydrm_swab16" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f8a9562, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x721c97f1, "tinydrm_xrgb8888_to_rgb565" },
	{ 0x855178b4, "drm_mode_config_reset" },
	{ 0x978b0c30, "regulator_disable" },
	{ 0xe7917cf6, "drm_gem_fb_create_handle" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0xd07da2bc, "single_release" },
	{ 0x8e745b78, "tinydrm_spi_max_transfer_size" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x3d6a74e4, "devm_tinydrm_init" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xae4ff36b, "tinydrm_spi_transfer" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x9943b1a3, "seq_read" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x25f36d88, "tinydrm_merge_clips" },
	{ 0xbeaa5c0, "drm_fb_cma_get_gem_obj" },
	{ 0x4cc4454c, "tinydrm_spi_bpw_supported" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa1633992, "_dev_err" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x611da015, "dma_buf_begin_cpu_access" },
	{ 0xd451d6f3, "drm_dev_printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1f07a0fc, "tinydrm_memcpy" },
	{ 0x99eb3ac2, "tinydrm_display_pipe_init" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x484ecd4b, "dma_buf_end_cpu_access" },
	{ 0xe048d679, "tinydrm_fb_dirty" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf5e18bfd, "regulator_enable" },
	{ 0x271a31d9, "drm_gem_fb_destroy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tinydrm,drm,drm_kms_helper";


MODULE_INFO(srcversion, "8A8484F509E62BF370EA02E");
