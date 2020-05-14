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
	{ 0x8ae137ee, "param_ops_string" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xbaa9a2c9, "platform_get_irq" },
	{ 0xa1633992, "_dev_err" },
	{ 0x650d0951, "__uio_register_device" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0x917fe26f, "uio_unregister_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uio";

MODULE_ALIAS("of:N*T*");
MODULE_ALIAS("of:N*T*C*");

MODULE_INFO(srcversion, "F9FE5D35CB2511406300EAF");
