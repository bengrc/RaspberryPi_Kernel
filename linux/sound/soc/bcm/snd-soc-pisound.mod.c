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
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x2978fde1, "gpiod_direction_output" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x13ddb114, "spi_setup" },
	{ 0xb179808f, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc43f8d7, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa0b6c3dd, "kobject_create_and_add" },
	{ 0xc56b13e9, "snd_pcm_hw_constraint_mask64" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d7bfa3, "snd_pcm_hw_constraint_list" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x9e9e3e7, "snd_rawmidi_transmit_peek" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8b0ed55b, "gpiod_direction_input" },
	{ 0x4113830f, "spi_bus_type" },
	{ 0xfc8a6297, "snd_soc_unregister_card" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x99997d3a, "bus_find_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xde1ad932, "spi_sync" },
	{ 0xdedea034, "snd_soc_dai_set_bclk_ratio" },
	{ 0xf117304f, "snd_rawmidi_transmit_ack" },
	{ 0x2052578d, "gpiod_unexport" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd34d441c, "snd_ctl_new1" },
	{ 0x8e1946b6, "gpiod_get_value" },
	{ 0x525c953d, "kernel_kobj" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x493fbea4, "gpiod_export" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0xda94c15b, "snd_pcm_hw_constraint_minmax" },
	{ 0xa58472d, "gpiod_get_index" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4d3d688, "snd_ctl_add" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x8722ee95, "gpiod_set_value" },
	{ 0xee3b7bd2, "snd_soc_register_card" },
	{ 0xc153dc88, "gpiod_put" },
	{ 0x760b4cc9, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Cblokaslabs,pisound");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisoundC*");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spi");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spiC*");

MODULE_INFO(srcversion, "DE8FE20557F2F7E85534047");
