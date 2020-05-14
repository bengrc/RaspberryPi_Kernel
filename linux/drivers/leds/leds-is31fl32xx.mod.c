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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0x2fd87284, "devm_of_led_classdev_register" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x1b2f588a, "of_get_next_child" },
	{ 0x47820ec9, "of_match_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa1633992, "_dev_err" },
	{ 0xba5921d, "i2c_smbus_write_byte_data" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:is31fl3236");
MODULE_ALIAS("i2c:is31fl3235");
MODULE_ALIAS("i2c:is31fl3218");
MODULE_ALIAS("i2c:sn3218");
MODULE_ALIAS("i2c:is31fl3216");
MODULE_ALIAS("i2c:sn3216");
MODULE_ALIAS("of:N*T*Cissi,is31fl3236");
MODULE_ALIAS("of:N*T*Cissi,is31fl3236C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3235");
MODULE_ALIAS("of:N*T*Cissi,is31fl3235C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3218");
MODULE_ALIAS("of:N*T*Cissi,is31fl3218C*");
MODULE_ALIAS("of:N*T*Csi-en,sn3218");
MODULE_ALIAS("of:N*T*Csi-en,sn3218C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3216");
MODULE_ALIAS("of:N*T*Cissi,is31fl3216C*");
MODULE_ALIAS("of:N*T*Csi-en,sn3216");
MODULE_ALIAS("of:N*T*Csi-en,sn3216C*");

MODULE_INFO(srcversion, "1800DE153FDF6D0992BB500");
