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
	{ 0x304f5e4c, "mipi_dsi_driver_unregister" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xfeee446, "mipi_dsi_driver_register_full" },
	{ 0x4c38e9f6, "mipi_dsi_attach" },
	{ 0x5763b85, "drm_panel_add" },
	{ 0x772c8225, "drm_panel_init" },
	{ 0xc274b837, "mipi_dsi_device_register_full" },
	{ 0x52b84228, "of_graph_get_remote_port" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0x804faa88, "of_find_mipi_dsi_host_by_node" },
	{ 0x45b5a542, "of_graph_get_remote_port_parent" },
	{ 0x6c9cf468, "of_graph_get_next_endpoint" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2c3a7a05, "i2c_smbus_read_byte_data" },
	{ 0xba5921d, "i2c_smbus_write_byte_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc913f4af, "mipi_dsi_generic_write" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf03957af, "drm_display_info_set_bus_formats" },
	{ 0x1c5d222c, "drm_mode_probed_add" },
	{ 0x1636571f, "drm_mode_set_name" },
	{ 0x43904821, "drm_mode_duplicate" },
	{ 0x37a0cba, "kfree" },
	{ 0x968b8590, "mipi_dsi_device_unregister" },
	{ 0xf47728dc, "drm_panel_remove" },
	{ 0x5de0120, "mipi_dsi_detach" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panelC*");

MODULE_INFO(srcversion, "A35C55807A1910255D5D3A8");
