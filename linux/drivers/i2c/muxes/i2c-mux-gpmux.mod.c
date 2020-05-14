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
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x6ff3b4b4, "i2c_mux_add_adapter" },
	{ 0xc21a7bb1, "mux_control_states" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x1404de7c, "i2c_mux_alloc" },
	{ 0x1b2f588a, "of_get_next_child" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0x185a0487, "of_find_i2c_adapter_by_node" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0xd1e7fa1b, "devm_mux_control_get" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd4109796, "mux_control_select" },
	{ 0x58a1ed15, "mux_control_deselect" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3d89c3b4, "i2c_put_adapter" },
	{ 0xd7417963, "i2c_mux_del_adapters" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux,mux-core";

MODULE_ALIAS("of:N*T*Ci2c-mux");
MODULE_ALIAS("of:N*T*Ci2c-muxC*");

MODULE_INFO(srcversion, "1D1752D25EBC250EF5ADDF1");
