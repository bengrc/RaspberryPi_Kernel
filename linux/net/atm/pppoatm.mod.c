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
	{ 0x4b03a038, "deregister_atm_ioctl" },
	{ 0x68ef7286, "register_atm_ioctl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e429655, "vcc_process_recv_queue" },
	{ 0x60e1284f, "__module_get" },
	{ 0xaa765f18, "ppp_register_channel" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb78c66c6, "ppp_channel_index" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x3a1234e4, "ppp_unit_number" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xeb995028, "skb_realloc_headroom" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xff18c412, "ppp_output_wakeup" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xd040e01a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x900f861f, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xd13ca26f, "ppp_input" },
	{ 0x71c90087, "memcmp" },
	{ 0xf3f68ed2, "ppp_input_error" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm,ppp_generic";


MODULE_INFO(srcversion, "4A3645028FCC1897B31D889");
