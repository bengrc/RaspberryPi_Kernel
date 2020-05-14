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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd478eb29, "register_pernet_device" },
	{ 0xcf05465c, "sockfd_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xaaefbce3, "udp6_set_csum" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x2c194fa9, "sock_release" },
	{ 0x9a81089a, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa6981031, "sock_create_kern" },
	{ 0x91715312, "sprintf" },
	{ 0x8800a838, "inet6_csk_xmit" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x39eb8ecc, "udp_sock_create6" },
	{ 0xc87b7b87, "setup_udp_tunnel_sock" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0x4bb2bb7e, "kernel_connect" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x78d51c29, "unregister_pernet_device" },
	{ 0x3b89d8df, "__ip_queue_xmit" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8ad45a1d, "kernel_sock_shutdown" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x7a475670, "sk_dst_check" },
	{ 0xce6c0a2c, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x401aecb0, "udp_set_csum" },
	{ 0x171c8153, "kernel_bind" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x1600582b, "udp_sock_create4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,ip6_udp_tunnel,udp_tunnel";


MODULE_INFO(srcversion, "41E5040B7F2858A70B886DC");
