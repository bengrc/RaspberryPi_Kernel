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
	{ 0xd112babc, "xfrm6_tunnel_deregister" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x875dfa0, "xfrm_unregister_type" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc9e38dab, "xfrm_state_flush" },
	{ 0x49a124fd, "xfrm_register_type" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x1fae226e, "xfrm6_rcv_spi" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6a465956, "xfrm6_tunnel_register" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6,ipv6";


MODULE_INFO(srcversion, "0EF2817ACD65BDE5FDB6EB9");
