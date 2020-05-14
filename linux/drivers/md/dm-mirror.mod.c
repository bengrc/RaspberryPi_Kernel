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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa83588eb, "dm_rh_recovery_end" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf92b8a3d, "dm_rh_get_region_size" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x57e16c3e, "dm_rh_get_state" },
	{ 0x927c49d, "dm_get_device" },
	{ 0xd67e2256, "dm_io" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x89b3b75d, "dm_rh_inc_pending" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x7d5e1815, "dm_rh_get_region_key" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xff136584, "dm_region_hash_create" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8bbc6640, "dm_register_target" },
	{ 0x657e223, "dm_kcopyd_copy" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xd8aa4284, "dm_rh_region_context" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa53387c7, "dm_rh_flush" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x1d2f9ac, "dm_rh_recovery_start" },
	{ 0xbe38a431, "dm_rh_recovery_prepare" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4167fc83, "dm_rh_bio_to_region" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xb6444d8, "dm_set_target_max_io_len" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc9415b2d, "dm_unregister_target" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x24d273d1, "add_timer" },
	{ 0x27bf4920, "generic_make_request" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7774620f, "dm_rh_stop_recovery" },
	{ 0x16821dd0, "bio_endio" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2ca32ad1, "dm_rh_dirty_log" },
	{ 0x38972f23, "dm_rh_region_to_sector" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x38efaf5a, "dm_region_hash_destroy" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x649afeed, "dm_rh_mark_nosync" },
	{ 0x5a56d324, "dm_dirty_log_destroy" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x7d053fc5, "dm_rh_start_recovery" },
	{ 0x49970de8, "finish_wait" },
	{ 0x3a18389a, "dm_rh_update_states" },
	{ 0x8819a907, "dm_put_device" },
	{ 0xd67c73c3, "dm_per_bio_data" },
	{ 0x197504b1, "dm_noflush_suspending" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xfd93482e, "dm_rh_recovery_in_flight" },
	{ 0x35c93ffc, "dm_rh_delay" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x9dd8b12a, "dm_dirty_log_create" },
	{ 0x5f4a6e61, "dm_rh_dec" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-region-hash,dm-mod,dm-log";


MODULE_INFO(srcversion, "B80B1A55FE6E5751A653934");
