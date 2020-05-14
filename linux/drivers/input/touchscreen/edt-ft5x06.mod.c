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
	{ 0x1061a901, "simple_open" },
	{ 0xfdb00a00, "simple_attr_release" },
	{ 0xa4cf40cd, "simple_attr_write" },
	{ 0x716fb529, "simple_attr_read" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x94f00540, "debugfs_create_u16" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x391d538b, "dev_driver_string" },
	{ 0x175ec858, "input_register_device" },
	{ 0x529c09ab, "devm_device_add_group" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x2b85b7ae, "irq_get_irq_data" },
	{ 0x42382c7c, "input_mt_init_slots" },
	{ 0x70d2f23, "touchscreen_parse_properties" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0xcba6de06, "device_property_read_u32_array" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf9b4ba0d, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0xf8ce5fa3, "of_device_get_match_data" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xdec7b88, "simple_attr_open" },
	{ 0xe84748c2, "input_mt_report_pointer_emulation" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xf0f168e6, "touchscreen_report_pos" },
	{ 0x86d34903, "input_mt_report_slot_state" },
	{ 0x3b3a1192, "input_event" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa1633992, "_dev_err" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "1437313B51A94BC18286C2B");
