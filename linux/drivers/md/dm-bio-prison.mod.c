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
	{ 0x7825541a, "mempool_exit" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x16821dd0, "bio_endio" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x278606ec, "mempool_free" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x27ab8b8a, "mempool_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A965CE4ABEB84AD0BD4964D");
