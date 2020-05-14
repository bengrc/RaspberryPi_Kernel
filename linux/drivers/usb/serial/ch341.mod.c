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
	{ 0xb65edf08, "usb_serial_generic_tiocmiwait" },
	{ 0x7328db1, "usb_serial_deregister_drivers" },
	{ 0x3e4d00dd, "usb_serial_register_drivers" },
	{ 0x5a6e03dd, "usb_serial_generic_resume" },
	{ 0x6635750, "usb_serial_generic_open" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9a3ba060, "tty_kref_put" },
	{ 0x720e386, "usb_serial_handle_dcd_change" },
	{ 0x4debd025, "tty_port_tty_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xf8eaf684, "usb_serial_generic_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1633992, "_dev_err" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v4348p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p5523d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D9CE457DD2CD8E39140EC5C");
