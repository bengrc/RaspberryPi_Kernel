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
	{ 0xf669f98c, "can_change_mtu" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1a6c1927, "open_candev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf07137ff, "alloc_can_skb" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x2045b0f1, "alloc_can_err_skb" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x957a2a7d, "can_get_echo_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca2fc8b6, "netdev_warn" },
	{ 0xa19cf59b, "close_candev" },
	{ 0xc38b8475, "netif_device_detach" },
	{ 0x5452c3c2, "usb_unanchor_urb" },
	{ 0xfdae57cb, "can_free_echo_skb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x86a640d5, "can_put_echo_skb" },
	{ 0xeb671564, "usb_anchor_urb" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0xcbfc45e3, "netdev_info" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xa616e2cc, "unregister_candev" },
	{ 0x5c65ae9f, "free_candev" },
	{ 0x6eb5f104, "register_candev" },
	{ 0x5f754e5a, "memset" },
	{ 0xc39bb73e, "alloc_candev_mqs" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("usb:v1D50p606Fd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1209p2323d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "2BC32ECD2FFDE1C5C9611F2");
