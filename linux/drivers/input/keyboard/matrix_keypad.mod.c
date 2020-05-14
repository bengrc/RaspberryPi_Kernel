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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b3a1192, "input_event" },
	{ 0x2f59b831, "gpiod_get_raw_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xd2027ac4, "of_get_property" },
	{ 0xa3deef4f, "of_count_phandle_with_args" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x175ec858, "input_register_device" },
	{ 0x1c132024, "request_any_context_irq" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0xa1633992, "_dev_err" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xd6d1129e, "input_set_capability" },
	{ 0x28e5d231, "matrix_keypad_build_keymap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8ccc143c, "input_allocate_device" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x185038dd, "gpiod_direction_output_raw" },
	{ 0x8b0ed55b, "gpiod_direction_input" },
	{ 0x50f61d60, "gpiod_set_raw_value_cansleep" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x37a0cba, "kfree" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=matrix-keymap";

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad");
MODULE_ALIAS("of:N*T*Cgpio-matrix-keypadC*");

MODULE_INFO(srcversion, "DD9CE2D3AB1816B2A6662F0");
