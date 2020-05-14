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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xe11c86cf, "o2nm_node_put" },
	{ 0x2568bae3, "o2hb_unregister_callback" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x58c88ff2, "o2hb_get_all_regions" },
	{ 0x31979f3b, "o2hb_register_callback" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xccddfbfc, "seq_release_private" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x696fa2fa, "o2net_register_handler" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xf982e6db, "o2net_send_message" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf1a5611d, "o2net_unregister_handler_list" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x364f639b, "o2net_send_message_vec" },
	{ 0x9943b1a3, "seq_read" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xafa10a99, "down_read" },
	{ 0xa73ee62b, "_atomic_dec_and_lock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5f754e5a, "memset" },
	{ 0x6a320df5, "__seq_open_private" },
	{ 0x7c32d0f0, "printk" },
	{ 0x54111370, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x6415795a, "debugfs_remove" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0x78076d35, "o2hb_setup_callback" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf5b666ef, "__cond_resched_lock" },
	{ 0x667b7de, "__mlog_printk" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xcdeac287, "o2nm_get_node_by_num" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x800fb92b, "full_name_hash" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0xbd13ee5d, "o2hb_check_node_heartbeating_no_sem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_nodemanager";


MODULE_INFO(srcversion, "A6A4E7DCA6986E805602F4D");
