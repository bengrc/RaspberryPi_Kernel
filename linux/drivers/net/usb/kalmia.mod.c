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
	{ 0xe9760b18, "usbnet_resume" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0xb69b5ca7, "usbnet_disconnect" },
	{ 0xfa7576a6, "usbnet_probe" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x62da577d, "usbnet_skb_return" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x71c90087, "memcmp" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5f754e5a, "memset" },
	{ 0x9214b99, "skb_put" },
	{ 0x99bb8806, "memmove" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04E8p689Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p6889d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "95336C91F26AFE39341AA4E");
