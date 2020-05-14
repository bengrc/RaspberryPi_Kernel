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
	{ 0xb7700415, "param_ops_int" },
	{ 0x7328db1, "usb_serial_deregister_drivers" },
	{ 0x3e4d00dd, "usb_serial_register_drivers" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x5452c3c2, "usb_unanchor_urb" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xeb671564, "usb_anchor_urb" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1633992, "_dev_err" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x491c7b59, "usb_serial_port_softint" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x74643ce6, "tty_flip_buffer_push" },
	{ 0xffb3c917, "tty_insert_flip_string_fixed_flag" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v091Ep0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E8D2AA771D471CE65ADBEC6");
