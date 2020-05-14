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
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0xd573bd25, "proc_create_seq_private" },
	{ 0x341c6c58, "init_net" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x91715312, "sprintf" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x9214b99, "skb_put" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x73b857df, "ax25_ip_xmit" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xd12088ea, "platform_device_unregister" },
	{ 0x27d7b178, "request_firmware" },
	{ 0xee0e083e, "platform_device_register_full" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x24d273d1, "add_timer" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xbd134295, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ax25";


MODULE_INFO(srcversion, "9EC31721A81C15A269DEBA1");
