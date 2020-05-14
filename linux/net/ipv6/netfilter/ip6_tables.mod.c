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
	{ 0x402b8281, "__request_module" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x70ae1c9f, "xt_unregister_table" },
	{ 0x24c8e482, "xt_copy_counters_from_user" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x11df56b8, "xt_check_target" },
	{ 0x4274ec63, "xt_register_matches" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0x92ee0b9b, "xt_proto_fini" },
	{ 0xe7fc36d4, "xt_table_unlock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0x235cc6b4, "xt_find_table_lock" },
	{ 0xcdfd9f76, "ipv6_find_hdr" },
	{ 0xc1d837a7, "xt_replace_table" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x59cae796, "xt_proto_init" },
	{ 0x73b74755, "xt_register_table" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe5583665, "xt_target_to_user" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0xd95a9c05, "nf_unregister_net_hooks" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x3a109778, "xt_register_targets" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x95c3202e, "nf_log_trace" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x29776c2c, "xt_unregister_targets" },
	{ 0xd040e01a, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x969c0419, "nf_register_net_hooks" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb0b109b2, "nf_unregister_sockopt" },
	{ 0xd2b30083, "xt_tee_enabled" },
	{ 0x263fc5ec, "xt_request_find_match" },
	{ 0x6d7e25cd, "xt_request_find_table_lock" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x4917ee7b, "xt_unregister_matches" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x91bcc7d8, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x9d669763, "memcpy" },
	{ 0x7f20a0b2, "xt_check_match" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0xe50d2ce0, "xt_check_table_hooks" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb99e0816, "nf_register_sockopt" },
	{ 0x555c3243, "xt_alloc_table_info" },
	{ 0xd7084bd0, "xt_match_to_user" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0xa48b3a97, "xt_free_table_info" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "9C42707E95DD2B411C11415");
