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
	{ 0xe7403e14, "mini_qdisc_pair_swap" },
	{ 0xa95893a9, "tcf_block_get_ext" },
	{ 0x972f95e3, "mini_qdisc_pair_init" },
	{ 0x7be6905, "net_inc_egress_queue" },
	{ 0x2c3054f9, "net_inc_ingress_queue" },
	{ 0x86f85114, "net_dec_egress_queue" },
	{ 0x46013233, "net_dec_ingress_queue" },
	{ 0xc2925aa3, "tcf_block_put_ext" },
	{ 0x68183b3b, "nla_put" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5FBC034F5EE15A6FA84E815");
