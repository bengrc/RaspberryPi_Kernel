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
	{ 0x2c194fa9, "sock_release" },
	{ 0x7c095c8e, "metadata_dst_alloc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa6981031, "sock_create_kern" },
	{ 0x5f754e5a, "memset" },
	{ 0x4bb2bb7e, "kernel_connect" },
	{ 0x6b4307eb, "iptunnel_xmit" },
	{ 0x8ad45a1d, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x5db8703, "ipv6_stub" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x401aecb0, "udp_set_csum" },
	{ 0x171c8153, "kernel_bind" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CCD2428F1623C24BA34AF5F");
