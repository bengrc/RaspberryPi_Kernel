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
	{ 0x445c816c, "ida_destroy" },
	{ 0xef0c7801, "hid_unregister_driver" },
	{ 0x2c23599b, "__hid_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x23841469, "hid_validate_values" },
	{ 0x2fd87284, "devm_of_led_classdev_register" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0xa80822eb, "hid_hw_open" },
	{ 0x1820670d, "power_supply_powers" },
	{ 0x2720f93f, "devm_power_supply_register" },
	{ 0xf1809d95, "devm_kasprintf" },
	{ 0xa749dde3, "input_ff_create_memless" },
	{ 0xd6d1129e, "input_set_capability" },
	{ 0x71c90087, "memcmp" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0x42382c7c, "input_mt_init_slots" },
	{ 0x982f2f0e, "__hid_request" },
	{ 0x5ba698ca, "hid_hw_start" },
	{ 0xd589750f, "hid_open_report" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x52526626, "device_remove_file" },
	{ 0x889a0bc6, "hid_hw_stop" },
	{ 0x21af32f7, "ida_free" },
	{ 0xd22ba88d, "hid_hw_close" },
	{ 0x86d34903, "input_mt_report_slot_state" },
	{ 0x8a8e5d40, "input_mt_sync_frame" },
	{ 0x3b3a1192, "input_event" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x38f0e5bd, "power_supply_get_drvdata" },
	{ 0x66ed3e19, "input_alloc_absinfo" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0x175ec858, "input_register_device" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xf9b4ba0d, "devm_input_allocate_device" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb81960ca, "snprintf" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x122170da, "crc32_le" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ff-memless";

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");

MODULE_INFO(srcversion, "92509F6D8269EA49E833A9E");
