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
	{ 0xe4fae511, "inet_twsk_put" },
	{ 0xa697a997, "inet6_lookup_listener" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x58d4952b, "tcp_hashinfo" },
	{ 0xff36a891, "udp6_lib_lookup" },
	{ 0xbbb5744, "__inet6_lookup_established" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6d2c1a3e, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xfc443a3b, "inet_twsk_deschedule_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x41d8a0c5, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "6844D6D27429D36C5CC18CB");
