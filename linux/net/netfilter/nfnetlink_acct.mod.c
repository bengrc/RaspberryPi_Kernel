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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x2899e9fa, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x68183b3b, "nla_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0x56c8693b, "refcount_dec_if_one" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xd040e01a, "module_put" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x43771e5b, "netlink_broadcast" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xa85dc69, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0xee76d1f5, "nla_put_64bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xf843d52b, "__nlmsg_put" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xef835566, "__netlink_dump_start" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "7BB34744A231218A9615EEB");
