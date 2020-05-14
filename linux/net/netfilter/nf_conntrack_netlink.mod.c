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
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x2899e9fa, "nfnetlink_subsys_unregister" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0xa85dc69, "nfnetlink_subsys_register" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x473e385d, "nf_conntrack_lock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0x8c6e11f4, "nf_conntrack_locks" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x39821364, "nf_ct_remove_expectations" },
	{ 0x22c6ed7c, "nf_conntrack_eventmask_report" },
	{ 0x1695c64b, "nf_conntrack_free" },
	{ 0xc9991fcb, "__nf_ct_try_assign_helper" },
	{ 0xa36d7990, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc4f1b8b, "nf_ct_ext_add" },
	{ 0xd195b302, "nf_ct_helper_ext_add" },
	{ 0x59528559, "nf_conntrack_alloc" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x15a8a2b6, "nf_nat_hook" },
	{ 0x6a3de870, "nla_policy_len" },
	{ 0x2e3b5665, "nf_connlabels_replace" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xbc14ed1, "nf_ct_iterate_cleanup_net" },
	{ 0xb460eac4, "nf_ct_delete" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x24d273d1, "add_timer" },
	{ 0x7c44fd55, "__nf_ct_expect_find" },
	{ 0x402b8281, "__request_module" },
	{ 0xe21c8f4f, "nf_ct_expect_related_report" },
	{ 0xeefc59f6, "__nf_conntrack_helper_find" },
	{ 0xc07fd387, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x2ec309de, "nf_ct_expect_alloc" },
	{ 0x60369745, "nf_conntrack_find_get" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0x42e5907e, "nf_ct_expect_iterate_net" },
	{ 0xb7bfc792, "nf_ct_unlink_expect_report" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0x542dbf86, "nf_ct_expect_find_get" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe2e018f8, "nla_validate" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1147424b, "nf_ct_expect_put" },
	{ 0xef835566, "__netlink_dump_start" },
	{ 0x7c32d0f0, "printk" },
	{ 0xfc91d36f, "nf_ct_expect_register_notifier" },
	{ 0xa03833bd, "nf_conntrack_register_notifier" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x5cfb8776, "nf_conntrack_unregister_notifier" },
	{ 0x5e842afc, "nf_ct_expect_unregister_notifier" },
	{ 0x8b53df51, "nfnetlink_send" },
	{ 0xcd697838, "nfnetlink_has_listeners" },
	{ 0xfe3146e3, "nfnetlink_set_err" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x7be03410, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0x5f754e5a, "memset" },
	{ 0x9a717656, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x12cabc89, "siphash_2u64" },
	{ 0xa59052f0, "__siphash_aligned" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x97255bdf, "strlen" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3ffba26e, "nf_ct_get_id" },
	{ 0x1ace27e7, "__nf_ct_l4proto_find" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "4AAFE04F70218885B0FE2F3");
