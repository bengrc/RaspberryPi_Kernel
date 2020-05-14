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
	{ 0xcd697838, "nfnetlink_has_listeners" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xffe34ebe, "rht_bucket_nested" },
	{ 0x3283e6b0, "prandom_seed_full_state" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd03f84c8, "from_kuid_munged" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x9a81089a, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xbb771b1a, "rhltable_init" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0xc8770821, "inet_proto_csum_replace4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xcdfd9f76, "ipv6_find_hdr" },
	{ 0xc3d579c5, "rhashtable_insert_slow" },
	{ 0xa68613dd, "get_jiffies_64" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x8ba8f2b0, "from_kgid_munged" },
	{ 0x2899e9fa, "nfnetlink_subsys_unregister" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xee8d74d6, "jiffies64_to_nsecs" },
	{ 0xea7c2748, "__get_task_comm" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8b53df51, "nfnetlink_send" },
	{ 0x1dc4fef7, "rht_bucket_nested_insert" },
	{ 0x5f754e5a, "memset" },
	{ 0x60313cf9, "skb_checksum" },
	{ 0x7d4d2be0, "rhashtable_free_and_destroy" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0x3464b72d, "nla_strdup" },
	{ 0x328a05f1, "strncpy" },
	{ 0x68183b3b, "nla_put" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x57fb02e1, "nfnetlink_unicast" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2368cdb3, "skb_store_bits" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0xd317669c, "__skb_get_hash" },
	{ 0x83618e29, "nf_register_net_hook" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xc89cf771, "nf_unregister_net_hook" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xd040e01a, "module_put" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xb229734b, "nf_route" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x182e681b, "static_key_slow_dec" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x2fd1d842, "__dev_get_by_name" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xc2c5b2b6, "vsnprintf" },
	{ 0x60e1284f, "__module_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0xa85dc69, "nfnetlink_subsys_register" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0xfe3146e3, "nfnetlink_set_err" },
	{ 0x18ffdf3c, "skb_make_writable" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf9dcd1d2, "nla_reserve" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfc07c74, "static_key_slow_inc" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xef835566, "__netlink_dump_start" },
	{ 0x9a717656, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "737FBE666EE8BED9FD98DB3");
