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
	{ 0x43745509, "param_ops_charp" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0x3835c8c6, "fbtft_write_spi_emulate_9" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x8495fad, "fbtft_write_gpio8_wr" },
	{ 0xdb141134, "fbtft_write_vmem16_bus16" },
	{ 0x78234f4b, "fbtft_write_gpio16_wr" },
	{ 0xdded4f8, "fbtft_write_gpio16_wr_latched" },
	{ 0x5f90bcde, "fbtft_write_reg16_bus16" },
	{ 0x62b4e705, "fbtft_write_vmem16_bus8" },
	{ 0xe756fbd2, "fbtft_register_framebuffer" },
	{ 0x4db6a618, "fbtft_register_backlight" },
	{ 0x854b93d4, "fbtft_write_reg8_bus8" },
	{ 0xe7b77228, "fbtft_write_vmem16_bus9" },
	{ 0x5a694594, "fbtft_write_reg8_bus9" },
	{ 0x81b130ea, "fbtft_write_spi" },
	{ 0xfef4cd00, "fbtft_write_reg16_bus8" },
	{ 0x2e0aee49, "fbtft_init_display" },
	{ 0xac9a81c7, "fbtft_framebuffer_alloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x7a5ad266, "fbtft_framebuffer_release" },
	{ 0xa25a5807, "fbtft_unregister_framebuffer" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

MODULE_ALIAS("platform:flexpfb");

MODULE_INFO(srcversion, "CABE5C45FF8167A57719B01");
