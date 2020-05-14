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
	{ 0xf669f98c, "can_change_mtu" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0x957a2a7d, "can_get_echo_skb" },
	{ 0x129e065f, "can_bus_off" },
	{ 0x86a640d5, "can_put_echo_skb" },
	{ 0x363356bf, "netif_device_attach" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x1a6c1927, "open_candev" },
	{ 0xd0e9c7f, "dmam_alloc_coherent" },
	{ 0xcbfc45e3, "netdev_info" },
	{ 0x6eb5f104, "register_candev" },
	{ 0xd2a64942, "spi_get_device_id" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5b151d90, "devm_regulator_get_optional" },
	{ 0x13ddb114, "spi_setup" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc39bb73e, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0x47820ec9, "of_match_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa19cf59b, "close_candev" },
	{ 0x5c65ae9f, "free_candev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa616e2cc, "unregister_candev" },
	{ 0xf5e18bfd, "regulator_enable" },
	{ 0x978b0c30, "regulator_disable" },
	{ 0x1000e51, "schedule" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d669763, "memcpy" },
	{ 0xf07137ff, "alloc_can_skb" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0x2045b0f1, "alloc_can_err_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa1633992, "_dev_err" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfdae57cb, "can_free_echo_skb" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "F3FC76E4137CB804B3C9781");
