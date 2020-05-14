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
	{ 0x7c32d0f0, "printk" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x1d37eeed, "ioremap" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xa1633992, "_dev_err" },
	{ 0x175ec858, "input_register_device" },
	{ 0x42382c7c, "input_mt_init_slots" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0x12d8a2c7, "dma_alloc_from_dev_coherent" },
	{ 0x8ccc143c, "input_allocate_device" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x6d0bad1f, "rpi_firmware_get" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe84748c2, "input_mt_report_pointer_emulation" },
	{ 0x86d34903, "input_mt_report_slot_state" },
	{ 0x3b3a1192, "input_event" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0x75214c3c, "dma_release_from_dev_coherent" },
	{ 0x54111370, "kthread_stop" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crpi,rpi-ft5406");
MODULE_ALIAS("of:N*T*Crpi,rpi-ft5406C*");

MODULE_INFO(srcversion, "014696001B3FC0AFFBD0E67");
