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
	{ 0xdfe038dc, "gameport_unregister_port" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x247fa9e6, "__gameport_register_port" },
	{ 0xf75df2e5, "gameport_set_phys" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c32d0f0, "printk" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gameport";


MODULE_INFO(srcversion, "D19F67F2061A07198BA1C1B");
