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
	{ 0x3f85bc80, "deregister_mtd_parser" },
	{ 0x11dcf7ac, "__register_mtd_parser" },
	{ 0x37a0cba, "kfree" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0xe59c0fbe, "of_n_size_cells" },
	{ 0xdbe1d809, "of_n_addr_cells" },
	{ 0x1b2f588a, "of_get_next_child" },
	{ 0x16c6ac6a, "of_device_is_compatible" },
	{ 0xc269e05, "of_get_child_by_name" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd2027ac4, "of_get_property" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";

MODULE_ALIAS("of:N*T*Cfixed-partitions");
MODULE_ALIAS("of:N*T*Cfixed-partitionsC*");

MODULE_INFO(srcversion, "AAD3E2DF55B6F1B804D4566");
