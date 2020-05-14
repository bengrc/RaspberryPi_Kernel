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
	{ 0x55a515c6, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e8ca099, "dev_forward_skb" },
	{ 0xf6ad8adc, "dev_change_flags" },
	{ 0xbd4676fd, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xd51514c, "ip_local_out" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0xd935c278, "netdev_rx_handler_register" },
	{ 0x9a81089a, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x60c3fa31, "dev_set_allmulti" },
	{ 0xa8208631, "vlan_vid_del" },
	{ 0x36cd6bd4, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2093edb9, "vlan_vid_add" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0xe7d050ec, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xe2031e9b, "__ethtool_get_link_ksettings" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd95a9c05, "nf_unregister_net_hooks" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x21af32f7, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x68183b3b, "nla_put" },
	{ 0xb17c6251, "netdev_upper_dev_unlink" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x44cac79d, "netif_stacked_transfer_operstate" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x95d77d0f, "__dev_get_by_index" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0x7023d8ce, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x65c4b17c, "ip6_route_output_flags" },
	{ 0x969c0419, "nf_register_net_hooks" },
	{ 0xcbb6783f, "eth_header_cache_update" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa3bcc5bc, "eth_header_parse" },
	{ 0xf9478ffc, "netdev_rx_handler_unregister" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x24316758, "netdev_upper_dev_link" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0xe7345079, "netdev_features_change" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x1c8d463e, "dev_uc_unsync" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a1fa5ef, "eth_header_cache" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0x9fa957a, "dev_uc_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6eb522a, "ip6_local_out" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x4a93d96d, "netdev_is_rx_handler_busy" },
	{ 0x445c816c, "ida_destroy" },
	{ 0x7093496e, "dev_mc_sync" },
	{ 0xeb00f3ca, "ida_alloc_range" },
	{ 0xe2297ef, "ip6_route_input_lookup" },
	{ 0x9a717656, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "12CCD1E98B70C80AA31353B");
