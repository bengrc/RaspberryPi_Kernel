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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x750bf5c6, "release_sock" },
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6e0c17cc, "net_rwsem" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1dcb421c, "nf_queue_nf_hook_drop" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0x15a8a2b6, "nf_nat_hook" },
	{ 0xd55081b9, "ip_ct_attach" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x64c2510d, "nf_defrag_ipv6_enable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0xc8770821, "inet_proto_csum_replace4" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x94283f4c, "proc_set_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2746efce, "__skb_checksum" },
	{ 0xa59052f0, "__siphash_aligned" },
	{ 0xb15b4109, "crc32c" },
	{ 0x6a3de870, "nla_policy_len" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xafa10a99, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xe2ed0b2a, "nf_ip_checksum" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0xba18bce4, "nf_log_packet" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0xd95a9c05, "nf_unregister_net_hooks" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcc93ae45, "nf_checksum_partial" },
	{ 0x68183b3b, "nla_put" },
	{ 0x6c44301d, "seq_putc" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xe0878bfe, "__krealloc" },
	{ 0x24d273d1, "add_timer" },
	{ 0x341c6c58, "init_net" },
	{ 0xff5ae546, "nf_checksum" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xd040e01a, "module_put" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x969c0419, "nf_register_net_hooks" },
	{ 0x11b34904, "ipv6_skip_exthdr" },
	{ 0x69439a68, "make_kuid" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x40fdb313, "param_get_uint" },
	{ 0xb0b109b2, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x844952c1, "proc_create_net_data" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x400c069c, "nf_ct_hook" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x403bb37d, "nf_defrag_ipv4_enable" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xd105c3ee, "param_set_uint" },
	{ 0x18ffdf3c, "skb_make_writable" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb99e0816, "nf_register_sockopt" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x12cabc89, "siphash_2u64" },
	{ 0x76fc97be, "register_net_sysctl" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0x772d3dd3, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x9a717656, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_defrag_ipv6,nf_defrag_ipv4";


MODULE_INFO(srcversion, "3BD626839187D6116A93C86");
