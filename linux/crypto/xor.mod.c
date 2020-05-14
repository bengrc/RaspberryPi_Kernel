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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xf051164, "xor_block_neon_inner" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8fd180e7, "kernel_neon_begin" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xor-neon";


MODULE_INFO(srcversion, "1DC74B181C7091E05D6CD04");
