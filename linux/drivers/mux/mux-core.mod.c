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
	{ 0x4f7a4dac, "class_find_device" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xeffe0752, "down_killable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7e0b7cdd, "devres_alloc_node" },
	{ 0xb0ff659, "device_del" },
	{ 0x5e204162, "down_trylock" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2138166e, "class_unregister" },
	{ 0x21af32f7, "ida_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6b685034, "device_add" },
	{ 0x61a6ff9, "__class_register" },
	{ 0xa1633992, "_dev_err" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1bb9fb6a, "devres_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x67258e26, "device_initialize" },
	{ 0x581cde4e, "up" },
	{ 0xe99f7653, "of_parse_phandle_with_args" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x29eea1d3, "of_property_match_string" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0x445c816c, "ida_destroy" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "175149E7CB76BC95C11ED69");
