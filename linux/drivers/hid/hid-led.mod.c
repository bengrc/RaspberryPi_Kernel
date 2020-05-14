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
	{ 0x7d54146, "param_ops_bool" },
	{ 0xef0c7801, "hid_unregister_driver" },
	{ 0x2c23599b, "__hid_register_driver" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x889a0bc6, "hid_hw_stop" },
	{ 0x5ba698ca, "hid_hw_start" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd589750f, "hid_open_report" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x2fd87284, "devm_of_led_classdev_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9d669763, "memcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00001294p00001320");
MODULE_ALIAS("hid:b0003g*v00001D34p00000004");
MODULE_ALIAS("hid:b0003g*v00001D34p0000000A");
MODULE_ALIAS("hid:b0003g*v000027B8p000001ED");
MODULE_ALIAS("hid:b0003g*v00000FC5p0000B080");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F372");

MODULE_INFO(srcversion, "13C33B4E8D8ADB5035EEEC8");
