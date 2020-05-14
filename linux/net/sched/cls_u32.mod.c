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
	{ 0x9e95998d, "unregister_tcf_proto_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xea476aed, "register_tcf_proto_ops" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x9881f35f, "idr_alloc_u32" },
	{ 0x804a55da, "idr_replace" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0x1ea84339, "tcf_action_exec" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfb67f013, "tcf_exts_validate" },
	{ 0x44feb52a, "idr_alloc_cyclic" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x61275678, "idr_remove" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x132009e3, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xd7c8f427, "tcf_exts_destroy" },
	{ 0xa81cc219, "tc_setup_cb_call" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x131b7dff, "tcf_exts_dump_stats" },
	{ 0xa6dd6c6b, "tcf_exts_dump" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AC5E24F3DADD6603BEF8FB4");
