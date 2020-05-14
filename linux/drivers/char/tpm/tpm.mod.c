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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xff4bb69e, "securityfs_create_file" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x60cd5082, "cdev_init" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x149e43c6, "seq_open" },
	{ 0x39ddd88, "no_llseek" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xcfe9f8a8, "seq_write" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x64c412e2, "__compat_only_sysfs_link_entry_to_kobj" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0x9943b1a3, "seq_read" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0x8c7b6b8b, "securityfs_remove" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xafa10a99, "down_read" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4f30b379, "hash_digest_size" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xa13a9f82, "kunmap" },
	{ 0x6c44301d, "seq_putc" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xe4da128b, "sysfs_remove_link" },
	{ 0x94425488, "up_write" },
	{ 0xa1633992, "_dev_err" },
	{ 0xbc22018b, "down_write" },
	{ 0x61275678, "idr_remove" },
	{ 0x7d3064b1, "devm_add_action" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc1513e54, "kmap" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfa0c0e2f, "cdev_device_add" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x2fc7504b, "hwrng_register" },
	{ 0xd2027ac4, "of_get_property" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x67258e26, "device_initialize" },
	{ 0xcdce97bd, "securityfs_create_dir" },
	{ 0x804a55da, "idr_replace" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x6d2bc4c4, "cdev_device_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x29eea1d3, "of_property_match_string" },
	{ 0xfabc33be, "seq_release" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x5fc2c660, "hwrng_unregister" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x9c921cae, "__class_create" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E990C40D07E88004FFF54DA");
