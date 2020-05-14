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
	{ 0x41913caa, "iget_failed" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x222263f6, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xd9654491, "unload_nls" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc9a16c73, "page_address" },
	{ 0xd5db2b84, "iget5_locked" },
	{ 0xd03f84c8, "from_kuid_munged" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x7696f7b3, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x25489c8b, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa518d210, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x456bb0b4, "page_symlink_inode_operations" },
	{ 0x5af8d6d9, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4ee9ef8, "__getblk_gfp" },
	{ 0x91715312, "sprintf" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8ba8f2b0, "from_kgid_munged" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0x6162dc8f, "mpage_readpages" },
	{ 0x5f754e5a, "memset" },
	{ 0xbe44b080, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0x15970655, "__bread_gfp" },
	{ 0x7c32d0f0, "printk" },
	{ 0x7d145f3e, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0xa13a9f82, "kunmap" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4e66368f, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe67f7c79, "__wait_on_buffer" },
	{ 0xdd27fa87, "memchr" },
	{ 0x6a12f9a3, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x7f42aa40, "unlock_page" },
	{ 0x13153225, "inode_nohighmem" },
	{ 0xe35196b3, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x1fbaa35f, "inode_init_once" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0xc1513e54, "kmap" },
	{ 0x69439a68, "make_kuid" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xbf465d2b, "load_nls" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x14926770, "unlock_new_inode" },
	{ 0xc1babb65, "kill_block_super" },
	{ 0x800fb92b, "full_name_hash" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x8c3c7a6c, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc8188127, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x66092e19, "load_nls_default" },
	{ 0x1a1d9d88, "d_splice_alias" },
	{ 0xda976a57, "sync_filesystem" },
	{ 0x8e1759f9, "sb_set_blocksize" },
	{ 0xf9147ce9, "d_make_root" },
	{ 0x45ed08d2, "ioctl_by_bdev" },
	{ 0x8a7d02bc, "unregister_filesystem" },
	{ 0x7df44108, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xfa61f263, "flush_dcache_page" },
	{ 0xaf03a486, "__put_page" },
	{ 0x41e519ec, "generic_block_bmap" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "86D376AD7DA2A50D6B0B5A5");
