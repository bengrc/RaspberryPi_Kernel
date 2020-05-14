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
	{ 0xb7700415, "param_ops_int" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xd94c32b0, "v4l2_async_register_subdev" },
	{ 0xf5ca5694, "v4l2_ctrl_new_std_menu_items" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x77762f07, "v4l2_i2c_subdev_init" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0x6ac1632d, "of_get_next_available_child" },
	{ 0xc269e05, "of_get_child_by_name" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0xc6aed248, "v4l2_fwnode_endpoint_parse" },
	{ 0x6c9cf468, "of_graph_get_next_endpoint" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x722b9b19, "devm_gpiod_get_optional" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb74a0255, "media_device_unregister_entity" },
	{ 0xc6234a50, "media_create_pad_link" },
	{ 0x4fdb023a, "media_device_register_entity" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0x2c3a7a05, "i2c_smbus_read_byte_data" },
	{ 0xa1633992, "_dev_err" },
	{ 0xba5921d, "i2c_smbus_write_byte_data" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x57c1602d, "v4l2_async_unregister_subdev" },
	{ 0x93b7b6b7, "dev_printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common,v4l2-fwnode,media";

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "53EE0895900870C647156CE");
