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
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x73dd5363, "usb_register_dev" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa1633992, "_dev_err" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x5eb8d179, "usb_deregister_dev" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v055FpA800d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AFB302C75936D22F1E64051");
