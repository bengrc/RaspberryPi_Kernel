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
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x7c32d0f0, "printk" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb952953d, "alloc_etherdev_mqs" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x122170da, "crc32_le" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0x9214b99, "skb_put" },
	{ 0x9d669763, "memcpy" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xa1633992, "_dev_err" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "27317CF7DD6D6A401DD9807");
