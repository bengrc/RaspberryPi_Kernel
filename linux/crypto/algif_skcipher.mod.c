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
	{ 0x3ef8f046, "sock_no_mmap" },
	{ 0xab64b595, "sock_no_getsockopt" },
	{ 0x5e636344, "sock_no_setsockopt" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0x43c499ff, "sock_no_listen" },
	{ 0x1f105511, "sock_no_ioctl" },
	{ 0x876d8c83, "af_alg_poll" },
	{ 0x372e218d, "sock_no_getname" },
	{ 0xbc53655a, "sock_no_accept" },
	{ 0xddc5b6b0, "sock_no_socketpair" },
	{ 0xfdacf1b5, "sock_no_connect" },
	{ 0xdf3dd08c, "sock_no_bind" },
	{ 0x6ff2c4da, "af_alg_release" },
	{ 0xeb6a898d, "af_alg_unregister_type" },
	{ 0xc2dd498, "af_alg_register_type" },
	{ 0x474d5fd2, "crypto_alloc_skcipher" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x7f02c35, "af_alg_release_parent" },
	{ 0x8d0be28c, "sock_kfree_s" },
	{ 0xe74107b5, "sock_kzfree_s" },
	{ 0xeab2d766, "af_alg_sendmsg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x4ff6235a, "af_alg_wmem_wakeup" },
	{ 0x7f573f78, "af_alg_free_resources" },
	{ 0xcbd9c351, "af_alg_pull_tsgl" },
	{ 0x50b03c47, "sg_init_table" },
	{ 0x49171641, "sock_kmalloc" },
	{ 0x47b6ee3a, "af_alg_count_tsgl" },
	{ 0xa2868763, "af_alg_get_rsgl" },
	{ 0x17f9b3ab, "af_alg_alloc_areq" },
	{ 0x835ebbdf, "af_alg_wait_for_data" },
	{ 0x9fcd3263, "af_alg_async_cb" },
	{ 0x58a253c2, "crypto_req_done" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x738fe4e5, "af_alg_sendpage" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x750bf5c6, "release_sock" },
	{ 0xb344e154, "lock_sock_nested" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";


MODULE_INFO(srcversion, "78B9998681ABA82D7A4CCE0");
