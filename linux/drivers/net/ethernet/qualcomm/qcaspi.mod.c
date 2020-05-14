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
	{ 0xcbfc45e3, "netdev_info" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x7f8a9562, "single_open" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd07da2bc, "single_release" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x13ddb114, "spi_setup" },
	{ 0x2b6ddf3f, "qcafrm_fsm_decode" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x9943b1a3, "seq_read" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x326b63e, "netif_schedule_queue" },
	{ 0x5f754e5a, "memset" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0x54111370, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xa1633992, "_dev_err" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0xfbe951b7, "of_get_mac_address" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xca2fc8b6, "netdev_warn" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2ad8630c, "dev_trans_start" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb952953d, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qca_7k_common";

MODULE_ALIAS("spi:qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "55F8608E030FA4EB900E5DE");
