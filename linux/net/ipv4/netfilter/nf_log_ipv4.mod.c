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
	{ 0x7d34840b, "nf_log_unregister" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x18d7d6fa, "nf_log_register" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xfa48a7a6, "nf_log_dump_packet_common" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0x341c6c58, "init_net" },
	{ 0x2017b523, "nf_log_set" },
	{ 0xffe09c4d, "nf_log_unset" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa2733315, "nf_log_dump_udp_header" },
	{ 0x4dfe275f, "nf_log_dump_sk_uid_gid" },
	{ 0xc50a5922, "nf_log_dump_tcp_header" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0x487c5d33, "nf_log_buf_add" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_log_common";


MODULE_INFO(srcversion, "709B6AC5BD666302EFADE62");
