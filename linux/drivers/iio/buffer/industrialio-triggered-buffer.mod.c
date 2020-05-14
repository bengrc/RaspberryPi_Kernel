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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb51ddf96, "iio_kfifo_allocate" },
	{ 0x7e0b7cdd, "devres_alloc_node" },
	{ 0x83f0465b, "devm_iio_device_match" },
	{ 0x371c770e, "iio_triggered_buffer_postenable" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7dfe9d71, "iio_device_attach_buffer" },
	{ 0x98d265aa, "devres_release" },
	{ 0xa0fb4056, "iio_triggered_buffer_predisable" },
	{ 0xaeb9b5eb, "iio_kfifo_free" },
	{ 0x1bb9fb6a, "devres_add" },
	{ 0xf063bb48, "iio_alloc_pollfunc" },
	{ 0x816bf91b, "iio_dealloc_pollfunc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kfifo_buf,industrialio";


MODULE_INFO(srcversion, "E6C701783AF27252026FF9B");
