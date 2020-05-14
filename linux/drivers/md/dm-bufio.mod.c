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
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x54b6389b, "bio_alloc_bioset" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xd67e2256, "dm_io" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x801421a6, "bio_add_page" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3520612, "bio_put" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x4a90aa0b, "submit_bio" },
	{ 0xbd9074b1, "blk_finish_plug" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x362f921c, "unregister_shrinker" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xdaa57ec3, "totalhigh_pages" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xb8ff71ca, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xe39cfe78, "register_shrinker" },
	{ 0xd2802d5c, "pgprot_kernel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x931bbbfe, "param_ops_ulong" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x7d705738, "blk_start_plug" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "6D15CC7B6D1D66F41B74309");
