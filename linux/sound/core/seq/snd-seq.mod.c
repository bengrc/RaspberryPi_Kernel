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
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x96499f2, "put_pid" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x3facf72c, "snd_register_device" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0x1b0ef1ca, "pid_vnr" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x5484c6ba, "snd_device_initialize" },
	{ 0x39ddd88, "no_llseek" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeea0399, "strscpy" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xe7ef4c7c, "nonseekable_open" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xafa10a99, "down_read" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x91def1c, "snd_seq_autoload_exit" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa3c07dc1, "snd_unregister_device" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x65efba25, "snd_timer_pause" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xde844759, "snd_timer_resolution" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd040e01a, "module_put" },
	{ 0xa7bd026e, "snd_timer_start" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb6cf01af, "snd_timer_open" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xc2c5b2b6, "vsnprintf" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x9fb6a69, "snd_timer_close" },
	{ 0x3c2edca1, "snd_seq_root" },
	{ 0xf031c63c, "snd_info_free_entry" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x370a0736, "snd_seq_autoload_init" },
	{ 0x1d74d57d, "snd_info_create_module_entry" },
	{ 0xb9a88a, "snd_info_register" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-device,snd-timer";


MODULE_INFO(srcversion, "956909B391065CE5CFDB6D3");
