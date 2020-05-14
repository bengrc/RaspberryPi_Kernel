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
	{ 0xb3e8d6e1, "fb_sys_read" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x18b56583, "fb_sys_write" },
	{ 0x45dd4a41, "sys_fillrect" },
	{ 0xbd6515f0, "sys_copyarea" },
	{ 0xd5806961, "sys_imageblit" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1633992, "_dev_err" },
	{ 0x34438e7, "register_framebuffer" },
	{ 0xee63647, "fb_deferred_io_init" },
	{ 0x9d669763, "memcpy" },
	{ 0xaf2baebb, "framebuffer_alloc" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x403a534d, "rpisense_get_dev" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7d80f01a, "rpisense_block_write" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x999e8297, "vfree" },
	{ 0x807d4746, "framebuffer_release" },
	{ 0x43e1d70a, "fb_deferred_io_cleanup" },
	{ 0x471340a, "unregister_framebuffer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt,rpisense-core";

MODULE_ALIAS("platform:rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fbC*");

MODULE_INFO(srcversion, "FC554BC5F2903919A643A1E");
