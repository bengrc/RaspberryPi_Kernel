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
	{ 0x7f8a9562, "single_open" },
	{ 0xc494e037, "debugfs_create_u8" },
	{ 0xaf9a8326, "mt76_rx_aggr_stop" },
	{ 0xefec0c3a, "__mt76_poll" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd07da2bc, "single_release" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xd0ce0aa6, "mt76_rx_aggr_start" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x93dcbecc, "mt76_txq_init" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x9943b1a3, "seq_read" },
	{ 0xc972cb09, "ieee80211_tx_status" },
	{ 0x5f754e5a, "memset" },
	{ 0x761d9018, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x784a1a84, "mt76_eeprom_override" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x96ddfc78, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x17b11ae4, "debugfs_create_bool" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcf8fb1be, "mt76_eeprom_init" },
	{ 0x242c1c82, "mt76_rx" },
	{ 0x78c85e38, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0xff96c951, "mt76_wcid_key_setup" },
	{ 0x666ab8d0, "mt76_wcid_alloc" },
	{ 0x84ef80, "mt76_tx" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x6126d321, "debugfs_create_devm_seqfile" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbfefc38c, "mt76_register_debugfs" },
	{ 0xf660a8c3, "ieee80211_send_bar" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x67e0135f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x9d669763, "memcpy" },
	{ 0xe2fd7cf2, "___pskb_trim" },
	{ 0x1a32a075, "ieee80211_tx_status_ext" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8d0ef6c0, "mt76_txq_remove" },
	{ 0x17047d20, "ieee80211_start_tx_ba_cb_irqsafe" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mt76,mac80211,cfg80211";


MODULE_INFO(srcversion, "F983F2018A984A436F8D36D");
