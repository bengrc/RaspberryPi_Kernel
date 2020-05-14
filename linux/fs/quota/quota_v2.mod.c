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
	{ 0x53017e64, "unregister_quota_format" },
	{ 0x38442ee6, "register_quota_format" },
	{ 0x69439a68, "make_kuid" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0x79cc4e5e, "make_kprojid" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xea28dbdd, "qtree_entry_unused" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0x71c90087, "memcmp" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x514a62ec, "dq_data_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfb4591d8, "__quota_error" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9ffcb33, "qtree_read_dquot" },
	{ 0x469876f, "qtree_write_dquot" },
	{ 0x94425488, "up_write" },
	{ 0x6b9cf6c2, "qtree_release_dquot" },
	{ 0xbc22018b, "down_write" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x93ed92ed, "qtree_get_next_id" },
	{ 0xafa10a99, "down_read" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=quota_tree";


MODULE_INFO(srcversion, "CCEE1A436E06E9F140E6AE8");
