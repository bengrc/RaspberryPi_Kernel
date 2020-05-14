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
	{ 0x9a1e024f, "crypto_unregister_scomps" },
	{ 0x228e43a, "crypto_unregister_alg" },
	{ 0x186d7644, "crypto_register_scomps" },
	{ 0xbe9b34c7, "crypto_register_alg" },
	{ 0x37a0cba, "kfree" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x7a4497db, "kzfree" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x6aeefac4, "zlib_deflateReset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x999e8297, "vfree" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=zlib_deflate";


MODULE_INFO(srcversion, "5E586DEE295F6659F31B622");
