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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x80c8b05d, "module_layout" },
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xcd4c97a1, "up_read" },
	{ 0xa0a45721, "tty_unlock" },
	{ 0x96bcb7f, "start_tty" },
	{ 0x349cba85, "strchr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6bc2db64, "screen_pos" },
	{ 0xf3096c24, "tty_set_ldisc" },
	{ 0x277e5d73, "tty_buffer_unlock_exclusive" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x96554810, "register_keyboard_notifier" },
	{ 0x91715312, "sprintf" },
	{ 0x55417264, "unregister_vt_notifier" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafa10a99, "down_read" },
	{ 0xa0b6c3dd, "kobject_create_and_add" },
	{ 0x35816543, "vc_cons" },
	{ 0x22b325d5, "kd_mksound" },
	{ 0x3b3a1192, "input_event" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x42e7859a, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb11d9000, "tty_dev_name_to_number" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x9ed554b3, "unregister_keyboard_notifier" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x54111370, "kthread_stop" },
	{ 0x86aa147b, "tty_ldisc_deref" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0x9338b503, "tty_ldisc_flush" },
	{ 0x328a05f1, "strncpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6515316, "tty_ldisc_ref" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8acec858, "tty_ldisc_receive_buf" },
	{ 0xc8339e24, "string_unescape" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x175ec858, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x57f30610, "screen_glyph" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0xfb954790, "stop_tty" },
	{ 0x6e8a90eb, "tty_write_room" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc2c5b2b6, "vsnprintf" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xc1d59b98, "tty_kopen" },
	{ 0x90ec0c03, "tty_kclose" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x721b1851, "skip_spaces" },
	{ 0x4e6e8ea7, "fg_console" },
	{ 0x581cde4e, "up" },
	{ 0x3a32ed08, "set_user_nice" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x9a3ba060, "tty_kref_put" },
	{ 0x49970de8, "finish_wait" },
	{ 0x121e83d7, "inverse_translate" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x58b582a, "vt_get_leds" },
	{ 0x8cc409af, "tty_schedule_flip" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe020ea82, "tty_buffer_lock_exclusive" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbc2910a0, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x9cf41a78, "down_timeout" },
	{ 0x83ef67e5, "misc_deregister" },
	{ 0x13110126, "request_resource" },
	{ 0xceb5013b, "tty_lock" },
	{ 0xbf041102, "register_vt_notifier" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3057fa8d, "tty_set_termios" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8ccc143c, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1024C71120A80DFA2FB43C1");
