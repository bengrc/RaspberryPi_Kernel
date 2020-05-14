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
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x341c6c58, "init_net" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3196e5, "nf_nat_l3proto_ipv6_register_fn" },
	{ 0x51a11ae9, "ip6t_register_table" },
	{ 0x18ed32fb, "ip6t_alloc_initial_table" },
	{ 0xf947f858, "ip6t_do_table" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xabc57566, "ip6t_unregister_table" },
	{ 0xdd13892d, "nf_nat_l3proto_ipv6_unregister_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat_ipv6,ip6_tables";


MODULE_INFO(srcversion, "7BB549E9D138528BE34A434");
