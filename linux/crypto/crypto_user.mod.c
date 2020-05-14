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
	{ 0x4777ca8, "netlink_kernel_release" },
	{ 0x837ae3ff, "__netlink_kernel_create" },
	{ 0x341c6c58, "init_net" },
	{ 0x5f754e5a, "memset" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xef835566, "__netlink_dump_start" },
	{ 0x743af5a7, "crypto_alg_mod_lookup" },
	{ 0x49a86d68, "crypto_unregister_instance" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x94425488, "up_write" },
	{ 0xebcfc9ab, "crypto_remove_spawns" },
	{ 0xbc22018b, "down_write" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0x9c385e63, "crypto_mod_put" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xeabf75bc, "crypto_mod_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcd4c97a1, "up_read" },
	{ 0xafa10a99, "down_read" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0x4e7a5059, "crypto_alg_sem" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x328a05f1, "strncpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0x1f06413a, "netlink_capable" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x31ab9246, "netlink_rcv_skb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A11EA46F1D0C21C392AB19D");
