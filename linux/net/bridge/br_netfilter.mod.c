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
	{ 0x6f2fda53, "pskb_trim_rcsum_slow" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0xadc91eca, "ip_do_fragment" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0x9a81089a, "dst_release" },
	{ 0xb7323cb6, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf4d91bee, "neigh_destroy" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x53aa00e4, "nf_hook_slow" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x3647b624, "br_dev_queue_push_xmit" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0xd95a9c05, "nf_unregister_net_hooks" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x341c6c58, "init_net" },
	{ 0x8f242051, "br_forward_finish" },
	{ 0x7023d8ce, "ip_route_input_noref" },
	{ 0x9b9345, "nf_ipv6_ops" },
	{ 0x969c0419, "nf_register_net_hooks" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x2858833f, "skb_pull_rcsum" },
	{ 0x9ef46dad, "ip_route_output_flow" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x20dc09b3, "nf_br_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfa6385cc, "br_handle_frame_finish" },
	{ 0x76fc97be, "register_net_sysctl" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";


MODULE_INFO(srcversion, "9BFCD02990DB2DF7986FE44");
