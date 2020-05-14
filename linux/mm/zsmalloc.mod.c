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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x1a675dfe, "__cpuhp_remove_state" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdd339dde, "kill_anon_super" },
	{ 0x39286208, "dec_zone_page_state" },
	{ 0x7d267e89, "simple_dname" },
	{ 0x2e1ae8a9, "kern_unmount" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x2fa85053, "__lock_page" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0x20a4d553, "map_vm_area" },
	{ 0xef29de53, "__ClearPageMovable" },
	{ 0x4bb27968, "free_vm_area" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9f4c57fd, "mount_pseudo_xattr" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0xf62d6179, "alloc_vm_area" },
	{ 0x60dd8ede, "inc_zone_page_state" },
	{ 0xbf1e932f, "__cpuhp_setup_state" },
	{ 0x7f42aa40, "unlock_page" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x89a125d9, "contig_page_data" },
	{ 0x997c4347, "unmap_kernel_range" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0x362f921c, "unregister_shrinker" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xc8188127, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe39cfe78, "register_shrinker" },
	{ 0xbeb42430, "page_mapping" },
	{ 0xd2802d5c, "pgprot_kernel" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbdb1b9cf, "kern_mount_data" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x3b46cbbe, "__SetPageMovable" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x430d4482, "alloc_anon_inode" },
	{ 0xaf03a486, "__put_page" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "454DEF57BCB3DB53D25EC04");
