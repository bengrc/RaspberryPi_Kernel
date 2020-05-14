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
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xf09d6f5a, "hci_unregister_dev" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x26b4024e, "hci_free_dev" },
	{ 0x76d324d7, "hci_register_dev" },
	{ 0xd358b1f4, "hci_alloc_dev" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xd7442057, "bt_info" },
	{ 0x27d7b178, "request_firmware" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xfa4c6c9f, "hci_recv_frame" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0x9214b99, "skb_put" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x5cdc9a0c, "skb_queue_head" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x1482de2b, "skb_unlink" },
	{ 0x47022514, "bt_err" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A643A2BA15450C65F34B24A");
