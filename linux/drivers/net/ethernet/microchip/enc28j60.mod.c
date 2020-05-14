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
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0x3c0bd0f2, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfbe951b7, "of_get_mac_address" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xb952953d, "alloc_etherdev_mqs" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0x9214b99, "skb_put" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd0106a1b, "spi_write_then_read" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "F389A0D8E9CCE15A43DFBA8");
