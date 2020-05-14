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
	{ 0xef0c7801, "hid_unregister_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2c23599b, "__hid_register_driver" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x3b3a1192, "input_event" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x574ef62e, "usb_hub_find_child" },
	{ 0x5ba698ca, "hid_hw_start" },
	{ 0xd589750f, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x889a0bc6, "hid_hw_stop" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000004E7p00000009");
MODULE_ALIAS("hid:b0003g*v000004E7p00000030");

MODULE_INFO(srcversion, "8D19459FA7B62FE63255E3C");
