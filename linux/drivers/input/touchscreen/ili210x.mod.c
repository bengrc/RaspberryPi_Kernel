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
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe84748c2, "input_mt_report_pointer_emulation" },
	{ 0xf0f168e6, "touchscreen_report_pos" },
	{ 0x86d34903, "input_mt_report_slot_state" },
	{ 0x3b3a1192, "input_event" },
	{ 0x5f754e5a, "memset" },
	{ 0x175ec858, "input_register_device" },
	{ 0x529c09ab, "devm_device_add_group" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x42382c7c, "input_mt_init_slots" },
	{ 0x70d2f23, "touchscreen_parse_properties" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf9b4ba0d, "devm_input_allocate_device" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d3064b1, "devm_add_action" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0xa1633992, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cilitek,ili210x");
MODULE_ALIAS("of:N*T*Cilitek,ili210xC*");
MODULE_ALIAS("of:N*T*Cilitek,ili251x");
MODULE_ALIAS("of:N*T*Cilitek,ili251xC*");
MODULE_ALIAS("i2c:ili210x");
MODULE_ALIAS("i2c:ili251x");

MODULE_INFO(srcversion, "0CDBE4329CBE7C223A9A607");
