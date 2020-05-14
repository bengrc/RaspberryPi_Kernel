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
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0x66c06339, "__pm_runtime_set_status" },
	{ 0x57a13eb4, "devm_gpiochip_add_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd7a09d40, "pwmchip_add" },
	{ 0xaeaf222b, "device_property_present" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1a2fc39c, "gpiochip_get_data" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0x9df1d98f, "pwmchip_remove" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwm");
MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwmC*");
MODULE_ALIAS("i2c:pca9685");

MODULE_INFO(srcversion, "137ECCD5444D4E8CE7F631E");
