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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x80c8b05d, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x52526626, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x807d4746, "framebuffer_release" },
	{ 0xb3e8d6e1, "fb_sys_read" },
	{ 0xb2c69a3, "backlight_device_register" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0xbd6515f0, "sys_copyarea" },
	{ 0x91715312, "sprintf" },
	{ 0x911ee79e, "of_prop_next_u32" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x34438e7, "register_framebuffer" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0x8090c15c, "devm_gpio_request_one" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x61651be, "strcat" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x45dd4a41, "sys_fillrect" },
	{ 0xc2acc033, "hex_dump_to_buffer" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd5806961, "sys_imageblit" },
	{ 0x18b56583, "fb_sys_write" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0x391d538b, "dev_driver_string" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xaf2baebb, "framebuffer_alloc" },
	{ 0x43e1d70a, "fb_deferred_io_cleanup" },
	{ 0xee63647, "fb_deferred_io_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xc67f27a7, "gpiod_set_raw_value" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x50f61d60, "gpiod_set_raw_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca36db50, "gpiod_get_raw_value" },
	{ 0x77bc13a0, "strim" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8bb5ab2d, "backlight_device_unregister" },
	{ 0x931bbbfe, "param_ops_ulong" },
	{ 0x8b578a8a, "vscnprintf" },
	{ 0x471340a, "unregister_framebuffer" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,syscopyarea,sysfillrect,sysimgblt";


MODULE_INFO(srcversion, "00C9DB8D20B47FB536BC824");
