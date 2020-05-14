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
	{ 0x194132fa, "zs_huge_class_size" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xc341ae6d, "zs_map_object" },
	{ 0x1a675dfe, "__cpuhp_remove_state" },
	{ 0xf64599c3, "blk_cleanup_queue" },
	{ 0xcd4c97a1, "up_read" },
	{ 0xb8f07c4f, "blk_queue_io_opt" },
	{ 0x27864d57, "memparse" },
	{ 0x4bfdcefa, "__memset32" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xc69b7ee5, "zs_destroy_pool" },
	{ 0xd4e478e6, "generic_end_io_acct" },
	{ 0xf1ea3013, "zs_malloc" },
	{ 0x99252199, "blk_queue_io_min" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x70f96ebd, "blk_queue_max_write_zeroes_sectors" },
	{ 0x5da67adc, "zs_compact" },
	{ 0x4d4be347, "idr_for_each" },
	{ 0xb846ee1d, "revalidate_disk" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafa10a99, "down_read" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x96c94bce, "fsync_bdev" },
	{ 0xa6a76ba3, "__alloc_disk_node" },
	{ 0x958df3ac, "zs_free" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x7f6290e0, "blk_alloc_queue" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x7c32d0f0, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xca3d5972, "blk_queue_max_discard_sectors" },
	{ 0x8767fa8d, "del_gendisk" },
	{ 0x2138166e, "class_unregister" },
	{ 0x35b573b, "__cpuhp_state_add_instance" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xbcf1f0e6, "zs_create_pool" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x373db350, "kstrtoint" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xbf1e932f, "__cpuhp_setup_state" },
	{ 0x94425488, "up_write" },
	{ 0x61a6ff9, "__class_register" },
	{ 0x8bf6dc29, "generic_start_io_acct" },
	{ 0xbc22018b, "down_write" },
	{ 0x16821dd0, "bio_endio" },
	{ 0x61275678, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x40be03b5, "blk_queue_flag_clear" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x3807d1c8, "blk_queue_flag_set" },
	{ 0x482bbe6c, "blk_queue_make_request" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xe8c4c7d3, "blk_queue_physical_block_size" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb94bfeb5, "put_disk" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0xc9a7699c, "__cpuhp_state_remove_instance" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0xcbe56bc2, "zs_get_total_pages" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe071d05d, "zs_pool_stats" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbdcac414, "device_add_disk" },
	{ 0x6a6194f2, "crypto_alloc_base" },
	{ 0x8bec0790, "blk_queue_logical_block_size" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xaf38e081, "idr_find" },
	{ 0x3741cdab, "bdget_disk" },
	{ 0xa20386f5, "bdput" },
	{ 0x924c46f8, "zs_unmap_object" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0xfa61f263, "flush_dcache_page" },
	{ 0x6c3b16c4, "page_endio" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=zsmalloc";


MODULE_INFO(srcversion, "AAE49F34F50AD9698DBA293");
