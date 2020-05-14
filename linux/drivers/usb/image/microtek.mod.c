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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x166503b8, "scsi_scan_host" },
	{ 0x402b56ac, "scsi_add_host_with_dma" },
	{ 0x84c0ca28, "scsi_host_alloc" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x71c90087, "memcmp" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xef061de5, "scsi_cmd_get_serial" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc9a16c73, "page_address" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0x748ee2a6, "usb_lock_device_for_reset" },
	{ 0xe942d429, "blk_queue_dma_alignment" },
	{ 0x37a0cba, "kfree" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xdedbc987, "scsi_host_put" },
	{ 0x8a14134, "scsi_remove_host" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04CEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0094d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00B6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "08FBA7B226F0568BFDD4A3D");
