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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x96499f2, "put_pid" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x7f8a9562, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6df921e2, "proc_symlink" },
	{ 0x97255bdf, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0x4c4f47d6, "sound_class" },
	{ 0x5ca18a2, "_raw_write_lock_irqsave" },
	{ 0x1b0ef1ca, "pid_vnr" },
	{ 0xd07da2bc, "single_release" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x39ddd88, "no_llseek" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xbd4a6a92, "kobject_set_name" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x9689c582, "__register_chrdev" },
	{ 0x1eaa5033, "proc_set_size" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x9943b1a3, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe7ef4c7c, "nonseekable_open" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafa10a99, "down_read" },
	{ 0xaafd9237, "_raw_write_unlock_irqrestore" },
	{ 0xe8040962, "proc_remove" },
	{ 0x3b3a1192, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x3ea40fd3, "PDE_DATA" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x4dec644, "proc_mkdir" },
	{ 0xb0ff659, "device_del" },
	{ 0x11089ac7, "_ctype" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x7c1372e8, "panic" },
	{ 0x874bc57d, "fasync_helper" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xd6d1129e, "input_set_capability" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0xfe487043, "init_uts_ns" },
	{ 0x6b685034, "device_add" },
	{ 0x94425488, "up_write" },
	{ 0xa1633992, "_dev_err" },
	{ 0xbc22018b, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61651be, "strcat" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xd040e01a, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x175ec858, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x391d538b, "dev_driver_string" },
	{ 0x769624d5, "single_open_size" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2ab39df1, "proc_create_data" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0xa1d131ed, "vmemdup_user" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x67258e26, "device_initialize" },
	{ 0xb17595c3, "proc_mkdir_mode" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x9e4f7df8, "kill_fasync" },
	{ 0x49970de8, "finish_wait" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8ccc143c, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FE9E305B02CD884DFC23D55");
