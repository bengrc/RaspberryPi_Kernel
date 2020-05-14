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
	{ 0x97f0859f, "unregister_qdisc" },
	{ 0xd359754c, "register_qdisc" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9cb7ae03, "tcf_block_get" },
	{ 0x14b12ecc, "gnet_stats_copy_queue" },
	{ 0xd187d7fe, "gnet_stats_copy_basic" },
	{ 0xa268910a, "__qdisc_calculate_pkt_len" },
	{ 0xf9d9c07a, "tcf_classify" },
	{ 0xe4b0f016, "qdisc_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0x9da185f3, "tcf_block_put" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8aca5e99, "qdisc_hash_add" },
	{ 0xbee200ec, "qdisc_create_dflt" },
	{ 0xd78fc3e8, "pfifo_qdisc_ops" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0x7178060c, "qdisc_destroy" },
	{ 0x83a0c64f, "qdisc_tree_reduce_backlog" },
	{ 0xc2c97659, "noop_qdisc" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "07CA609725019492921641B");
