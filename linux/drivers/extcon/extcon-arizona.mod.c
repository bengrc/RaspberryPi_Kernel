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
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x175ec858, "input_register_device" },
	{ 0x95771b0, "arizona_clk32k_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xaeaf222b, "device_property_present" },
	{ 0xcba6de06, "device_property_read_u32_array" },
	{ 0x33db7ce9, "gpiod_get_optional" },
	{ 0x8f756422, "arizona_request_irq" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0xd6d1129e, "input_set_capability" },
	{ 0x8090c15c, "devm_gpio_request_one" },
	{ 0xf9b4ba0d, "devm_input_allocate_device" },
	{ 0xb8a61778, "devm_extcon_dev_register" },
	{ 0xddf1818b, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x91866963, "devm_regulator_get" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3b3a1192, "input_event" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x95915fbf, "regmap_read" },
	{ 0xaeea2b6f, "extcon_get_state" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf2ee3653, "regulator_allow_bypass" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x1027251, "__pm_runtime_suspend" },
	{ 0xf5e18bfd, "regulator_enable" },
	{ 0x91280506, "snd_soc_component_disable_pin" },
	{ 0x239e7675, "snd_soc_dapm_sync" },
	{ 0x81fbabf6, "snd_soc_component_force_enable_pin" },
	{ 0x50f61d60, "gpiod_set_raw_value_cansleep" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0xdf94d12c, "extcon_set_state_sync" },
	{ 0xa1633992, "_dev_err" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0x978b0c30, "regulator_disable" },
	{ 0x10fd4925, "arizona_clk32k_disable" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x989e04c9, "arizona_free_irq" },
	{ 0x1074c54c, "arizona_set_irq_wake" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0xc153dc88, "gpiod_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=extcon-core,snd-soc-core";


MODULE_INFO(srcversion, "8F78A5F50D957CCB8E8DB1C");
