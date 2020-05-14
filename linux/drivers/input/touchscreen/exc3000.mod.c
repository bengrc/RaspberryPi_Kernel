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
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf0f168e6, "touchscreen_report_pos" },
	{ 0x86d34903, "input_mt_report_slot_state" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x175ec858, "input_register_device" },
	{ 0x42382c7c, "input_mt_init_slots" },
	{ 0x70d2f23, "touchscreen_parse_properties" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0xf9b4ba0d, "devm_input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3b3a1192, "input_event" },
	{ 0x8a8e5d40, "input_mt_sync_frame" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ceeti,exc3000");
MODULE_ALIAS("of:N*T*Ceeti,exc3000C*");
MODULE_ALIAS("i2c:exc3000");

MODULE_INFO(srcversion, "2509CDE0BC3AE3346D5E89C");
