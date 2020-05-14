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
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc5dbb8c0, "rc_unregister_device" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xfcf12852, "dvb_unregister_adapter" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x87c2a1c5, "dvb_frontend_suspend" },
	{ 0x242cca6f, "dvb_register_frontend" },
	{ 0x54bd7b4c, "dvb_frontend_resume" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x96ae9a85, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa9a114fa, "rc_allocate_device" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x3d23dc80, "dvb_net_release" },
	{ 0xb187d90f, "i2c_add_adapter" },
	{ 0x4a1a8bdb, "dvb_frontend_detach" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x21381c3b, "dvb_dmx_swfilter_raw" },
	{ 0xb6458f7, "rc_free_device" },
	{ 0x49c68e3f, "dvb_dmxdev_release" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x72b9055b, "dvb_net_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa42d6554, "rc_register_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa1633992, "_dev_err" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0xedda2b2f, "dvb_dmx_swfilter_204" },
	{ 0xf63bc4f, "i2c_del_adapter" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x6992c268, "dvb_register_adapter" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xad36d4f0, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";


MODULE_INFO(srcversion, "7DA5EDD22CD7BE0AA1DB563");
