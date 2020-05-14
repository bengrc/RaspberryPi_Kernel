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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x58c726b5, "usb_stor_set_xfer_buf" },
	{ 0x1022d95d, "usb_stor_bulk_transfer_buf" },
	{ 0x7fc63685, "usb_stor_access_xfer_buf" },
	{ 0x8b234c6b, "usb_stor_post_reset" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb8b8f55e, "usb_stor_disconnect" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb6a179b7, "usb_stor_probe2" },
	{ 0x3215c9ed, "fill_inquiry_response" },
	{ 0x11c6b8ac, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb102e8b1, "usb_stor_pre_reset" },
	{ 0xa0ba2da5, "usb_stor_reset_resume" },
	{ 0xc1981b8, "usb_stor_ctrl_transfer" },
	{ 0x7d51979e, "usb_stor_suspend" },
	{ 0x853a7941, "usb_stor_probe1" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5f45d2, "usb_stor_resume" },
	{ 0x9d669763, "memcpy" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7762fdf3, "usb_stor_Bulk_reset" },
	{ 0x99bb8806, "memmove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0584p0008d0102dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B4p010Ad0102dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "951AAEE14E9E8B20556B520");
