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
	{ 0x52526626, "device_remove_file" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xabdaa9c5, "pci_write_config_dword" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdd226fa9, "__raw_readsw" },
	{ 0x7dcdf3be, "driver_register" },
	{ 0xf7163ec9, "__raw_readsb" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0x737ca1c7, "pci_write_config_word" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe3b02ae1, "pci_disable_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xad4f3835, "pci_release_regions" },
	{ 0xdad97f94, "__raw_writesw" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xfe2806b3, "_dev_emerg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x21c3bca3, "pci_set_master" },
	{ 0x5f754e5a, "memset" },
	{ 0xe864e62d, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0xab4a5619, "pci_iounmap" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1d37eeed, "ioremap" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf534a32e, "pci_read_config_word" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf18fb489, "bus_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x5b548d48, "pci_read_config_dword" },
	{ 0xdd452e5a, "pci_unregister_driver" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0xf0ed2ef4, "__raw_writesb" },
	{ 0xecf8a3b4, "__raw_writesl" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x63ef84d5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6a18c6b5, "__pci_register_driver" },
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

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1C975B2A717F5E41D5B32C0");
