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
	{ 0x6d89b199, "proc_dointvec_minmax" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x750bf5c6, "release_sock" },
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xd478eb29, "register_pernet_device" },
	{ 0x41dd7d3b, "nf_ct_netns_put" },
	{ 0x50093f6, "kernel_sendmsg" },
	{ 0xe6646669, "genl_register_family" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe43936f9, "genl_unregister_family" },
	{ 0xd51514c, "ip_local_out" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2c194fa9, "sock_release" },
	{ 0x9a81089a, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xbb18f5f1, "ipv4_update_pmtu" },
	{ 0xa1841799, "proc_create_net_single" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2124474, "ip_send_check" },
	{ 0x9f6e2fd7, "sock_recvmsg" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x1fff35c6, "nf_ct_expect_init" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xa6981031, "sock_create_kern" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2746efce, "__skb_checksum" },
	{ 0x8f6a8b20, "skb_set_owner_w" },
	{ 0x999e8297, "vfree" },
	{ 0x3f22a4e7, "__icmp_send" },
	{ 0xeea0399, "strscpy" },
	{ 0xb15b4109, "crc32c" },
	{ 0x91715312, "sprintf" },
	{ 0xeb995028, "skb_realloc_headroom" },
	{ 0xebe320a, "nf_ct_deliver_cached_events" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x53aa00e4, "nf_hook_slow" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xb460eac4, "nf_ct_delete" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x41f6cf24, "ip_defrag" },
	{ 0x5f754e5a, "memset" },
	{ 0x60313cf9, "skb_checksum" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe8cc61c6, "__nf_conntrack_confirm" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x54111370, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7d1b3708, "inet_addr_type" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x78d51c29, "unregister_pernet_device" },
	{ 0x685e7e52, "inet_select_addr" },
	{ 0xd95a9c05, "nf_unregister_net_hooks" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x1147424b, "nf_ct_expect_put" },
	{ 0x249d5a5b, "ip_mc_join_group" },
	{ 0x2b626e72, "iov_iter_kvec" },
	{ 0x2ec309de, "nf_ct_expect_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x68183b3b, "nla_put" },
	{ 0x6c44301d, "seq_putc" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf8da77ea, "ip_route_me_harder" },
	{ 0x2fae11b2, "nf_conntrack_alter_reply" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xe21c8f4f, "nf_ct_expect_related_report" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0x56c8693b, "refcount_dec_if_one" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x341c6c58, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb05fc310, "sysctl_rmem_max" },
	{ 0xfac8865f, "sysctl_wmem_max" },
	{ 0xd040e01a, "module_put" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x969c0419, "nf_register_net_hooks" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xb0b109b2, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x844952c1, "proc_create_net_data" },
	{ 0x2fd1d842, "__dev_get_by_name" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x78f92566, "iptunnel_handle_offloads" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0x60e1284f, "__module_get" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x4ecc241c, "genlmsg_put" },
	{ 0x18ffdf3c, "skb_make_writable" },
	{ 0x49970de8, "finish_wait" },
	{ 0x25afd127, "nf_ct_netns_get" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb99e0816, "nf_register_sockopt" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x76fc97be, "register_net_sysctl" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf83f107b, "__ip_select_ident" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x60369745, "nf_conntrack_find_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc4f1b8b, "nf_ct_ext_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "C0643A4BBED8F694498130C");
