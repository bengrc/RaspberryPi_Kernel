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
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x8027968f, "usb_autopm_get_interface" },
	{ 0x387742d, "usb_find_interface" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x73dd5363, "usb_register_dev" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0xc95316f5, "usb_get_intf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x524ccab1, "usb_autopm_put_interface" },
	{ 0x52526626, "device_remove_file" },
	{ 0x5eb8d179, "usb_deregister_dev" },
	{ 0x2da7e1a5, "usb_put_intf" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x1000e51, "schedule" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f754e5a, "memset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x91715312, "sprintf" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x5452c3c2, "usb_unanchor_urb" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xeb671564, "usb_anchor_urb" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7630A4FE4F190A094BFE7EC");
