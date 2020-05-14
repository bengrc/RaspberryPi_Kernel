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
	{ 0xd94c32b0, "v4l2_async_register_subdev" },
	{ 0x9f8c16c3, "__v4l2_ctrl_s_ctrl" },
	{ 0x2f426a63, "v4l2_ctrl_find" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0x78f31eb5, "v4l2_ctrl_new_custom" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x321ae865, "desc_to_gpio" },
	{ 0x815d4afc, "devm_gpiod_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0x8e41f17c, "fwnode_handle_put" },
	{ 0xc6aed248, "v4l2_fwnode_endpoint_parse" },
	{ 0x88bc7622, "fwnode_graph_get_next_endpoint" },
	{ 0xa49b90de, "dev_fwnode" },
	{ 0x77762f07, "v4l2_i2c_subdev_init" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb3def896, "gpiod_set_value_cansleep" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x843c5c75, "v4l2_ctrl_grab" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa1633992, "_dev_err" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x2c50d96, "v4l2_device_unregister_subdev" },
	{ 0x57c1602d, "v4l2_async_unregister_subdev" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,media,v4l2-fwnode,v4l2-common";

MODULE_ALIAS("of:N*T*Cinfineon,irs1125");
MODULE_ALIAS("of:N*T*Cinfineon,irs1125C*");

MODULE_INFO(srcversion, "AC520EF8FA382A1D8DC2065");
