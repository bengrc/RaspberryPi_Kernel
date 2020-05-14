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
	{ 0xc5a6c57b, "sock_no_sendpage" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0xab64b595, "sock_no_getsockopt" },
	{ 0x5e636344, "sock_no_setsockopt" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x1f105511, "sock_no_ioctl" },
	{ 0x19513f0e, "datagram_poll" },
	{ 0x372e218d, "sock_no_getname" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0xfdacf1b5, "sock_no_connect" },
	{ 0xdf3dd08c, "sock_no_bind" },
	{ 0xf426417d, "xfrm_register_km" },
	{ 0x6a2d35f0, "sock_register" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x2382bc58, "proto_register" },
	{ 0x3e668302, "proto_unregister" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x55cb2f6e, "xfrm_unregister_km" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0xbefbc253, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x6e5375ab, "xfrm_find_acq" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0x870d53cf, "xfrm_policy_byid" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x9a8fcc99, "xfrm_state_add" },
	{ 0xba51c818, "xfrm_state_update" },
	{ 0x456362cb, "xfrm_init_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x2c49a125, "xfrm_state_alloc" },
	{ 0xfeb60139, "xfrm_state_delete" },
	{ 0xae1cc70f, "xfrm_policy_insert" },
	{ 0x76b239ac, "xfrm_policy_bysel_ctx" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x25f8a9fb, "sock_i_ino" },
	{ 0xd03f84c8, "from_kuid_munged" },
	{ 0x7ac24b19, "sock_i_uid" },
	{ 0x844952c1, "proc_create_net_data" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x34ecc16, "sock_init_data" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x72aa8854, "xfrm_state_lookup" },
	{ 0x42a6dd28, "__xfrm_state_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x82484216, "xfrm_find_acq_byseq" },
	{ 0x573a061a, "km_state_notify" },
	{ 0xc9e38dab, "xfrm_state_flush" },
	{ 0xfd8a321b, "xfrm_state_walk" },
	{ 0x91f21767, "xfrm_state_walk_done" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x891591a9, "skb_copy" },
	{ 0xf4fcd5b1, "km_policy_notify" },
	{ 0x4aef5cd7, "xfrm_policy_flush" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x84dc8f95, "__sock_recv_ts_and_drops" },
	{ 0x8d7996f, "skb_free_datagram" },
	{ 0x8e3f4223, "skb_copy_datagram_iter" },
	{ 0x6f1cbc6f, "skb_recv_datagram" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x573ba536, "xfrm_policy_destroy" },
	{ 0x93739094, "xfrm_policy_alloc" },
	{ 0x6f00493c, "xfrm_policy_walk_done" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xe14ff1a7, "xfrm_policy_walk" },
	{ 0x9214b99, "skb_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xedd55fd9, "sock_rfree" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "70ACE3B25A4A171C15583CB");
