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
	{ 0xf64599c3, "blk_cleanup_queue" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x771838b8, "mtd_table_mutex" },
	{ 0x11856c38, "rq_flush_dcache_pages" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1298e77e, "__put_mtd_device" },
	{ 0xd09e1639, "blk_start_queue" },
	{ 0x1eb4517b, "__get_mtd_device" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xa6a76ba3, "__alloc_disk_node" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xca3d5972, "blk_queue_max_discard_sectors" },
	{ 0x8767fa8d, "del_gendisk" },
	{ 0x1644f5a9, "register_mtd_user" },
	{ 0xa13a9f82, "kunmap" },
	{ 0xf1da9957, "__mtd_next_device" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xf0dd6d01, "unregister_mtd_user" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x40be03b5, "blk_queue_flag_clear" },
	{ 0xd040e01a, "module_put" },
	{ 0x3807d1c8, "blk_queue_flag_set" },
	{ 0xc1513e54, "kmap" },
	{ 0xb94bfeb5, "put_disk" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xfb1ffa21, "__blk_end_request_cur" },
	{ 0x26c963d1, "blk_fetch_request" },
	{ 0x839f8405, "__blk_end_request_all" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x60e1284f, "__module_get" },
	{ 0x8fa97ede, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbdcac414, "device_add_disk" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8bec0790, "blk_queue_logical_block_size" },
	{ 0xd42ddf48, "set_disk_ro" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";


MODULE_INFO(srcversion, "37046B98ABDABA017EBF126");
