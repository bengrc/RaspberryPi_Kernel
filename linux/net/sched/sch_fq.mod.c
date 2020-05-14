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
	{ 0x97f0859f, "unregister_qdisc" },
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0xd359754c, "register_qdisc" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x87487b5b, "qdisc_watchdog_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x83a0c64f, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xc318b985, "qdisc_watchdog_schedule_ns" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd317669c, "__skb_get_hash" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x9f94edf9, "qdisc_watchdog_cancel" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xece784c2, "rb_first" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x4980a4d6, "rtnl_kfree_skbs" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x68183b3b, "nla_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x528f0ddf, "gnet_stats_copy_app" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B79B7825099CE0BF05179B4");
