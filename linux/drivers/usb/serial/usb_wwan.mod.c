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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x28ad01c0, "usb_get_from_anchor" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x8027968f, "usb_autopm_get_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x6f4951e5, "usb_autopm_put_interface_async" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xffb3c917, "tty_insert_flip_string_fixed_flag" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa1633992, "_dev_err" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xcef084ae, "usb_autopm_get_interface_async" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x12492803, "usb_autopm_get_interface_no_resume" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x74643ce6, "tty_flip_buffer_push" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x491c7b59, "usb_serial_port_softint" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x524ccab1, "usb_autopm_put_interface" },
	{ 0xeb671564, "usb_anchor_urb" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";


MODULE_INFO(srcversion, "5782B21603A4324ADF1B639");
