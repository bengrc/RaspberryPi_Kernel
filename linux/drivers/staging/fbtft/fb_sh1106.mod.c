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
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0x5f754e5a, "memset" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4c65de4, "fbtft_write_buf_dc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xf9729750, "fbtft_probe_common" },
	{ 0xb1cb91b3, "fbtft_remove_common" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

MODULE_ALIAS("of:N*T*Csinowealth,sh1106");
MODULE_ALIAS("of:N*T*Csinowealth,sh1106C*");

MODULE_INFO(srcversion, "263EACA724382A600111637");
