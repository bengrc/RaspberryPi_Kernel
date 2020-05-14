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
	{ 0x1f661cef, "dlmunlock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7a1211f8, "dlm_setup_eviction_cb" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0xf6236827, "dlm_register_eviction_cb" },
	{ 0x402b2002, "dlm_register_domain" },
	{ 0xc66c0d63, "dlm_unregister_domain" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x122170da, "crc32_le" },
	{ 0xd8fa57a6, "dlm_unregister_eviction_cb" },
	{ 0xf68a5e03, "ocfs2_stack_glue_unregister" },
	{ 0xd859ac8c, "o2net_fill_node_map" },
	{ 0xf240f18c, "ocfs2_stack_glue_register" },
	{ 0x667b7de, "__mlog_printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdfc99b70, "dlmlock" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x923a5d3d, "dlm_print_one_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_dlm,ocfs2_nodemanager,ocfs2_stackglue";


MODULE_INFO(srcversion, "F4EECE87469010BA08D2EDD");
