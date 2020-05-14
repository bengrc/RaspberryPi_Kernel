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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x40fdb313, "param_get_uint" },
	{ 0xef0c7801, "hid_unregister_driver" },
	{ 0x2c23599b, "__hid_register_driver" },
	{ 0x889a0bc6, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x4fa03ce1, "hid_register_report" },
	{ 0x5ba698ca, "hid_hw_start" },
	{ 0xd589750f, "hid_open_report" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xe84748c2, "input_mt_report_pointer_emulation" },
	{ 0x86d34903, "input_mt_report_slot_state" },
	{ 0x3b3a1192, "input_event" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x66ed3e19, "input_alloc_absinfo" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0xa1633992, "_dev_err" },
	{ 0x42382c7c, "input_mt_init_slots" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");

MODULE_INFO(srcversion, "252C2B4A3801C357AB672D1");
