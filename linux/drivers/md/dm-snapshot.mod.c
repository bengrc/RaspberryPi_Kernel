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
	{ 0x402b8281, "__request_module" },
	{ 0x7825541a, "mempool_exit" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x415734d, "dm_bio_get_target_bio_nr" },
	{ 0xcd2ba798, "dm_bufio_forget" },
	{ 0xcd4c97a1, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x97255bdf, "strlen" },
	{ 0x927c49d, "dm_get_device" },
	{ 0xd67e2256, "dm_io" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xfc14bb2e, "dm_get_dev_t" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xbac390d7, "dm_table_get_md" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x72f07bf4, "dm_bufio_set_minimum_buffers" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc79bcd36, "dm_vcalloc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x8bbc6640, "dm_register_target" },
	{ 0x657e223, "dm_kcopyd_copy" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xafa10a99, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x5ee9b09d, "dm_put" },
	{ 0xece784c2, "rb_first" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x783a6d00, "dm_internal_suspend_fast" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x5f754e5a, "memset" },
	{ 0xb6444d8, "dm_set_target_max_io_len" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc9415b2d, "dm_unregister_target" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x748d72fd, "dm_bufio_client_create" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x85728499, "dm_suspended" },
	{ 0x62d0e2a6, "__wake_up_locked" },
	{ 0x27bf4920, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x16821dd0, "bio_endio" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0xd040e01a, "module_put" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0x16d9f5c9, "dm_accept_partial_bio" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x278606ec, "mempool_free" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x7880c781, "dm_kcopyd_prepare_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0x475aad92, "dm_hold" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x27ab8b8a, "mempool_init" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x2473f47e, "dm_table_get_size" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8819a907, "dm_put_device" },
	{ 0xd67c73c3, "dm_per_bio_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x4b5fd49e, "dm_kcopyd_do_callback" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x2fd5a5de, "dm_internal_resume_fast" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,dm-bufio";


MODULE_INFO(srcversion, "E0D91FAC214A13FD745966A");
