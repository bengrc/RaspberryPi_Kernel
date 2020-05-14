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
	{ 0xf9e73082, "scnprintf" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x34a2f2a3, "bitmap_zalloc" },
	{ 0x6eea09b9, "irq_of_parse_and_map" },
	{ 0x5314b09d, "fwnode_property_read_string" },
	{ 0x2f07df0f, "fwnode_property_present" },
	{ 0xaace0b9c, "fwnode_property_read_u32_array" },
	{ 0x5abbbfd7, "of_fwnode_ops" },
	{ 0x850c6b8a, "device_property_read_string" },
	{ 0xaeaf222b, "device_property_present" },
	{ 0xd1833f, "device_get_child_node_count" },
	{ 0x175ec858, "input_register_device" },
	{ 0x529c09ab, "devm_device_add_group" },
	{ 0x4cc913b1, "device_get_next_child_node" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0x8090c15c, "devm_gpio_request_one" },
	{ 0x8e41f17c, "fwnode_handle_put" },
	{ 0x1eb0f76c, "gpiod_set_debounce" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0x5c5bf0cf, "devm_request_any_context_irq" },
	{ 0x7d3064b1, "devm_add_action" },
	{ 0xd6d1129e, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x978905cf, "gpiod_is_active_low" },
	{ 0x6a95faf0, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf9b4ba0d, "devm_input_allocate_device" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa1633992, "_dev_err" },
	{ 0x3b3a1192, "input_event" },
	{ 0x7fcce07f, "gpiod_get_value_cansleep" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "06F5A4302CFCAB3BE669A6B");
