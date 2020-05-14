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
	{ 0x5868fd99, "class_destroy" },
	{ 0x2c23599b, "__hid_register_driver" },
	{ 0x9c921cae, "__class_create" },
	{ 0x418176cd, "roccat_common2_sysfs_read" },
	{ 0x231d75ff, "roccat_common2_sysfs_write" },
	{ 0x3f87c897, "roccat_connect" },
	{ 0xbaa4a1dc, "roccat_common2_device_init_struct" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x5ba698ca, "hid_hw_start" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd589750f, "hid_open_report" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x889a0bc6, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-roccat-common,hid-roccat";

MODULE_ALIAS("hid:b0003g*v00001E7Dp00003138");
MODULE_ALIAS("hid:b0003g*v00001E7Dp000031CE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00003232");

MODULE_INFO(srcversion, "2847A7A6D3536AE207B7EB9");
