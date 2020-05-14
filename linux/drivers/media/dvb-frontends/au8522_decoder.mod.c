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
	{ 0xe8dd4053, "v4l2_ctrl_subdev_log_status" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0x40d9c05d, "au8522_readreg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x10aaafbb, "au8522_writereg" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0x77762f07, "v4l2_i2c_subdev_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb02a295a, "au8522_get_state" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xcb268e4d, "au8522_release_state" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x2c50d96, "v4l2_device_unregister_subdev" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,au8522_common,media,v4l2-common";

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "2366163E1D99035949AFCB3");
