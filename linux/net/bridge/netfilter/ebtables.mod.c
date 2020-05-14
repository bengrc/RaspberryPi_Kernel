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
	{ 0xcd5adf65, "xt_unregister_target" },
	{ 0x402b8281, "__request_module" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x11df56b8, "xt_check_target" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd95a9c05, "nf_unregister_net_hooks" },
	{ 0xbeec26fb, "ns_capable" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xff2238b4, "xt_register_target" },
	{ 0xd040e01a, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x969c0419, "nf_register_net_hooks" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb0b109b2, "nf_unregister_sockopt" },
	{ 0x91bcc7d8, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0xb8ff71ca, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7f20a0b2, "xt_check_match" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd2802d5c, "pgprot_kernel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb99e0816, "nf_register_sockopt" },
	{ 0x199cdfc5, "xt_find_match" },
	{ 0x42b41bb0, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "FF689BC67C5B7FDD2BE9006");
