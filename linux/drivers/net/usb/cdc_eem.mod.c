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
	{ 0xfa6625c1, "usbnet_get_endpoints" },
	{ 0xca2fc8b6, "netdev_warn" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x6552e01e, "usbnet_device_suggests_idle" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x62da577d, "usbnet_skb_return" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x99bb8806, "memmove" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x9214b99, "skb_put" },
	{ 0x122170da, "crc32_le" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "7B36069B1D7AB812D12E939");
