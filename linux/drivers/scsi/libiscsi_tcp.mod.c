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
	{ 0x50b03c47, "sg_init_table" },
	{ 0x5c32e4e0, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x93b7b6b7, "dev_printk" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xc4ed5445, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9b27be18, "iscsi_requeue_task" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8d4b25d4, "iscsi_itt_to_ctask" },
	{ 0xd9aa5f6b, "crypto_ahash_final" },
	{ 0x6125801a, "crypto_ahash_digest" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0x5f754e5a, "memset" },
	{ 0xa313d5c, "skb_abort_seq_read" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xadd4ff75, "skb_prepare_seq_read" },
	{ 0x71c90087, "memcmp" },
	{ 0xa13a9f82, "kunmap" },
	{ 0xc2337edd, "iscsi_conn_teardown" },
	{ 0xe108298f, "iscsi_put_task" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0xc1513e54, "kmap" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6beb46ab, "iscsi_prep_data_out_pdu" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x54865f47, "iscsi_complete_pdu" },
	{ 0xe38dc3c, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x79ff628e, "sg_init_one" },
	{ 0x9d669763, "memcpy" },
	{ 0x6e1a062d, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0x5dd3e637, "iscsi_verify_itt" },
	{ 0x8b3e6f3d, "iscsi_conn_setup" },
	{ 0x9f540020, "iscsi_update_cmdsn" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi";


MODULE_INFO(srcversion, "FDAF2FB5CF0FA9AE900B10C");
