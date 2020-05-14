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
	{ 0x62500b66, "usb_gstrings_attach" },
	{ 0xcaa1c48c, "usb_free_all_descriptors" },
	{ 0xde7dcd04, "usb_ep_disable" },
	{ 0x69097fbc, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x3846cb85, "gether_get_qmult" },
	{ 0xdba4938b, "usb_ep_queue" },
	{ 0x4b9a12c1, "gether_setup_name_default" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x60563ce8, "gether_get_ifname" },
	{ 0xc173e2ac, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xeb995028, "skb_realloc_headroom" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0xeccf05fe, "usb_function_unregister" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x18e9c294, "gether_set_host_addr" },
	{ 0x3efb8eae, "gether_get_dev_addr" },
	{ 0x5f754e5a, "memset" },
	{ 0xa4b84e77, "gether_connect" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x7a3fe895, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x998b9ae3, "usb_ep_autoconfig" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x21af32f7, "ida_free" },
	{ 0xf26b15d5, "gether_set_gadget" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6405625b, "gether_get_host_addr" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x9f58d5f, "gether_set_qmult" },
	{ 0xb225045f, "gether_get_host_addr_u8" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd1182788, "usb_function_register" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x7a549d76, "gether_register_netdev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x376e37a3, "gether_set_dev_addr" },
	{ 0x3f7f5daf, "config_ep_by_speed" },
	{ 0xa6ebd2cf, "usb_ep_free_request" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xc6b85533, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x56e73c63, "usb_assign_descriptors" },
	{ 0x63ba6f18, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xdd08eb99, "usb_os_desc_prepare_interf_dir" },
	{ 0x9416b3e9, "dev_get_stats" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core,u_ether";


MODULE_INFO(srcversion, "E716C152BA20EB4135A0AAB");
