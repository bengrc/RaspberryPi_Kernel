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
	{ 0x2d3385d3, "system_wq" },
	{ 0xcbfc45e3, "netdev_info" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6b674b7c, "napi_schedule_prep" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x2544d559, "netif_napi_del" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xc3daa3a7, "netif_rx" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x9c608226, "sock_efree" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0x68183b3b, "nla_put" },
	{ 0xad5239a4, "netif_receive_skb" },
	{ 0x2fd40cda, "netif_napi_add" },
	{ 0x60a78e5e, "rtnl_link_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xc269e05, "of_get_child_by_name" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x6c23f444, "__napi_schedule" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x757bd69, "alloc_netdev_mqs" },
	{ 0x65f1710b, "napi_complete_done" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xca2fc8b6, "netdev_warn" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa392f53c, "rtnl_link_register" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8f78678f, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0x9cf2a557, "of_node_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FDBDB836D1CBD433EB5F4AC");
