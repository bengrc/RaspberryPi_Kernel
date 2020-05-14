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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xcf44e6ed, "v4l2_ctrl_cluster" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0xf2ad40d, "v4l2_ctrl_handler_free" },
	{ 0xa3248a2b, "v4l2_ctrl_new_std" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2ff22232, "media_entity_pads_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2c50d96, "v4l2_device_unregister_subdev" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2c5f71e, "v4l2_ctrl_handler_setup" },
	{ 0x5a5b6aac, "v4l2_ctrl_handler_log_status" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xf5f41eb7, "v4l2_ctrl_handler_init_class" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x77762f07, "v4l2_i2c_subdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,media,v4l2-common";

MODULE_ALIAS("i2c:cx25840");

MODULE_INFO(srcversion, "DC42BCB66F92E8E079D0D4D");
