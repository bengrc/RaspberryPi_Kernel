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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x84c0ca28, "scsi_host_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x402b56ac, "scsi_add_host_with_dma" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x3f6ab980, "iscsi_block_session" },
	{ 0x93b7b6b7, "dev_printk" },
	{ 0xa4ac82a5, "iscsi_remove_session" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xedf3ea4c, "iscsi_unblock_session" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb48677a, "__kfifo_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e7aeb4c, "iscsi_add_session" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x635dc197, "iscsi_recv_pdu" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0xdedbc987, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa9e1d596, "iscsi_create_conn" },
	{ 0x9b69f1b3, "flush_signals" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xd040e01a, "module_put" },
	{ 0x26e61da0, "iscsi_destroy_conn" },
	{ 0x7427b606, "scsi_host_get" },
	{ 0x142a905e, "put_device" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5a715449, "iscsi_conn_error_event" },
	{ 0x1000e51, "schedule" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x15af7f4, "system_state" },
	{ 0x981b2079, "iscsi_free_session" },
	{ 0x49970de8, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8a14134, "scsi_remove_host" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8612cfd6, "iscsi_host_for_each_session" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x26aac0bc, "iscsi_session_chkready" },
	{ 0x349e4ccc, "iscsi_alloc_session" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6989295D4D32BC0D4956B7E");
