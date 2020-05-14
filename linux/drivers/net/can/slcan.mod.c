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
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x957f88, "tty_hangup" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xbc2910a0, "tty_register_ldisc" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x55a515c6, "register_netdevice" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x91715312, "sprintf" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3c0bd0f2, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x92b57248, "flush_work" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x3d33e277, "tty_mode_ioctl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0x9214b99, "skb_put" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "39985B0C006A2E122B0F55C");
