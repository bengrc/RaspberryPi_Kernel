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
	{ 0xc9415b2d, "dm_unregister_target" },
	{ 0x8bbc6640, "dm_register_target" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x801421a6, "bio_add_page" },
	{ 0x54b6389b, "bio_alloc_bioset" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x16d9f5c9, "dm_accept_partial_bio" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf8ad608d, "bio_clone_fast" },
	{ 0xe6c12171, "complete" },
	{ 0x3520612, "bio_put" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x927c49d, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4725e393, "bioset_init" },
	{ 0x27ab8b8a, "mempool_init" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0xb81960ca, "snprintf" },
	{ 0x85df9b6c, "strsep" },
	{ 0xd14de94e, "crypto_alloc_ahash" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9f984513, "strrchr" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x78129461, "__percpu_counter_init" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6a6194f2, "crypto_alloc_base" },
	{ 0xfd56100d, "crypto_shash_digest" },
	{ 0x831074b1, "crypto_alloc_shash" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0x8c517411, "crypto_shash_final" },
	{ 0x148febdb, "crypto_shash_update" },
	{ 0xc00886e1, "crypto_alloc_aead" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x474d5fd2, "crypto_alloc_skcipher" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0x11a38228, "__percpu_counter_compare" },
	{ 0xf828b0ef, "percpu_counter_add_batch" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0xbd9074b1, "blk_finish_plug" },
	{ 0x27bf4920, "generic_make_request" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x7d705738, "blk_start_plug" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xdaa57ec3, "totalhigh_pages" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8819a907, "dm_put_device" },
	{ 0x81ba3b86, "percpu_counter_destroy" },
	{ 0x77c58230, "__percpu_counter_sum" },
	{ 0x7825541a, "mempool_exit" },
	{ 0x1ef2cf9c, "bioset_exit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x54111370, "kthread_stop" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0x16821dd0, "bio_endio" },
	{ 0x37a0cba, "kfree" },
	{ 0x278606ec, "mempool_free" },
	{ 0xd67c73c3, "dm_per_bio_data" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa3a59fde, "key_put" },
	{ 0xcd4c97a1, "up_read" },
	{ 0xafa10a99, "down_read" },
	{ 0x1d154136, "request_key" },
	{ 0x6c03853b, "key_type_logon" },
	{ 0x10c96f63, "key_type_user" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x84b183ae, "strncmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x86ccf98c, "hex2bin" },
	{ 0x7a4497db, "kzfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0xaebd3763, "crypto_aead_setkey" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9d669763, "memcpy" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x349cba85, "strchr" },
	{ 0x97255bdf, "strlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "6ABF3C5EA698650F179DCC5");
