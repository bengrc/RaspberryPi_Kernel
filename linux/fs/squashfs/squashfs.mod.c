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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x4779cfe7, "make_bad_inode" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7696f7b3, "pagecache_get_page" },
	{ 0x25489c8b, "ll_rw_block" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa518d210, "mount_bdev" },
	{ 0x5af8d6d9, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4ee9ef8, "__getblk_gfp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd2b96f5c, "__insert_inode_hash" },
	{ 0x68e3d9dc, "kmap_atomic" },
	{ 0x5f754e5a, "memset" },
	{ 0x15970655, "__bread_gfp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x7d145f3e, "d_obtain_alias" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4e66368f, "set_nlink" },
	{ 0xe67f7c79, "__wait_on_buffer" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x6a12f9a3, "generic_ro_fops" },
	{ 0x7f42aa40, "unlock_page" },
	{ 0x13153225, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x1fbaa35f, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb6b6284e, "xz_dec_run" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x69439a68, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x14926770, "unlock_new_inode" },
	{ 0xc1babb65, "kill_block_super" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x8c3c7a6c, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0xc8188127, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6985df1, "page_get_link" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x1a1d9d88, "d_splice_alias" },
	{ 0xda976a57, "sync_filesystem" },
	{ 0xf9147ce9, "d_make_root" },
	{ 0xf30fda27, "lzo1x_decompress_safe" },
	{ 0x49970de8, "finish_wait" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0x8a7d02bc, "unregister_filesystem" },
	{ 0x7df44108, "init_special_inode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x414ed825, "new_inode" },
	{ 0xfa61f263, "flush_dcache_page" },
	{ 0xaf03a486, "__put_page" },
	{ 0x682d5ce7, "iget_locked" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C28C0A040BEC0BD6D2EFBE4");
