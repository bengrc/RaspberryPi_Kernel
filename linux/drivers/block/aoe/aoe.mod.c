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
	{ 0xdd517477, "blk_init_queue" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf64599c3, "blk_cleanup_queue" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x349cba85, "strchr" },
	{ 0x7f8a9562, "single_open" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xc7ec6c27, "strspn" },
	{ 0xc9a16c73, "page_address" },
	{ 0xb457b288, "blk_queue_max_hw_sectors" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xd07da2bc, "single_release" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x38142440, "device_destroy" },
	{ 0xf6d707a0, "mempool_destroy" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x9689c582, "__register_chrdev" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x9943b1a3, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x2adf170e, "__blk_run_queue" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0xa6a76ba3, "__alloc_disk_node" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x54111370, "kthread_stop" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x8767fa8d, "del_gendisk" },
	{ 0xd0bb6146, "blk_peek_request" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x84b183ae, "strncmp" },
	{ 0x6415795a, "debugfs_remove" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x585c3a56, "dev_remove_pack" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x69e1d2e, "device_create" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x94425488, "up_write" },
	{ 0x341c6c58, "init_net" },
	{ 0xbc22018b, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x9f984513, "strrchr" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xb94bfeb5, "put_disk" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xe1422a46, "mempool_create" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x278606ec, "mempool_free" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3a32ed08, "set_user_nice" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbdcac414, "device_add_disk" },
	{ 0x9d4fd290, "dev_add_pack" },
	{ 0x99bb8806, "memmove" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0x9c921cae, "__class_create" },
	{ 0x3741cdab, "bdget_disk" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0x3b62e340, "__blk_end_request" },
	{ 0xa20386f5, "bdput" },
	{ 0x85693a89, "blk_start_request" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1E02FEA4E45F6771C2AAC7F");
