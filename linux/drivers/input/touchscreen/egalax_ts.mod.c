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
	{ 0xa1633992, "_dev_err" },
	{ 0x175ec858, "input_register_device" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x42382c7c, "input_mt_init_slots" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0xfe990052, "gpio_free" },
	{ 0x8b0ed55b, "gpiod_direction_input" },
	{ 0xc67f27a7, "gpiod_set_raw_value" },
	{ 0x185038dd, "gpiod_direction_output_raw" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0xf9b4ba0d, "devm_input_allocate_device" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe84748c2, "input_mt_report_pointer_emulation" },
	{ 0x86d34903, "input_mt_report_slot_state" },
	{ 0x3b3a1192, "input_event" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ceeti,egalax_ts");
MODULE_ALIAS("of:N*T*Ceeti,egalax_tsC*");
MODULE_ALIAS("i2c:egalax_ts");

MODULE_INFO(srcversion, "C757A10FF0D460470DAE851");
