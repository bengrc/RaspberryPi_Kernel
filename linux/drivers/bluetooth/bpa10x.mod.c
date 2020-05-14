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
	{ 0x8fa8221b, "hci_recv_diag" },
	{ 0xfa4c6c9f, "hci_recv_frame" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x76d324d7, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd358b1f4, "hci_alloc_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x9214b99, "skb_put" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x66703aef, "hci_set_fw_info" },
	{ 0xd7442057, "bt_info" },
	{ 0x5452c3c2, "usb_unanchor_urb" },
	{ 0x47022514, "bt_err" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xeb671564, "usb_anchor_urb" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc91beaf0, "__hci_cmd_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x26b4024e, "hci_free_dev" },
	{ 0xf09d6f5a, "hci_unregister_dev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D992476686D5A0D8B25640F");
