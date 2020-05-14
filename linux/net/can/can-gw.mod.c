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
	{ 0xb5854c0c, "can_rx_register" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfcc7dc1c, "skb_clone" },
	{ 0x891591a9, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0xcc5e5605, "rtnl_register_module" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x68183b3b, "nla_put" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x95d77d0f, "__dev_get_by_index" },
	{ 0xd0e55644, "can_send" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x1f06413a, "netlink_capable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6dc5e4de, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "646A287289593DC7D21F1AB");
