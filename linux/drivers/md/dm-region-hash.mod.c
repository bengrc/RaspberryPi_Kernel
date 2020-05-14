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
	{ 0x7825541a, "mempool_exit" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x999e8297, "vfree" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5e204162, "down_trylock" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf0ef52e8, "down" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x278606ec, "mempool_free" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x27ab8b8a, "mempool_init" },
	{ 0x581cde4e, "up" },
	{ 0x5a56d324, "dm_dirty_log_destroy" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-log";


MODULE_INFO(srcversion, "B58FEC6ED7A540CD409252E");
