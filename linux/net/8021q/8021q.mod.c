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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x9d9d30cc, "gro_find_receive_by_type" },
	{ 0xf6ad8adc, "dev_change_flags" },
	{ 0x80011970, "vlan_filter_push_vids" },
	{ 0xbd4676fd, "dev_mc_unsync" },
	{ 0xbe518f62, "vlan_filter_drop_vids" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4e51332b, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3ee88449, "dev_get_nest_level" },
	{ 0x3e231a30, "proc_create_single_data" },
	{ 0x821d599a, "garp_uninit_applicant" },
	{ 0xf68c87d6, "vlan_dev_vlan_id" },
	{ 0xddb7a482, "dev_uc_add" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x7340d73d, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5cfb0478, "vlan_uses_dev" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0x60c3fa31, "dev_set_allmulti" },
	{ 0xa8208631, "vlan_vid_del" },
	{ 0x36cd6bd4, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xacb21022, "linkwatch_fire_event" },
	{ 0x8abe9a7f, "dev_add_offload" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x2093edb9, "vlan_vid_add" },
	{ 0x6554cd92, "__netpoll_setup" },
	{ 0xf0e952ea, "garp_init_applicant" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xe8040962, "proc_remove" },
	{ 0x9e0bc1de, "vlan_ioctl_set" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xbf638b3, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xe2031e9b, "__ethtool_get_link_ksettings" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x35dc135a, "__netpoll_free_async" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0xa8916d90, "garp_register_application" },
	{ 0x68183b3b, "nla_put" },
	{ 0xb17c6251, "netdev_upper_dev_unlink" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x89cc8fab, "dev_remove_offload" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x13cd319b, "proc_mkdir_data" },
	{ 0x44cac79d, "netif_stacked_transfer_operstate" },
	{ 0xc00e3d8d, "gro_find_complete_by_type" },
	{ 0x341c6c58, "init_net" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x95d77d0f, "__dev_get_by_index" },
	{ 0xa1377adc, "garp_request_leave" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xe2e018f8, "nla_validate" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa3bcc5bc, "eth_header_parse" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x24316758, "netdev_upper_dev_link" },
	{ 0x844952c1, "proc_create_net_data" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x1c8d463e, "dev_uc_unsync" },
	{ 0x2fd1d842, "__dev_get_by_name" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xa89f9c81, "garp_unregister_application" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0xca2fc8b6, "netdev_warn" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xd437c91e, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0xa028396, "dev_uc_del" },
	{ 0x9fa957a, "dev_uc_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb48c2771, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x7093496e, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9416b3e9, "dev_get_stats" },
	{ 0x4db0ad33, "dev_set_mtu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=garp";


MODULE_INFO(srcversion, "A493A705D0E3D7CD40F6F48");
