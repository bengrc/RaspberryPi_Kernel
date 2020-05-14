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
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1b14fd34, "rtl_dm_diginit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x1186ce46, "_rtl_dbg_trace" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x76402df9, "rtl_fw_page_write" },
	{ 0x51ca37aa, "_rtl_dbg_print_data" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x75c4714, "rtl_cmd_send_packet" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7df05cf8, "rtl_fw_block_write" },
	{ 0x9214b99, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi";


MODULE_INFO(srcversion, "31A76B687526C40C5FCA6F1");
