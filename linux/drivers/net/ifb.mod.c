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
	{ 0xb7700415, "param_ops_int" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x94425488, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc2d863a2, "__rtnl_link_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x55a515c6, "register_netdevice" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x81847b67, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbc22018b, "down_write" },
	{ 0x731bf130, "pernet_ops_rwsem" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x335f6ace, "ether_setup" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0xad5239a4, "netif_receive_skb" },
	{ 0x2858833f, "skb_pull_rcsum" },
	{ 0xafd84233, "dev_get_by_index_rcu" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1f5a5393, "netif_tx_stop_all_queues" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "921E9A043B15DFBFEDF2E01");
