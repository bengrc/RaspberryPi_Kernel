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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd94c32b0, "v4l2_async_register_subdev" },
	{ 0xb8739fa8, "fwnode_graph_get_remote_port_parent" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8e41f17c, "fwnode_handle_put" },
	{ 0x49ce32d0, "v4l2_async_subdev_notifier_register" },
	{ 0xb5da8ae2, "v4l2_async_notifier_cleanup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xef46c8d0, "fwnode_get_next_parent" },
	{ 0xeebbb335, "fwnode_device_is_available" },
	{ 0x2f07df0f, "fwnode_property_present" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2bd6bd5f, "fwnode_property_read_u64_array" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xaace0b9c, "fwnode_property_read_u32_array" },
	{ 0x9a7de3f, "fwnode_graph_parse_endpoint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5425b958, "fwnode_get_parent" },
	{ 0x46de55bf, "fwnode_property_get_reference_args" },
	{ 0xc2a10a1d, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x88bc7622, "fwnode_graph_get_next_endpoint" },
	{ 0xa49b90de, "dev_fwnode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9c3d68d0, "fwnode_graph_get_remote_endpoint" },
	{ 0x821f22, "v4l2_async_notifier_unregister" },
	{ 0x5abbbfd7, "of_fwnode_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "08666BAA2EA65FBE1286CA9");
