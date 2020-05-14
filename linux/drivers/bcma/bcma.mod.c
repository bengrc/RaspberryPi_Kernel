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
	{ 0x803a331f, "bus_register" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xb51d916, "of_translate_address" },
	{ 0xabdaa9c5, "pci_write_config_dword" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdd226fa9, "__raw_readsw" },
	{ 0x7dcdf3be, "driver_register" },
	{ 0xf7163ec9, "__raw_readsb" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf0bc12da, "irq_create_of_mapping" },
	{ 0x1efbf2e9, "pcie_set_readrq" },
	{ 0xe3b02ae1, "pci_disable_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xad4f3835, "pci_release_regions" },
	{ 0xdad97f94, "__raw_writesw" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xee0e083e, "platform_device_register_full" },
	{ 0x91715312, "sprintf" },
	{ 0xa9948587, "of_dma_configure" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x21c3bca3, "pci_set_master" },
	{ 0x5f754e5a, "memset" },
	{ 0xe864e62d, "device_register" },
	{ 0xab4a5619, "pci_iounmap" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1d37eeed, "ioremap" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd12088ea, "platform_device_unregister" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf18fb489, "bus_unregister" },
	{ 0x8d419e57, "of_get_address" },
	{ 0x12a38747, "usleep_range" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1b2f588a, "of_get_next_child" },
	{ 0x8c1bb840, "of_irq_parse_raw" },
	{ 0x5b548d48, "pci_read_config_dword" },
	{ 0xdd452e5a, "pci_unregister_driver" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x23086c1d, "of_irq_parse_one" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0xf0ed2ef4, "__raw_writesb" },
	{ 0xecf8a3b4, "__raw_writesl" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x63ef84d5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6a18c6b5, "__pci_register_driver" },
	{ 0xe38415cf, "of_platform_default_populate" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7499e75c, "pci_iomap" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x44b02d02, "pci_enable_device" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d00000576sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004331sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004359sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000105Bsd0000E092bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000103Csd0000804Abc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9437261515F728C92841B34");
