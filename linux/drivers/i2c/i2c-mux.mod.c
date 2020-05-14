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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x56bd6015, "rt_mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb187d90f, "i2c_add_adapter" },
	{ 0x9825ff7c, "__i2c_smbus_xfer" },
	{ 0xd51421bf, "rt_mutex_trylock" },
	{ 0x6fa929e3, "rt_mutex_unlock" },
	{ 0xe4da128b, "sysfs_remove_link" },
	{ 0xa1633992, "_dev_err" },
	{ 0xc269e05, "of_get_child_by_name" },
	{ 0xfb228b05, "i2c_adapter_type" },
	{ 0xbbe8bae7, "sysfs_create_link" },
	{ 0xf63bc4f, "i2c_del_adapter" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x1a3ed4a9, "i2c_smbus_xfer" },
	{ 0xd5a9d4c7, "i2c_add_numbered_adapter" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1b2f588a, "of_get_next_child" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x5b0e7b1b, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xe56f9e8d, "__i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0xcafbd334, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F6A4993AF93A24A32937858");
