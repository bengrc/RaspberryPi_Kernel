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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x73b857df, "ax25_ip_xmit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x5f754e5a, "memset" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x52e850f6, "__dev_kfree_skb_irq" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0xbd134295, "ax25_header_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ax25,crc-ccitt";


MODULE_INFO(srcversion, "A692A08350081D433864A00");
