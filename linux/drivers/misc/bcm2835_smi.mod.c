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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa48dda3a, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xd68504d3, "dma_request_slave_channel" },
	{ 0xc64803ce, "platform_get_resource" },
	{ 0xa1633992, "_dev_err" },
	{ 0x8d419e57, "of_get_address" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x28be86a7, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b53df95, "dma_wait_for_async_tx" },
	{ 0x581cde4e, "up" },
	{ 0xe0ab4c66, "of_find_device_by_node" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xd0e9c7f, "dmam_alloc_coherent" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smiC*");

MODULE_INFO(srcversion, "BD4D3197D66512576DCCB4D");
