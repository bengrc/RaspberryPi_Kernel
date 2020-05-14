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
	{ 0x803a331f, "bus_register" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0x52526626, "device_remove_file" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x60cd5082, "cdev_init" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x39ddd88, "no_llseek" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x21af32f7, "ida_free" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf18fb489, "bus_unregister" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0xd040e01a, "module_put" },
	{ 0x9a7de3f, "fwnode_graph_parse_endpoint" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfa0c0e2f, "cdev_device_add" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x67258e26, "device_initialize" },
	{ 0x6d2bc4c4, "cdev_device_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x445c816c, "ida_destroy" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D935BB0278C001EB97011BC");
