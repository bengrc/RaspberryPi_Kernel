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
	{ 0x3ced903e, "ethtool_op_get_link" },
	{ 0x13947850, "eth_mac_addr" },
	{ 0x7c9bf6d6, "passthru_features_check" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0x65f1710b, "napi_complete_done" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xed23c2e1, "skb_headers_offset_update" },
	{ 0x4c639659, "skb_copy_header" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0xc9a16c73, "page_address" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0xa5d771fa, "napi_gro_receive" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0x9214b99, "skb_put" },
	{ 0x4ad6f0f0, "build_skb" },
	{ 0x54c11f15, "xdp_do_redirect" },
	{ 0xed3bb37b, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x7a0b65e3, "bpf_redirect_info" },
	{ 0xb48c2771, "netdev_update_features" },
	{ 0xda5d0d60, "bpf_prog_put" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0x5795cf6a, "__dev_forward_skb" },
	{ 0x46ec0de5, "xdp_return_frame_rx_napi" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6c23f444, "__napi_schedule" },
	{ 0x6b674b7c, "napi_schedule_prep" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2544d559, "netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x6aba9583, "napi_hash_del" },
	{ 0xf7c60c25, "napi_disable" },
	{ 0x2fd40cda, "netif_napi_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x551bc133, "xdp_rxq_info_unreg" },
	{ 0xa80451f7, "xdp_rxq_info_reg" },
	{ 0x8378c72c, "xdp_rxq_info_reg_mem_model" },
	{ 0x66012f5b, "xdp_rxq_info_is_reg" },
	{ 0x38497ec8, "xdp_return_frame" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x335f6ace, "ether_setup" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x132009e3, "__put_net" },
	{ 0xb81960ca, "snprintf" },
	{ 0x142b4c11, "rtnl_configure_link" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x55a515c6, "register_netdevice" },
	{ 0xaa3f1f31, "rtnl_create_link" },
	{ 0x90079cd6, "rtnl_link_get_net" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8484D0AEC33ABE0C5DF9A67");
