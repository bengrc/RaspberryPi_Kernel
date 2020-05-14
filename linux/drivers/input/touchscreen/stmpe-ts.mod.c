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
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x1739961f, "stmpe_reg_read" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3b3a1192, "input_event" },
	{ 0x6614889a, "stmpe_block_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa1633992, "_dev_err" },
	{ 0x175ec858, "input_register_device" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0xd6d1129e, "input_set_capability" },
	{ 0x2ce93437, "stmpe_reg_write" },
	{ 0xfad3b16a, "stmpe_enable" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xf9b4ba0d, "devm_input_allocate_device" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x1369ce98, "platform_get_irq_byname" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4e2de26, "stmpe_set_bits" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9acbbd96, "stmpe_disable" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cst,stmpe-ts");
MODULE_ALIAS("of:N*T*Cst,stmpe-tsC*");

MODULE_INFO(srcversion, "62045FBA1F14567190BBC33");
