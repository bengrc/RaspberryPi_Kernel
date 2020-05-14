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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8b234c6b, "usb_stor_post_reset" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb8b8f55e, "usb_stor_disconnect" },
	{ 0x3b3a1192, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xb6a179b7, "usb_stor_probe2" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0xa1633992, "_dev_err" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x11c6b8ac, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x175ec858, "input_register_device" },
	{ 0xb102e8b1, "usb_stor_pre_reset" },
	{ 0xa0ba2da5, "usb_stor_reset_resume" },
	{ 0x7d51979e, "usb_stor_suspend" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x853a7941, "usb_stor_probe1" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5f45d2, "usb_stor_resume" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x8ccc143c, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0582A419EF6910DAEFCE1D1");
