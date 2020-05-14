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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x317ed3fc, "__nf_ct_refresh_acct" },
	{ 0xa3c71e87, "nf_ct_l4proto_register_one" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6b23eef, "nf_ct_port_nlattr_to_tuple" },
	{ 0xece18e50, "nf_ct_port_tuple_to_nlattr" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x777c7d57, "nf_ct_l4proto_unregister_one" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaf107963, "nf_ct_l4proto_pernet_unregister_one" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xe8b5831c, "nf_ct_port_nla_policy" },
	{ 0x100f29ac, "nf_ct_l4proto_pernet_register_one" },
	{ 0x41d8a0c5, "skb_copy_bits" },
	{ 0xd505c3e0, "nf_ct_port_nlattr_tuple_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "CB73DE92D9F279AFF55D0B2");
