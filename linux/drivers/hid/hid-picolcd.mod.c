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
	{ 0x52526626, "device_remove_file" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0xdcc76f14, "generic_file_llseek" },
	{ 0xd589750f, "hid_open_report" },
	{ 0x7f8a9562, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd07da2bc, "single_release" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x982f2f0e, "__hid_request" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x9943b1a3, "seq_read" },
	{ 0xf790cf4a, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3b3a1192, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xd22ba88d, "hid_hw_close" },
	{ 0x84b183ae, "strncmp" },
	{ 0x6415795a, "debugfs_remove" },
	{ 0xa80822eb, "hid_hw_open" },
	{ 0xd6d1129e, "input_set_capability" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x4795423d, "hid_set_field" },
	{ 0x1061a901, "simple_open" },
	{ 0xa1633992, "_dev_err" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0x90989c03, "hid_alloc_report_buf" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x175ec858, "input_register_device" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0x889a0bc6, "hid_hw_stop" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0x2c23599b, "__hid_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5ba698ca, "hid_hw_start" },
	{ 0xef0c7801, "hid_unregister_driver" },
	{ 0xf1ec72a4, "hid_output_report" },
	{ 0x8ccc143c, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "98F4965093A9A21EB930F28");
