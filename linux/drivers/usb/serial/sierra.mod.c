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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x7328db1, "usb_serial_deregister_drivers" },
	{ 0x3e4d00dd, "usb_serial_register_drivers" },
	{ 0x73fd981b, "usb_clear_halt" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x74643ce6, "tty_flip_buffer_push" },
	{ 0xffb3c917, "tty_insert_flip_string_fixed_flag" },
	{ 0x12492803, "usb_autopm_get_interface_no_resume" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x28ad01c0, "usb_get_from_anchor" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x5452c3c2, "usb_unanchor_urb" },
	{ 0xeb671564, "usb_anchor_urb" },
	{ 0x9d669763, "memcpy" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcef084ae, "usb_autopm_get_interface_async" },
	{ 0x491c7b59, "usb_serial_port_softint" },
	{ 0x6f4951e5, "usb_autopm_put_interface_async" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x524ccab1, "usb_autopm_put_interface" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x8027968f, "usb_autopm_get_interface" },
	{ 0x6e6a6ecd, "tty_port_tty_hangup" },
	{ 0xa1633992, "_dev_err" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0F3Dp0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p1B1Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p211Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p1E1Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0224d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0023d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p0025d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6805d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6808d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6809d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6816d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6834d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6838d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6850d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6851d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6852d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6853d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6855d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6856d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6859d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p685Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6880d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6890d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6891d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6892d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p68ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "F7567B248F0A20CE529D89F");
