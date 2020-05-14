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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe060173c, "iio_channel_release_all" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x99d01d66, "iio_buffer_init" },
	{ 0x285fe296, "iio_update_buffers" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x75e6e439, "iio_channel_get_all" },
	{ 0x37a0cba, "kfree" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb8213bb1, "iio_buffer_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";


MODULE_INFO(srcversion, "7361DA922AA8A3BB058C6EC");
