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
	{ 0xb7700415, "param_ops_int" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xbc2910a0, "tty_register_ldisc" },
	{ 0x907a3b51, "tty_chars_in_buffer" },
	{ 0x73b857df, "ax25_ip_xmit" },
	{ 0x2ad8630c, "dev_trans_start" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x67acf6b0, "tty_driver_flush_buffer" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf0ef52e8, "down" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x326b63e, "netif_schedule_queue" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xf102732a, "crc16" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x9214b99, "skb_put" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf241a7ae, "tty_unthrottle" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7c32d0f0, "printk" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x581cde4e, "up" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xbd134295, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ax25";


MODULE_INFO(srcversion, "250F027D40AD06B09CBE3E3");
