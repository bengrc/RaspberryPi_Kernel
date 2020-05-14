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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3e231a30, "proc_create_single_data" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x60be4842, "deactivate_locked_super" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x92277db5, "sysfs_create_files" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0x38142440, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x9689c582, "__register_chrdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x47e18c8f, "lookup_bdev" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xff3e8bac, "bdi_alloc_node" },
	{ 0xe864e62d, "device_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2138166e, "class_unregister" },
	{ 0x7789b64a, "sget" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x8539a81d, "fixed_size_llseek" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x69e1d2e, "device_create" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xc8cd1bd5, "of_prop_next_string" },
	{ 0x61a6ff9, "__class_register" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xc269e05, "of_get_child_by_name" },
	{ 0x61275678, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xd040e01a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1038e0cb, "bdi_put" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x60e1284f, "__module_get" },
	{ 0x9e4ec669, "sysfs_remove_files" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x5b0e7b1b, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67b9ad8b, "bdi_register" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0xaf38e081, "idr_find" },
	{ 0xa20386f5, "bdput" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x80db6c57, "generic_shutdown_super" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CCC6048A3B5DC3A5569A0AD");
