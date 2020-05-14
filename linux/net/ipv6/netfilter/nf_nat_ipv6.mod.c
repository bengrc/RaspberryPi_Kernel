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
	{ 0xe1a4f16a, "secure_ipv6_port_ephemeral" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x94bbb911, "nf_nat_unregister_fn" },
	{ 0xd4a23098, "nf_ct_nat_ext_add" },
	{ 0x9a81089a, "dst_release" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x874fd33a, "nf_nat_used_tuple" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x50d27dd7, "nf_nat_l4proto_register" },
	{ 0xc8770821, "inet_proto_csum_replace4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x132009e3, "__put_net" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5c0958b9, "inet_proto_csum_replace16" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x60313cf9, "skb_checksum" },
	{ 0x71c90087, "memcmp" },
	{ 0x91d8a303, "nf_nat_register_fn" },
	{ 0x84d2e8a7, "nf_nat_l4proto_nlattr_to_range" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x7d120420, "ipv6_dev_get_saddr" },
	{ 0xd734a92f, "nf_nat_l4proto_unregister" },
	{ 0x35dcc851, "nf_xfrm_me_harder" },
	{ 0xd040e01a, "module_put" },
	{ 0xb58a27e9, "nf_nat_setup_info" },
	{ 0x11b34904, "ipv6_skip_exthdr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbc14ed1, "nf_ct_iterate_cleanup_net" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5d982b9a, "ip6_route_me_harder" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x37a0cba, "kfree" },
	{ 0x18ffdf3c, "skb_make_writable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4fcb8e2b, "nf_nat_l3proto_unregister" },
	{ 0x3fd68577, "nf_nat_inet_fn" },
	{ 0xe6ad999c, "nf_nat_l3proto_register" },
	{ 0x8cef65c0, "__nf_nat_l4proto_find" },
	{ 0x772d3dd3, "nf_ip6_checksum" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,ipv6,nf_conntrack";


MODULE_INFO(srcversion, "9AB621F77E819E875C85F91");
