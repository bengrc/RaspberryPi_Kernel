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
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xc9101ced, "arizona_dev_init" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0xc30fd29e, "wm5102_i2c_regmap" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xa1633992, "_dev_err" },
	{ 0x7552cdd0, "arizona_of_get_type" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9745ca94, "arizona_dev_exit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:wm5102");
MODULE_ALIAS("i2c:wm5110");
MODULE_ALIAS("i2c:wm8280");
MODULE_ALIAS("i2c:wm8997");
MODULE_ALIAS("i2c:wm8998");
MODULE_ALIAS("i2c:wm1814");

MODULE_INFO(srcversion, "08AAF2E59837E559B29D276");
