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
	{ 0x4183f13d, "mipi_dbi_debugfs_init" },
	{ 0xdaeaa570, "drm_release" },
	{ 0xd8d6e853, "drm_open" },
	{ 0x2905b755, "drm_gem_cma_mmap" },
	{ 0x18240536, "drm_ioctl" },
	{ 0xb3b49dbb, "drm_poll" },
	{ 0xc5d34783, "drm_read" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x40af5c5d, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0x33b380c6, "tinydrm_display_pipe_update" },
	{ 0xb9e2a59e, "mipi_dbi_pipe_disable" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xd451d6f3, "drm_dev_printk" },
	{ 0x139da6fb, "devm_tinydrm_register" },
	{ 0x359e6621, "mipi_dbi_init" },
	{ 0x35c0a0b2, "mipi_dbi_spi_init" },
	{ 0xcba6de06, "device_property_read_u32_array" },
	{ 0x3c244199, "devm_of_find_backlight" },
	{ 0x91866963, "devm_regulator_get" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe3be79fc, "mipi_dbi_enable_flush" },
	{ 0xf9a482f9, "msleep" },
	{ 0x266ef4f3, "mipi_dbi_command_stackbuf" },
	{ 0x9e1c936f, "mipi_dbi_poweron_conditional_reset" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe9da6c10, "tinydrm_shutdown" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,tinydrm,mipi-dbi,drm_kms_helper";

MODULE_ALIAS("spi:mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qtC*");

MODULE_INFO(srcversion, "6DD2FA06D11528F7C82F9ED");
