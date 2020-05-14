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
	{ 0xef0c7801, "hid_unregister_driver" },
	{ 0x2c23599b, "__hid_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x982f2f0e, "__hid_request" },
	{ 0x889a0bc6, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa749dde3, "input_ff_create_memless" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x5ba698ca, "hid_hw_start" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd589750f, "hid_open_report" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ff-memless";

MODULE_ALIAS("hid:b0003g*v00002006p00000118");

MODULE_INFO(srcversion, "11992A6D308830587DB18C6");
