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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x923574e3, "rt2x00lib_get_bssidx" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x2da2276b, "rt2x00mac_conf_tx" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcbb61a9b, "rt2x00lib_txdone" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb469d0db, "rt2x00lib_txdone_nomatch" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x28b34643, "rt2x00lib_set_mac_address" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x44dac807, "__skb_pad" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211,crc-ccitt";


MODULE_INFO(srcversion, "C1E025376822DC66A413872");
