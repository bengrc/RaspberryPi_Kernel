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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x578ab35, "w1_unregister_family" },
	{ 0x3c2859e9, "w1_register_family" },
	{ 0x86fb87cf, "_dev_notice" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc862076, "power_supply_register" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xb81960ca, "snprintf" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x1d41ab7d, "power_supply_am_i_supplied" },
	{ 0x19dcbe4d, "power_supply_changed" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x38f0e5bd, "power_supply_get_drvdata" },
	{ 0xd3b34cf0, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x5f65e119, "w1_write_block" },
	{ 0xe52622bb, "w1_read_block" },
	{ 0xfb880f4a, "w1_write_8" },
	{ 0x426ae9b2, "w1_reset_select_slave" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "CEBED0968B0BEB73D67F4D8");
