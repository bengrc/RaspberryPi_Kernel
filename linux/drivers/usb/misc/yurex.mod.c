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
	{ 0x9ab89b76, "default_llseek" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x73dd5363, "usb_register_dev" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0xc95316f5, "usb_get_intf" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xced14002, "usb_poison_urb" },
	{ 0x5eb8d179, "usb_deregister_dev" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9e4f7df8, "kill_fasync" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa1633992, "_dev_err" },
	{ 0x7c32d0f0, "printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x387742d, "usb_find_interface" },
	{ 0x874bc57d, "fasync_helper" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x2da7e1a5, "usb_put_intf" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "828AB5495726902C349F3F1");
