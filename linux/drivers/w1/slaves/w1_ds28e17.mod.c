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
	{ 0xb7700415, "param_ops_int" },
	{ 0xb316bedd, "param_ops_byte" },
	{ 0x578ab35, "w1_unregister_family" },
	{ 0x3c2859e9, "w1_register_family" },
	{ 0xb187d90f, "i2c_add_adapter" },
	{ 0xe914e41e, "strcpy" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x88aa2fc6, "w1_reset_resume_command" },
	{ 0xe52622bb, "w1_read_block" },
	{ 0xf102732a, "crc16" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x855d4486, "w1_touch_bit" },
	{ 0x4f7e9f73, "devm_kfree" },
	{ 0xf63bc4f, "i2c_del_adapter" },
	{ 0x59a177fb, "w1_read_8" },
	{ 0xfb880f4a, "w1_write_8" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x5f65e119, "w1_write_block" },
	{ 0x426ae9b2, "w1_reset_select_slave" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91715312, "sprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "384E8CD316B18C51E3E8A20");
