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
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x8f9957ae, "gpiochip_set_nested_irqchip" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xe3461e01, "gpiochip_irqchip_add_key" },
	{ 0x51e6e6ff, "handle_level_irq" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x57a13eb4, "devm_gpiochip_add_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x1a2fc39c, "gpiochip_get_data" },
	{ 0x1a5090fb, "i2c_smbus_write_byte" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xbebdccd4, "irq_find_mapping" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2f0bb835, "i2c_smbus_read_byte" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pcf8574");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574a");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574aC*");
MODULE_ALIAS("of:N*T*Cnxp,pca8574");
MODULE_ALIAS("of:N*T*Cnxp,pca8574C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9670");
MODULE_ALIAS("of:N*T*Cnxp,pca9670C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9672");
MODULE_ALIAS("of:N*T*Cnxp,pca9672C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9674");
MODULE_ALIAS("of:N*T*Cnxp,pca9674C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca8575");
MODULE_ALIAS("of:N*T*Cnxp,pca8575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9671");
MODULE_ALIAS("of:N*T*Cnxp,pca9671C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9673");
MODULE_ALIAS("of:N*T*Cnxp,pca9673C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9675");
MODULE_ALIAS("of:N*T*Cnxp,pca9675C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7328");
MODULE_ALIAS("of:N*T*Cmaxim,max7328C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7329");
MODULE_ALIAS("of:N*T*Cmaxim,max7329C*");
MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");

MODULE_INFO(srcversion, "A62CF2957BAACA0C3502776");
