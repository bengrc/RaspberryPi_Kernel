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
	{ 0x9545af6d, "tasklet_init" },
	{ 0xbee200ec, "qdisc_create_dflt" },
	{ 0xd78fc3e8, "pfifo_qdisc_ops" },
	{ 0x9cb7ae03, "tcf_block_get" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcf05465c, "sockfd_lookup" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x68183b3b, "nla_put" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x14b12ecc, "gnet_stats_copy_queue" },
	{ 0xd187d7fe, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa268910a, "__qdisc_calculate_pkt_len" },
	{ 0xf9d9c07a, "tcf_classify" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x9d669763, "memcpy" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xeb995028, "skb_realloc_headroom" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xc2c97659, "noop_qdisc" },
	{ 0xe4b0f016, "qdisc_reset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0xce6c0a2c, "fput" },
	{ 0x9da185f3, "tcf_block_put" },
	{ 0x7178060c, "qdisc_destroy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8E7DCBAD43FCCB2090F1E58");
