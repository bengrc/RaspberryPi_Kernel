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
	{ 0xf4e5e0ab, "kobject_put" },
	{ 0x9b721d42, "kset_create_and_add" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4c9042d2, "kobject_uevent" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x9d24af80, "firmware_kobj" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x134f1a4a, "kobject_init_and_add" },
	{ 0xc6cbbc89, "capable" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x4a519ae4, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7CD418496EF7A607DC0B768");
