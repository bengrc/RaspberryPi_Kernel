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
	{ 0x750bf5c6, "release_sock" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x34ecc16, "sock_init_data" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc9a16c73, "page_address" },
	{ 0xab64b595, "sock_no_getsockopt" },
	{ 0x1f105511, "sock_no_ioctl" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x372e218d, "sock_no_getname" },
	{ 0xc4ed5445, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafa10a99, "down_read" },
	{ 0xc5a6c57b, "sock_no_sendpage" },
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0x43a5bbcf, "sock_no_recvmsg" },
	{ 0x5f754e5a, "memset" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0xdc106a15, "sk_alloc" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x3ffc7ee6, "iov_iter_get_pages" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9dc00216, "sock_wake_async" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0x8d0be28c, "sock_kfree_s" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0xd040e01a, "module_put" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x9b499d92, "__wake_up_sync_key" },
	{ 0x2382bc58, "proto_register" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a2d35f0, "sock_register" },
	{ 0x3e668302, "proto_unregister" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0x49171641, "sock_kmalloc" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xfdacf1b5, "sock_no_connect" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x56c0a762, "sock_no_sendmsg" },
	{ 0xe74107b5, "sock_kzfree_s" },
	{ 0x6d3a7125, "iov_iter_advance" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xaf03a486, "__put_page" },
	{ 0x42b41bb0, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E64C1BE9FC9D0FA04C6471F");
