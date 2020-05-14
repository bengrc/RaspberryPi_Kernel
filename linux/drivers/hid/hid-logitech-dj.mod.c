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
	{ 0xa1422ebd, "hid_add_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8a47b56f, "hid_allocate_device" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x581cde4e, "up" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xa80822eb, "hid_hw_open" },
	{ 0x5ba698ca, "hid_hw_start" },
	{ 0x23841469, "hid_validate_values" },
	{ 0xd589750f, "hid_open_report" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x982f2f0e, "__hid_request" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x5a3be0be, "hid_parse_report" },
	{ 0x9d669763, "memcpy" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cc4f2c1, "hid_destroy_device" },
	{ 0x889a0bc6, "hid_hw_stop" },
	{ 0xd22ba88d, "hid_hw_close" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1633992, "_dev_err" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5495392, "hid_debug" },
	{ 0xf29d6f39, "hid_input_report" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");

MODULE_INFO(srcversion, "2A419F768634FC1B7F4B4CC");
