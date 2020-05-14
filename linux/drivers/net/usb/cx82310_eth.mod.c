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
	{ 0xd755c8f5, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfa6625c1, "usbnet_get_endpoints" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x431f8187, "usb_string" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1633992, "_dev_err" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x62da577d, "usbnet_skb_return" },
	{ 0x9d669763, "memcpy" },
	{ 0x9214b99, "skb_put" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0572pCB01d*dcFFdsc00dp00ic*isc*ip*in*");

MODULE_INFO(srcversion, "FFC7D166B896B1589120813");
