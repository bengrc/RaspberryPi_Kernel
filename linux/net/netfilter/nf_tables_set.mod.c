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
	{ 0x2d3385d3, "system_wq" },
	{ 0x34a8b541, "rhashtable_walk_exit" },
	{ 0xffe34ebe, "rht_bucket_nested" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb81b1055, "rhashtable_walk_next" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x26a04b97, "nft_register_set" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc3d579c5, "rhashtable_insert_slow" },
	{ 0xa68613dd, "get_jiffies_64" },
	{ 0xece784c2, "rb_first" },
	{ 0x1dc4fef7, "rht_bucket_nested_insert" },
	{ 0x7d4d2be0, "rhashtable_free_and_destroy" },
	{ 0xcc358fde, "nft_set_gc_batch_alloc" },
	{ 0xef3f0b40, "rhashtable_walk_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0xa730242c, "rhashtable_walk_start_check" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x17b4c0d4, "nft_set_elem_destroy" },
	{ 0xbf63bb61, "nft_set_gc_batch_release" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x20c9060a, "rhashtable_walk_enter" },
	{ 0x3d27b930, "nft_unregister_set" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x50f3d972, "rhashtable_init" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "E067DFFCCB77F2682B3C361");
