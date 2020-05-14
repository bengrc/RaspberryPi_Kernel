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
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xa1633992, "_dev_err" },
	{ 0x8ff768ee, "nand_scan_with_ids" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xab7a4d1d, "bcm2835_smi_set_regs_from_settings" },
	{ 0xf6720336, "bcm2835_smi_get_settings_from_regs" },
	{ 0xfacc735c, "bcm2835_smi_get" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0x5104af85, "nand_release" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb33bd6cb, "bcm2835_smi_read_buf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa00dc18f, "bcm2835_smi_write_buf" },
	{ 0x72db83c4, "bcm2835_smi_set_address" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nand,bcm2835_smi";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-nand");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-nandC*");

MODULE_INFO(srcversion, "B51E6C63F4AE301A7DEFBB1");
