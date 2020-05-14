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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xadbeeaf6, "cdev_alloc" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0x489c6f18, "cdev_del" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xb74a0255, "media_device_unregister_entity" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x8e41f17c, "fwnode_handle_put" },
	{ 0xf904ee5f, "media_devnode_create" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x7902b997, "media_graph_walk_start" },
	{ 0x86f8a7b3, "media_entity_get" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x39ddd88, "no_llseek" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf3ce1ac7, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0x22fc4f3a, "trace_print_flags_seq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8c2f40f0, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0xe864e62d, "device_register" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x240824f5, "i2c_verify_client" },
	{ 0x66ecb0ee, "media_graph_walk_next" },
	{ 0x2138166e, "class_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x569164ba, "trace_event_reg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x5347d8c2, "i2c_unregister_device" },
	{ 0x61a6ff9, "__class_register" },
	{ 0xa1633992, "_dev_err" },
	{ 0x3210151f, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xab9fff11, "cdev_add" },
	{ 0x4fdb023a, "media_device_register_entity" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xd040e01a, "module_put" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x894ef2d7, "trace_event_ignore_this_pid" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x1000e51, "schedule" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x66dc6158, "trace_event_buffer_commit" },
	{ 0xc6234a50, "media_create_pad_link" },
	{ 0xd7958ec3, "media_create_intf_link" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2ef64e1, "clk_get" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe05dc78c, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa5769beb, "bpf_trace_run2" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xaa273d9d, "media_entity_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe93f6042, "trace_print_symbols_seq" },
	{ 0x540ca76b, "trace_event_raw_init" },
	{ 0xa49b90de, "dev_fwnode" },
	{ 0x49970de8, "finish_wait" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2d8a56bc, "spi_unregister_device" },
	{ 0x5559c507, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x4cdbdf66, "media_devnode_remove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=media";


MODULE_INFO(srcversion, "6F0AFBF5BD15DA6818F84BE");
