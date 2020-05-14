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
	{ 0x4f7a4dac, "class_find_device" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe23438c4, "get_net_ns_by_fd" },
	{ 0xd478eb29, "register_pernet_device" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0xe6646669, "genl_register_family" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xe43936f9, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb99e0746, "dev_change_net_namespace" },
	{ 0xcb7a362b, "dev_get_by_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf3ce1ac7, "trace_event_buffer_reserve" },
	{ 0xe0b9c2d0, "get_net_ns_by_pid" },
	{ 0x91715312, "sprintf" },
	{ 0x132009e3, "__put_net" },
	{ 0x760d6ec2, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8c2f40f0, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0xfcb5ef43, "dev_set_mac_address" },
	{ 0xb0ff659, "device_del" },
	{ 0xcefdd856, "bpf_trace_run1" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x78d51c29, "unregister_pernet_device" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x2138166e, "class_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x569164ba, "trace_event_reg" },
	{ 0x68183b3b, "nla_put" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xa6f16826, "dev_get_by_index" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x6b685034, "device_add" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x341c6c58, "init_net" },
	{ 0x61a6ff9, "__class_register" },
	{ 0x3210151f, "perf_trace_run_bpf_submit" },
	{ 0x95d77d0f, "__dev_get_by_index" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xeb5a1d24, "class_for_each_device" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x43771e5b, "netlink_broadcast" },
	{ 0x894ef2d7, "trace_event_ignore_this_pid" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x1000e51, "schedule" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x1960b0c9, "genl_family_attrbuf" },
	{ 0x66dc6158, "trace_event_buffer_commit" },
	{ 0x758ac9bd, "device_rename" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x6d1bf6bb, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe05dc78c, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa5769beb, "bpf_trace_run2" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x540ca76b, "trace_event_raw_init" },
	{ 0x4ecc241c, "genlmsg_put" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x67258e26, "device_initialize" },
	{ 0x49970de8, "finish_wait" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5559c507, "trace_raw_output_prep" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x35e85c3d, "trace_output_call" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdbfe0b3c, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6F4DDB6F821AA16B325D10F");
