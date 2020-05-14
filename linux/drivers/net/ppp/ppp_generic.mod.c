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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x5cdc9a0c, "skb_queue_head" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xd478eb29, "register_pernet_device" },
	{ 0xcd4c97a1, "up_read" },
	{ 0xda26a9fe, "bpf_prog_create" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0x38142440, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x9689c582, "__register_chrdev" },
	{ 0xf731b5ad, "bpf_prog_destroy" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x132009e3, "__put_net" },
	{ 0xe7d050ec, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xafa10a99, "down_read" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x8e3f4223, "skb_copy_datagram_iter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x78d51c29, "unregister_pernet_device" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x613ab2b6, "netdev_printk" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x69e1d2e, "device_create" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0xce6c0a2c, "fput" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x61275678, "idr_remove" },
	{ 0xd040e01a, "module_put" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2858833f, "skb_pull_rcsum" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xead281b3, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x682b8491, "fget" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x5868fd99, "class_destroy" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9214b99, "skb_put" },
	{ 0xaf38e081, "idr_find" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0x9c921cae, "__class_create" },
	{ 0x6405dcd3, "slhc_toss" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x42b41bb0, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=slhc";


MODULE_INFO(srcversion, "5581FA83D37F49F1F3955EB");
