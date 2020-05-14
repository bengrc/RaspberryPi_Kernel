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
	{ 0x4debd025, "tty_port_tty_get" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x803a331f, "bus_register" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7dcdf3be, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x7bc77cd9, "tty_port_open" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x5d638872, "tty_port_hangup" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x6f7163ff, "tty_register_driver" },
	{ 0x8027968f, "usb_autopm_get_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x258b37db, "put_tty_driver" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3f4094c8, "tty_set_operations" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x519df4d, "__tty_insert_flip_char" },
	{ 0x97ab7daa, "tty_port_close" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xb0ff659, "device_del" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x86aa147b, "tty_ldisc_deref" },
	{ 0xfd242dfd, "tty_port_register_device" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41bf5d81, "usb_unpoison_urb" },
	{ 0xced14002, "usb_poison_urb" },
	{ 0x6c44301d, "seq_putc" },
	{ 0x6032570a, "tty_port_init" },
	{ 0xffb3c917, "tty_insert_flip_string_fixed_flag" },
	{ 0x6355f38b, "tty_port_destroy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x2ffc12ea, "tty_vhangup" },
	{ 0x6515316, "tty_ldisc_ref" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x6b685034, "device_add" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf18fb489, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4a4abf82, "usb_store_new_id" },
	{ 0x43a2a13f, "usb_match_id" },
	{ 0x61275678, "idr_remove" },
	{ 0xc4cec7a0, "tty_port_tty_wakeup" },
	{ 0xd040e01a, "module_put" },
	{ 0xa8aa8f4f, "tty_unregister_device" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xc95316f5, "usb_get_intf" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x6232a5c4, "tty_unregister_driver" },
	{ 0x957f88, "tty_hangup" },
	{ 0x845b2069, "usb_show_dynids" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x55a910b8, "tty_standard_install" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x66b0e2c5, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x67258e26, "device_initialize" },
	{ 0x82352136, "usb_match_one_id" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x9a3ba060, "tty_kref_put" },
	{ 0x49970de8, "finish_wait" },
	{ 0x7a46b5d1, "driver_attach" },
	{ 0x74643ce6, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xaf38e081, "idr_find" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x524ccab1, "usb_autopm_put_interface" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x2da7e1a5, "usb_put_intf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6BD3E9282AAA6CAFE30AE82");
