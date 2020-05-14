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
	{ 0x750bf5c6, "release_sock" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb5854c0c, "can_rx_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6e1698a, "hrtimer_active" },
	{ 0x1f1e05af, "hrtimer_forward" },
	{ 0x5e636344, "sock_no_setsockopt" },
	{ 0xab64b595, "sock_no_getsockopt" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x136a2128, "can_proto_unregister" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa1841799, "proc_create_net_single" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x372e218d, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0x78a9b1b, "sock_queue_rcv_skb" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x25f8a9fb, "sock_i_ino" },
	{ 0x91715312, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5a6c57b, "sock_no_sendpage" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0x3ea40fd3, "PDE_DATA" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9c608226, "sock_efree" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdf3dd08c, "sock_no_bind" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x6c44301d, "seq_putc" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x13cd319b, "proc_mkdir_data" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0xafd84233, "dev_get_by_index_rcu" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xa6f16826, "dev_get_by_index" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x84b926fe, "can_ioctl" },
	{ 0xd0e55644, "can_send" },
	{ 0x84dc8f95, "__sock_recv_ts_and_drops" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x19513f0e, "datagram_poll" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0x37f8dc48, "can_proto_register" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6dc5e4de, "can_rx_unregister" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9214b99, "skb_put" },
	{ 0x51294cce, "_copy_to_iter" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8d7996f, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "A451EDC5BE08EEF697723C1");
