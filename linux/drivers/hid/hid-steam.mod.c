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
	{ 0x5c54d028, "param_get_bool" },
	{ 0xef0c7801, "hid_unregister_driver" },
	{ 0x2c23599b, "__hid_register_driver" },
	{ 0xa80822eb, "hid_hw_open" },
	{ 0xa1422ebd, "hid_add_device" },
	{ 0x5ba698ca, "hid_hw_start" },
	{ 0x8a47b56f, "hid_allocate_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xd589750f, "hid_open_report" },
	{ 0x1820670d, "power_supply_powers" },
	{ 0xc862076, "power_supply_register" },
	{ 0xf1809d95, "devm_kasprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x889a0bc6, "hid_hw_stop" },
	{ 0xd22ba88d, "hid_hw_close" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2cc4f2c1, "hid_destroy_device" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0xd3b34cf0, "power_supply_unregister" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x19dcbe4d, "power_supply_changed" },
	{ 0xf29d6f39, "hid_input_report" },
	{ 0x3b3a1192, "input_event" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x44753586, "param_set_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x38f0e5bd, "power_supply_get_drvdata" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x175ec858, "input_register_device" },
	{ 0x66ed3e19, "input_alloc_absinfo" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0xd6d1129e, "input_set_capability" },
	{ 0x8ccc143c, "input_allocate_device" },
	{ 0x5495392, "hid_debug" },
	{ 0x5a3be0be, "hid_parse_report" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa1633992, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9d669763, "memcpy" },
	{ 0x90989c03, "hid_alloc_report_buf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "1994299EDC1B9E7BED86D38");
