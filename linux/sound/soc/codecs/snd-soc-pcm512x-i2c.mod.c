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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0x88479036, "pcm512x_regmap" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb6845e3b, "pcm512x_pm_ops" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x31fa35a5, "pcm512x_probe" },
	{ 0xf070c7c0, "pcm512x_remove" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-pcm512x";

MODULE_ALIAS("of:N*T*Cti,pcm5121");
MODULE_ALIAS("of:N*T*Cti,pcm5121C*");
MODULE_ALIAS("of:N*T*Cti,pcm5122");
MODULE_ALIAS("of:N*T*Cti,pcm5122C*");
MODULE_ALIAS("of:N*T*Cti,pcm5141");
MODULE_ALIAS("of:N*T*Cti,pcm5141C*");
MODULE_ALIAS("of:N*T*Cti,pcm5142");
MODULE_ALIAS("of:N*T*Cti,pcm5142C*");
MODULE_ALIAS("i2c:pcm5121");
MODULE_ALIAS("i2c:pcm5122");
MODULE_ALIAS("i2c:pcm5141");
MODULE_ALIAS("i2c:pcm5142");

MODULE_INFO(srcversion, "FFF2536D678BF2A82703E96");
