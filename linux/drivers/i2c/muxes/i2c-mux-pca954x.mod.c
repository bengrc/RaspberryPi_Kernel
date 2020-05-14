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
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x6ff3b4b4, "i2c_mux_add_adapter" },
	{ 0xa1633992, "_dev_err" },
	{ 0x85696c4, "irq_create_mapping" },
	{ 0x5bd019c9, "irq_set_chip_and_handler_name" },
	{ 0xa3e308fb, "handle_simple_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xe0230431, "__irq_domain_add" },
	{ 0x336b7ca2, "irq_domain_simple_ops" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x1a5090fb, "i2c_smbus_write_byte" },
	{ 0xd433dd1, "i2c_get_device_id" },
	{ 0xf8ce5fa3, "of_device_get_match_data" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x1404de7c, "i2c_mux_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9825ff7c, "__i2c_smbus_xfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x2f0bb835, "i2c_smbus_read_byte" },
	{ 0xd7417963, "i2c_mux_del_adapters" },
	{ 0x41fef3a6, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xbebdccd4, "irq_find_mapping" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux";

MODULE_ALIAS("of:N*T*Cnxp,pca9540");
MODULE_ALIAS("of:N*T*Cnxp,pca9540C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9542");
MODULE_ALIAS("of:N*T*Cnxp,pca9542C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9543");
MODULE_ALIAS("of:N*T*Cnxp,pca9543C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9544");
MODULE_ALIAS("of:N*T*Cnxp,pca9544C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9545");
MODULE_ALIAS("of:N*T*Cnxp,pca9545C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9546");
MODULE_ALIAS("of:N*T*Cnxp,pca9546C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9547");
MODULE_ALIAS("of:N*T*Cnxp,pca9547C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9548");
MODULE_ALIAS("of:N*T*Cnxp,pca9548C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9846");
MODULE_ALIAS("of:N*T*Cnxp,pca9846C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9847");
MODULE_ALIAS("of:N*T*Cnxp,pca9847C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9848");
MODULE_ALIAS("of:N*T*Cnxp,pca9848C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9849");
MODULE_ALIAS("of:N*T*Cnxp,pca9849C*");
MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");

MODULE_INFO(srcversion, "B6540BC4ADCB99B03089434");
