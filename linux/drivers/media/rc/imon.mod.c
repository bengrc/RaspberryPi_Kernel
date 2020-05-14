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
	{ 0xb7700415, "param_ops_int" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xb6458f7, "rc_free_device" },
	{ 0xa1633992, "_dev_err" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x3a31e06b, "input_set_abs_params" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x73dd5363, "usb_register_dev" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0xa42d6554, "rc_register_device" },
	{ 0xa9a114fa, "rc_allocate_device" },
	{ 0x175ec858, "input_register_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x8ccc143c, "input_allocate_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xe91afbe9, "usb_ifnum_to_if" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x5eb8d179, "usb_deregister_dev" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc5dbb8c0, "rc_unregister_device" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xb81960ca, "snprintf" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x97255bdf, "strlen" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x387742d, "usb_find_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe6c12171, "complete" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xddbad24d, "rc_keydown" },
	{ 0xabac819b, "rc_keyup" },
	{ 0x3b3a1192, "input_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa2b7e92, "rc_g_keycode_from_table" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ADF7AEF5647370E13A9AB5A");
