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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x685e7e52, "inet_select_addr" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0x55a515c6, "register_netdevice" },
	{ 0xb959fde9, "netdev_master_upper_dev_link" },
	{ 0xa439511e, "netdev_master_upper_dev_get" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0xd26d8e0e, "netdev_lower_get_next" },
	{ 0xb17c6251, "netdev_upper_dev_unlink" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0xf6ad8adc, "dev_change_flags" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x2bf6881, "ip6_dst_alloc" },
	{ 0x7429dfa8, "fib6_new_table" },
	{ 0x28dc4d68, "rt_dst_alloc" },
	{ 0xe2f06742, "fib_new_table" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x59ea77b5, "nd_tbl" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x8f6a8b20, "skb_set_owner_w" },
	{ 0xeb995028, "skb_realloc_headroom" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7177872, "__neigh_create" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x172d62c9, "arp_tbl" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x9a81089a, "dst_release" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xebf4c7e, "ip6_dst_lookup_flow" },
	{ 0x5f754e5a, "memset" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x53aa00e4, "nf_hook_slow" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5b627e57, "dev_queue_xmit_nit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x45b1884, "ip6_pol_route" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xc7821add, "fib_nl_delrule" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x5c4c884b, "fib_nl_newrule" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "82BC1CFA47999A343E8F8BC");
