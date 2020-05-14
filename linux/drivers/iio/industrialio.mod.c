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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x803a331f, "bus_register" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x60cd5082, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x4f6bad00, "of_property_read_string_helper" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd162e932, "irq_set_chip" },
	{ 0x8850e44c, "__irq_set_handler" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x58ab2f2c, "__irq_alloc_descs" },
	{ 0x91715312, "sprintf" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x7e0b7cdd, "devres_alloc_node" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0xb0ff659, "device_del" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0x21af32f7, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6415795a, "debugfs_remove" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x5c017464, "kvasprintf" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x373db350, "kstrtoint" },
	{ 0x6b685034, "device_add" },
	{ 0x99997d3a, "bus_find_device" },
	{ 0x1061a901, "simple_open" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf18fb489, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0xd040e01a, "module_put" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa3e308fb, "handle_simple_irq" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0x98d265aa, "devres_release" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9d6dcd41, "anon_inode_getfd" },
	{ 0x1000e51, "schedule" },
	{ 0xfa0c0e2f, "cdev_device_add" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0xd2027ac4, "of_get_property" },
	{ 0x1bb9fb6a, "devres_add" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x60e1284f, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x67258e26, "device_initialize" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe99f7653, "of_parse_phandle_with_args" },
	{ 0x49970de8, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x6d2bc4c4, "cdev_device_del" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x29eea1d3, "of_property_match_string" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "52F3861BD619F4FD902888A");
