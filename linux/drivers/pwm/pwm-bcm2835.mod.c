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
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd7a09d40, "pwmchip_add" },
	{ 0x1e016508, "of_pwm_xlate_with_flags" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0xa48dda3a, "devm_ioremap_resource" },
	{ 0xc64803ce, "platform_get_resource" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x9df1d98f, "pwmchip_remove" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-pwm");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-pwmC*");

MODULE_INFO(srcversion, "3B1C3B75389431C16D0FDF7");
