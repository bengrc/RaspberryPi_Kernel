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
	{ 0x62500b66, "usb_gstrings_attach" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xcaa1c48c, "usb_free_all_descriptors" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3846cb85, "gether_get_qmult" },
	{ 0xdba4938b, "usb_ep_queue" },
	{ 0x4b9a12c1, "gether_setup_name_default" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x60563ce8, "gether_get_ifname" },
	{ 0x91715312, "sprintf" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0xeccf05fe, "usb_function_unregister" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x18e9c294, "gether_set_host_addr" },
	{ 0x3efb8eae, "gether_get_dev_addr" },
	{ 0xa4b84e77, "gether_connect" },
	{ 0x7a3fe895, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x998b9ae3, "usb_ep_autoconfig" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0xf26b15d5, "gether_set_gadget" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x122170da, "crc32_le" },
	{ 0x6405625b, "gether_get_host_addr" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x9f58d5f, "gether_set_qmult" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd1182788, "usb_function_register" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xc03f15e5, "skb_copy_expand" },
	{ 0x7a549d76, "gether_register_netdev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x376e37a3, "gether_set_dev_addr" },
	{ 0x3f7f5daf, "config_ep_by_speed" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xc6b85533, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x56e73c63, "usb_assign_descriptors" },
	{ 0x63ba6f18, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9214b99, "skb_put" },
	{ 0x41d8a0c5, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,udc-core";


MODULE_INFO(srcversion, "E0420D23419C861F6E59F2C");
