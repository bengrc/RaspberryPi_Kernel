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
	{ 0x426ae9b2, "w1_reset_select_slave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xafc7c2e6, "platform_device_alloc" },
	{ 0x74e3f75e, "platform_device_add" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd12088ea, "platform_device_unregister" },
	{ 0x5f65e119, "w1_write_block" },
	{ 0xfb880f4a, "w1_write_8" },
	{ 0xe52622bb, "w1_read_block" },
	{ 0x3c2859e9, "w1_register_family" },
	{ 0xa3f8a07f, "platform_device_put" },
	{ 0x578ab35, "w1_unregister_family" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "F2F9352E8CA44A6F5B55E33");
