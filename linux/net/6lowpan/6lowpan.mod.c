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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x402b8281, "__request_module" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0x71c90087, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdcb3b930, "pskb_expand_head" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xa24cbd, "unregister_netdevice_queue" },
	{ 0xca2fc8b6, "netdev_warn" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0xe5bdd9c0, "addrconf_prefix_rcv_add_addr" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x9d669763, "memcpy" },
	{ 0x46b20fcc, "addrconf_add_linklocal" },
	{ 0xd6ec1f70, "__ndisc_fill_addr_option" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "269ADE4314AC7EDCBD6DBF6");
