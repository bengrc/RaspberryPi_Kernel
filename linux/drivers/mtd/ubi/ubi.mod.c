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
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0x489c6f18, "cdev_del" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x60cd5082, "cdev_init" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xbb4f6001, "mtd_block_isbad" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xc9a16c73, "page_address" },
	{ 0x149e43c6, "seq_open" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x243684c9, "mtd_get_device_size" },
	{ 0x39ddd88, "no_llseek" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xe652b0d5, "blocking_notifier_chain_unregister" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x5a0b0eb7, "mtd_write" },
	{ 0x91715312, "sprintf" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x9943b1a3, "seq_read" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafa10a99, "down_read" },
	{ 0xe51ef836, "down_write_trylock" },
	{ 0xb1a06e3, "mtd_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x42e7859a, "misc_register" },
	{ 0xb8311eef, "kern_path" },
	{ 0x5f754e5a, "memset" },
	{ 0xe864e62d, "device_register" },
	{ 0x2ec92974, "freezing_slow_path" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x54111370, "kthread_stop" },
	{ 0x70512321, "mtd_read" },
	{ 0x71c90087, "memcmp" },
	{ 0x2138166e, "class_unregister" },
	{ 0x69715f03, "put_mtd_device" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8539a81d, "fixed_size_llseek" },
	{ 0x84b183ae, "strncmp" },
	{ 0x6415795a, "debugfs_remove" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x373db350, "kstrtoint" },
	{ 0x1061a901, "simple_open" },
	{ 0x94425488, "up_write" },
	{ 0x61a6ff9, "__class_register" },
	{ 0xbc22018b, "down_write" },
	{ 0x6f37a248, "mtd_block_markbad" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xab9fff11, "cdev_add" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xd040e01a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa98db22, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0xfa0c0e2f, "cdev_device_add" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x502d3136, "get_mtd_device" },
	{ 0x9b462cab, "blocking_notifier_chain_register" },
	{ 0xa368ffd7, "path_put" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x7c908f2c, "get_mtd_device_nm" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0xb8ff71ca, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x67258e26, "device_initialize" },
	{ 0xd2802d5c, "pgprot_kernel" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0x6d2bc4c4, "cdev_device_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xfabc33be, "seq_release" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x932d46c2, "vfs_getattr" },
	{ 0x83ef67e5, "misc_deregister" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x760a0f4f, "yield" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";


MODULE_INFO(srcversion, "7BB91D03586C61C3619B454");
