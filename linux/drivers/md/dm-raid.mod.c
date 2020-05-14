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
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc9415b2d, "dm_unregister_target" },
	{ 0x8bbc6640, "dm_register_target" },
	{ 0x78711542, "md_bitmap_load" },
	{ 0xcfbcb2ca, "md_update_sb" },
	{ 0xa8b175ce, "md_bitmap_resize" },
	{ 0x6e847838, "raid5_set_cache_size" },
	{ 0x91f4a768, "r5c_journal_mode_set" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0x6cf4519c, "md_start" },
	{ 0xb9b660b, "md_run" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb6444d8, "dm_set_target_max_io_len" },
	{ 0x927c49d, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x373db350, "kstrtoint" },
	{ 0x549f812e, "md_rdev_init" },
	{ 0x27a6a27f, "mddev_init" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x9812e4eb, "mddev_resume" },
	{ 0xcabb1062, "md_error" },
	{ 0x80b7a5b1, "sync_page_io" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xc9a16c73, "page_address" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x4be85a03, "memweight" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x55cb5f0f, "mddev_congested" },
	{ 0xd1c0a710, "md_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x8819a907, "dm_put_device" },
	{ 0xd5e23b62, "md_rdev_clear" },
	{ 0x6f09dfc, "md_handle_request" },
	{ 0x39439ab4, "md_stop_writes" },
	{ 0x3bf9ef46, "mddev_unlock" },
	{ 0x2fa48ea1, "mddev_suspend" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb846ee1d, "revalidate_disk" },
	{ 0x78730f11, "dm_disk" },
	{ 0xbac390d7, "dm_table_get_md" },
	{ 0x7c32d0f0, "printk" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x17b5922d, "md_wakeup_thread" },
	{ 0x7c7a967a, "md_reap_sync_thread" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xdc9596bf, "blk_limits_io_opt" },
	{ 0x829b05dc, "blk_limits_io_min" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456";


MODULE_INFO(srcversion, "924146F60639152BDB472E4");
