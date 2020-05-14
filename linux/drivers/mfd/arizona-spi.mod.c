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
	{ 0xb7ffd4bc, "arizona_pm_ops" },
	{ 0x3dc526a9, "arizona_of_match" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xa1633992, "_dev_err" },
	{ 0xc9101ced, "arizona_dev_init" },
	{ 0xf686693, "__devm_regmap_init_spi" },
	{ 0x803713d2, "wm5102_spi_regmap" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x7552cdd0, "arizona_of_get_type" },
	{ 0xd2a64942, "spi_get_device_id" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9745ca94, "arizona_dev_exit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:wm5102");
MODULE_ALIAS("spi:wm5110");
MODULE_ALIAS("spi:wm8280");
MODULE_ALIAS("spi:wm1831");
MODULE_ALIAS("spi:cs47l24");

MODULE_INFO(srcversion, "8254B9613C99874B614FC85");
