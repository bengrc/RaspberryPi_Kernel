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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e8ca099, "dev_forward_skb" },
	{ 0xbd4676fd, "dev_mc_unsync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3ee88449, "dev_get_nest_level" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xddb7a482, "dev_uc_add" },
	{ 0x5795cf6a, "__dev_forward_skb" },
	{ 0xafd7feef, "dev_mc_add_excl" },
	{ 0xd935c278, "netdev_rx_handler_register" },
	{ 0x669bc76c, "dev_uc_add_excl" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x60c3fa31, "dev_set_allmulti" },
	{ 0xa8208631, "vlan_vid_del" },
	{ 0x36cd6bd4, "call_netdevice_notifiers" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xacb21022, "linkwatch_fire_event" },
	{ 0x2093edb9, "vlan_vid_add" },
	{ 0x6554cd92, "__netpoll_setup" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0xbf638b3, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0xfcb5ef43, "dev_set_mac_address" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xcc605124, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xe2031e9b, "__ethtool_get_link_ksettings" },
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0x35dc135a, "__netpoll_free_async" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x10a13e37, "dev_mc_del" },
	{ 0x68183b3b, "nla_put" },
	{ 0xb17c6251, "netdev_upper_dev_unlink" },
	{ 0x7fe72898, "ndo_dflt_fdb_dump" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x44cac79d, "netif_stacked_transfer_operstate" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x95d77d0f, "__dev_get_by_index" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xcbb6783f, "eth_header_cache_update" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9478ffc, "netdev_rx_handler_unregister" },
	{ 0xa3bcc5bc, "eth_header_parse" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x7c9bf6d6, "passthru_features_check" },
	{ 0x24316758, "netdev_upper_dev_link" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x1c8d463e, "dev_uc_unsync" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0xd437c91e, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6a1fa5ef, "eth_header_cache" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0xa028396, "dev_uc_del" },
	{ 0x9fa957a, "dev_uc_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xb48c2771, "netdev_update_features" },
	{ 0xa64dd803, "dev_queue_xmit_accel" },
	{ 0x4a93d96d, "netdev_is_rx_handler_busy" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x7093496e, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x4db0ad33, "dev_set_mtu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F44DBFD4498D11E5B6CCBD8");
