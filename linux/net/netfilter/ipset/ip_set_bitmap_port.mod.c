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
	{ 0xb16c9ae2, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc73250ef, "ip_set_type_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x34a2f2a3, "bitmap_zalloc" },
	{ 0x6344eaf6, "ip_set_alloc" },
	{ 0x324c78c0, "ip_set_elem_len" },
	{ 0x290f823e, "ip_set_get_ip_port" },
	{ 0x472b8a18, "ip_set_get_extensions" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2313d394, "ip_set_match_extensions" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xce2650b6, "ip_set_put_extensions" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x112dff9c, "ip_set_extensions" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "E51B7E75C496B4B9EC8056C");
