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
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x34ecc16, "sock_init_data" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xa1841799, "proc_create_net_single" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7914a643, "sock_get_timestamp" },
	{ 0x3ea40fd3, "PDE_DATA" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x9c608226, "sock_efree" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6c44301d, "seq_putc" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x13cd319b, "proc_mkdir_data" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0x585c3a56, "dev_remove_pack" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xd040e01a, "module_put" },
	{ 0x2382bc58, "proto_register" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x6a2d35f0, "sock_register" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x3e668302, "proto_unregister" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x9d4fd290, "dev_add_pack" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x42b41bb0, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E0B525C5299754AA246FC05");
