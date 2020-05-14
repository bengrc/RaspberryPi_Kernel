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
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0x5a0588, "input_register_polled_device" },
	{ 0x13ddb114, "spi_setup" },
	{ 0xa749dde3, "input_ff_create_memless" },
	{ 0xd6d1129e, "input_set_capability" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd7051b12, "devm_input_allocate_polled_device" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x3b3a1192, "input_event" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa1633992, "_dev_err" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev,ff-memless";

MODULE_ALIAS("spi:psxpad-spi");

MODULE_INFO(srcversion, "7522D66E2C6B14A975B49C8");
