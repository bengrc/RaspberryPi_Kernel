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
	{ 0x489c6f18, "cdev_del" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x60cd5082, "cdev_init" },
	{ 0x62500b66, "usb_gstrings_attach" },
	{ 0xcaa1c48c, "usb_free_all_descriptors" },
	{ 0xde7dcd04, "usb_ep_disable" },
	{ 0x69097fbc, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdba4938b, "usb_ep_queue" },
	{ 0x38142440, "device_destroy" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0xeccf05fe, "usb_function_unregister" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x7a3fe895, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x998b9ae3, "usb_ep_autoconfig" },
	{ 0x21af32f7, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x69e1d2e, "device_create" },
	{ 0xa1633992, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd1182788, "usb_function_register" },
	{ 0xab9fff11, "cdev_add" },
	{ 0x7a4827ec, "alloc_ep_req" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x3f7f5daf, "config_ep_by_speed" },
	{ 0xa6ebd2cf, "usb_ep_free_request" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x56e73c63, "usb_assign_descriptors" },
	{ 0x49970de8, "finish_wait" },
	{ 0x63ba6f18, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9c921cae, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core";


MODULE_INFO(srcversion, "F5076825F498FCA12F93934");
