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
	{ 0x73aea193, "scsi_set_medium_removal" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6cfdd889, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1e7635e6, "cdrom_number_of_slots" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x8e394c07, "scsi_ioctl_block_when_processing_errors" },
	{ 0x24eee893, "unregister_cdrom" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x60528995, "blk_dump_rq_flags" },
	{ 0xc4ed5445, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x92fa35c8, "scmd_printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd766330c, "cdrom_open" },
	{ 0x91715312, "sprintf" },
	{ 0x3bda1697, "scsi_autopm_get_device" },
	{ 0xa6a76ba3, "__alloc_disk_node" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa78cb36b, "check_disk_change" },
	{ 0xe8e528cc, "cdrom_release" },
	{ 0x8767fa8d, "del_gendisk" },
	{ 0xb927e514, "__scsi_execute" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0x2c819518, "sdev_prefix_printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe832306b, "cdrom_get_media_event" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x87b85a19, "cdrom_check_events" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x43b8401c, "cdrom_get_last_written" },
	{ 0x6325c0dc, "scsi_device_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbf8f5deb, "scsi_ioctl" },
	{ 0xb94bfeb5, "put_disk" },
	{ 0xf5723ee7, "scsi_register_driver" },
	{ 0xc149482, "scsi_block_when_processing_errors" },
	{ 0xa3bc5117, "scsi_test_unit_ready" },
	{ 0x31076b9f, "scsi_init_io" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xc16db58, "cdrom_ioctl" },
	{ 0x11907e2d, "blk_pm_runtime_init" },
	{ 0xf373db5c, "register_cdrom" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbdcac414, "device_add_disk" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x537040d5, "scsi_device_get" },
	{ 0x526a2e9e, "scsi_autopm_put_device" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8bec0790, "blk_queue_logical_block_size" },
	{ 0x70e9e4be, "scsi_mode_sense" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "D597086D2A7953C72A0EA6A");
