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
	{ 0xb559f2c, "usb_mon_register" },
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0x489c6f18, "cdev_del" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x60cd5082, "cdev_init" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc9a16c73, "page_address" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xd56cb15e, "usb_debug_root" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x39ddd88, "no_llseek" },
	{ 0x38142440, "device_destroy" },
	{ 0xc4ed5445, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xc0420b23, "usb_bus_idr_lock" },
	{ 0x6415795a, "debugfs_remove" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x69e1d2e, "device_create" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xfed11ed1, "usb_mon_deregister" },
	{ 0xab9fff11, "cdev_add" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0xaa49bd7c, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xcb9ed1f9, "usb_bus_idr" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x9c921cae, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "919DA275607B231672D1FD8");
