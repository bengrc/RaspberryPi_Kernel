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
	{ 0x70185124, "icmpv6_send" },
	{ 0x36464de3, "inet_frag_kill" },
	{ 0x6f2fda53, "pskb_trim_rcsum_slow" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb96a6616, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0x9a81089a, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd37f6f56, "inet_frag_find" },
	{ 0x226ea6eb, "inet_frag_reasm_prepare" },
	{ 0x4277726a, "__pskb_pull_tail" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0xd95a9c05, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x539abc6, "inet_frags_fini" },
	{ 0x70e43fed, "inet_frags_exit_net" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xafd84233, "dev_get_by_index_rcu" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x341c6c58, "init_net" },
	{ 0x969c0419, "nf_register_net_hooks" },
	{ 0xf9be5fcc, "inet_frag_reasm_finish" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xf1cc8cb3, "inet_frag_destroy" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x50f3d972, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x24b6051, "inet_frag_pull_head" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x584b7c3a, "inet_frags_init" },
	{ 0xf2c5defc, "inet_frag_queue_insert" },
	{ 0x99bb8806, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x76fc97be, "register_net_sysctl" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x41d8a0c5, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A4EAFBB74F71BDD02CD86A8");
