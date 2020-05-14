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
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xb952953d, "alloc_etherdev_mqs" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x52e850f6, "__dev_kfree_skb_irq" },
	{ 0x9d669763, "memcpy" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x363356bf, "netif_device_attach" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0x9214b99, "skb_put" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc38b8475, "netif_device_detach" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C6D49209796E7482677A358");
