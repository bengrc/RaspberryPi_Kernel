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
	{ 0xaa765f18, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf3f68ed2, "ppp_input_error" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0xd13ca26f, "ppp_input" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0ef52e8, "down" },
	{ 0x37a0cba, "kfree" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x900f861f, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xff18c412, "ppp_output_wakeup" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb78c66c6, "ppp_channel_index" },
	{ 0x3d33e277, "tty_mode_ioctl" },
	{ 0x82730dd, "n_tty_ioctl_helper" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x3a1234e4, "ppp_unit_number" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x7c32d0f0, "printk" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xfb954790, "stop_tty" },
	{ 0x96bcb7f, "start_tty" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x9d669763, "memcpy" },
	{ 0x9214b99, "skb_put" },
	{ 0xf241a7ae, "tty_unthrottle" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x581cde4e, "up" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic,crc-ccitt";


MODULE_INFO(srcversion, "9EDCB1D4D65C04AF4F84131");
