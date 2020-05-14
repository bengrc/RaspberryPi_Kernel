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
	{ 0x13947850, "eth_mac_addr" },
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
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x38b14c35, "skb_tstamp_tx" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FF01F2D4C53E7F939842380");
