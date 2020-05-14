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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x585c3a56, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9d4fd290, "dev_add_pack" },
	{ 0xd573bd25, "proc_create_seq_private" },
	{ 0x73b857df, "ax25_ip_xmit" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x3c0bd0f2, "dev_close" },
	{ 0x55a515c6, "register_netdevice" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x84b183ae, "strncmp" },
	{ 0x341c6c58, "init_net" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f678b07, "__stack_chk_guard" },
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


MODULE_INFO(srcversion, "067DFD33DC71121FC355B6B");
