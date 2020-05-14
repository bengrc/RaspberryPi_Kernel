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
	{ 0x231a4bae, "usb_serial_generic_unthrottle" },
	{ 0xe4809d9, "usb_serial_generic_throttle" },
	{ 0x7328db1, "usb_serial_deregister_drivers" },
	{ 0x3e4d00dd, "usb_serial_register_drivers" },
	{ 0x6635750, "usb_serial_generic_open" },
	{ 0xb1cacae9, "ezusb_fx1_ihex_firmware_download" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa1633992, "_dev_err" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x73fd981b, "usb_clear_halt" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xf8eaf684, "usb_serial_generic_close" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x2e63702a, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x9d669763, "memcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial,ezusb";

MODULE_ALIAS("usb:v0710p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0710p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F7539591A365D87A0211A67");
