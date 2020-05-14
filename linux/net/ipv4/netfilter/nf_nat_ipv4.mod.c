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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x94bbb911, "nf_nat_unregister_fn" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xd4a23098, "nf_ct_nat_ext_add" },
	{ 0x9a81089a, "dst_release" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x874fd33a, "nf_nat_used_tuple" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x50d27dd7, "nf_nat_l4proto_register" },
	{ 0xc8770821, "inet_proto_csum_replace4" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x57f70547, "secure_ipv4_port_ephemeral" },
	{ 0xe2ed0b2a, "nf_ip_checksum" },
	{ 0x60313cf9, "skb_checksum" },
	{ 0x7c32d0f0, "printk" },
	{ 0x685e7e52, "inet_select_addr" },
	{ 0x91d8a303, "nf_nat_register_fn" },
	{ 0x84d2e8a7, "nf_nat_l4proto_nlattr_to_range" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf8da77ea, "ip_route_me_harder" },
	{ 0xd734a92f, "nf_nat_l4proto_unregister" },
	{ 0x35dcc851, "nf_xfrm_me_harder" },
	{ 0xb58a27e9, "nf_nat_setup_info" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbc14ed1, "nf_ct_iterate_cleanup_net" },
	{ 0x18ffdf3c, "skb_make_writable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4fcb8e2b, "nf_nat_l3proto_unregister" },
	{ 0x3fd68577, "nf_nat_inet_fn" },
	{ 0xe6ad999c, "nf_nat_l3proto_register" },
	{ 0x8cef65c0, "__nf_nat_l4proto_find" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "395EBD4F2BDD0AE8F068FCC");
