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
	{ 0x23de6d02, "ir_raw_handler_unregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb123c075, "ir_raw_handler_register" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd2b6e2df, "ir_lirc_scancode_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7cf52901, "ir_raw_gen_manchester" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x3b3a1192, "input_event" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x175ec858, "input_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8ccc143c, "input_allocate_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "62B651478862F7630F5B970");
