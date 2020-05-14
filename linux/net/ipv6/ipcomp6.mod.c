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
	{ 0xd2a80e17, "xfrm6_rcv" },
	{ 0xa477febc, "xfrm6_find_1stfragopt" },
	{ 0x260aadbf, "ipcomp_output" },
	{ 0x5675b793, "ipcomp_input" },
	{ 0xa08eaa3e, "ipcomp_destroy" },
	{ 0x49288cbd, "xfrm6_protocol_deregister" },
	{ 0x875dfa0, "xfrm_unregister_type" },
	{ 0xc17de577, "xfrm6_protocol_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x49a124fd, "xfrm_register_type" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xf673e921, "xfrm_state_insert" },
	{ 0x456362cb, "xfrm_init_state" },
	{ 0x642d7d83, "xfrm6_tunnel_alloc_spi" },
	{ 0x2c49a125, "xfrm_state_alloc" },
	{ 0xa8ce418c, "xfrm6_tunnel_spi_lookup" },
	{ 0x25869952, "ipcomp_init_state" },
	{ 0x22bf920c, "ip6_redirect" },
	{ 0x42a6dd28, "__xfrm_state_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc6d4866b, "ip6_update_pmtu" },
	{ 0x69439a68, "make_kuid" },
	{ 0x72aa8854, "xfrm_state_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,xfrm_ipcomp,xfrm6_tunnel";


MODULE_INFO(srcversion, "C15B2E736BD66F150276AF9");
