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
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xde716b52, "devm_rc_register_device" },
	{ 0xd2027ac4, "of_get_property" },
	{ 0x4ccabcb, "devm_rc_allocate_device" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0x815d4afc, "devm_gpiod_get" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xa730c463, "ir_raw_event_store_edge" },
	{ 0x8e1946b6, "gpiod_get_value" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgpio-ir-receiver");
MODULE_ALIAS("of:N*T*Cgpio-ir-receiverC*");

MODULE_INFO(srcversion, "A2FA20CC2AAEA3CAE272F12");
