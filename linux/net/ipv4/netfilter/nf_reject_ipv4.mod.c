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
	{ 0xd51514c, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0x408f2bf0, "nf_ct_attach" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3f22a4e7, "__icmp_send" },
	{ 0xe2ed0b2a, "nf_ip_checksum" },
	{ 0x5f754e5a, "memset" },
	{ 0xf8da77ea, "ip_route_me_harder" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x9214b99, "skb_put" },
	{ 0x41d8a0c5, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DE1CE36A9D1EBC2FBF00263");
