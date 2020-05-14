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
	{ 0xc9a16c73, "page_address" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1e426042, "dmaengine_unmap_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x71afab21, "async_tx_submit" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0x6b896d9a, "dmaengine_get_unmap_data" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x99a49974, "__async_tx_find_channel" },
	{ 0xec604d9a, "async_tx_quiesce" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_tx,xor";


MODULE_INFO(srcversion, "FA615A56B431CEF07DF5A08");
