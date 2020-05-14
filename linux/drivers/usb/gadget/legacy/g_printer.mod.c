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
	{ 0x5b48cb2f, "usb_add_config" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xd7a9085e, "usb_ep_autoconfig_reset" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x7a3fe895, "usb_put_function_instance" },
	{ 0x96e23000, "usb_composite_overwrite_options" },
	{ 0xfffc2c15, "usb_composite_probe" },
	{ 0x3df15b9, "usb_add_function" },
	{ 0x9853735, "usb_put_function" },
	{ 0x23eb470c, "usb_gadget_set_selfpowered" },
	{ 0xf2a0f1c7, "usb_composite_unregister" },
	{ 0xeefa2fee, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xe38fe95b, "usb_string_ids_tab" },
	{ 0x43b6b525, "usb_get_function_instance" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0x73a7a766, "param_ops_uint" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core";


MODULE_INFO(srcversion, "B396D970AF81573DCD1B0EA");
