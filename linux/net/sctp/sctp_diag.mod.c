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
	{ 0x903bc760, "sctp_transport_lookup_process" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa02f8994, "inet_diag_unregister" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc64c5494, "inet_diag_msg_attrs_fill" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x5f754e5a, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x68183b3b, "nla_put" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0x944ddbbc, "nla_reserve_64bit" },
	{ 0xf3c74d02, "inet_diag_msg_common_fill" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xc5cdbb56, "sctp_for_each_transport" },
	{ 0xc9a951ad, "sock_diag_check_cookie" },
	{ 0x9c2b734b, "sock_diag_save_cookie" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf9dcd1d2, "nla_reserve" },
	{ 0x995f0210, "inet_diag_register" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0x3958e99e, "sctp_get_sctp_info" },
	{ 0xf98555af, "sctp_for_each_endpoint" },
	{ 0x1ec77e40, "netlink_net_capable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sctp,inet_diag";


MODULE_INFO(srcversion, "E5B961AB37FE4848BC62409");
