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
	{ 0xf9a482f9, "msleep" },
	{ 0xbd6f3db5, "netlink_has_listeners" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3e231a30, "proc_create_single_data" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x977f7d3c, "remove_proc_entry" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4777ca8, "netlink_kernel_release" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x341c6c58, "init_net" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x43771e5b, "netlink_broadcast" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x837ae3ff, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xf843d52b, "__nlmsg_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BE9BAB7FAF4DF956E5FC53D");
