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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe6c12171, "complete" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x642e2d0b, "__video_register_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6d7a85fd, "si470x_set_freq" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5d97ef47, "video_device_release_empty" },
	{ 0x9d669763, "memcpy" },
	{ 0x24ecac1d, "si470x_viddev_template" },
	{ 0xa1633992, "_dev_err" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xf586fa18, "si470x_ctrl_ops" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x9492b8b9, "v4l2_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xffccc32d, "si470x_start" },
	{ 0x32159841, "v4l2_fh_open" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd9849629, "v4l2_fh_release" },
	{ 0x95f77da2, "si470x_stop" },
	{ 0x41cb821b, "v4l2_fh_is_singular" },
	{ 0x9c587d0, "video_devdata" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0x3375176d, "v4l2_device_unregister" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0x4f557673, "video_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,radio-si470x-common";

MODULE_ALIAS("i2c:si470x");

MODULE_INFO(srcversion, "E109D8FD02AD0EB4423D873");
