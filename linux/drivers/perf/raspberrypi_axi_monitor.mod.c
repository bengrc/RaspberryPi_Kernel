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
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xa48dda3a, "devm_ioremap_resource" },
	{ 0xc64803ce, "platform_get_resource" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2bdabd91, "debugfs_create_u32" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x895ff720, "of_property_read_u32_index" },
	{ 0x6d0bad1f, "rpi_firmware_get" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0x37a0cba, "kfree" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb81960ca, "snprintf" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa1633992, "_dev_err" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x54111370, "kthread_stop" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperf");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-axiperfC*");

MODULE_INFO(srcversion, "F5D3C3F86D41823E3F2971A");
