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
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x54382663, "usbatm_usb_disconnect" },
	{ 0xb316bedd, "param_ops_byte" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9d669763, "memcpy" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x51e26df8, "usb_driver_claim_interface" },
	{ 0xd99358c1, "atm_dev_signal_change" },
	{ 0x5f754e5a, "memset" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x71c90087, "memcmp" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x91715312, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x25a5f9ee, "usb_driver_release_interface" },
	{ 0xe91afbe9, "usb_ifnum_to_if" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x431f8187, "usb_string" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x92b57248, "flush_work" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x87ea9118, "usbatm_usb_probe" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "830063AB5B56DA3DC21842C");
