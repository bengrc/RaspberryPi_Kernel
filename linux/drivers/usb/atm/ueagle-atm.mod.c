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
	{ 0x3e872658, "param_array_ops" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x1e0535cc, "request_firmware_nowait" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x87ea9118, "usbatm_usb_probe" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x84b183ae, "strncmp" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xaf5025be, "kernel_param_unlock" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xc530dd27, "kernel_param_lock" },
	{ 0x6d87b69, "crc32_be" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x2ec92974, "freezing_slow_path" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x5f754e5a, "memset" },
	{ 0xd99358c1, "atm_dev_signal_change" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x51e26df8, "usb_driver_claim_interface" },
	{ 0xe91afbe9, "usb_ifnum_to_if" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x92b57248, "flush_work" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0x54111370, "kthread_stop" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0xa1633992, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x91715312, "sprintf" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x431f8187, "usb_string" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x54382663, "usbatm_usb_disconnect" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v1110p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p900Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3351d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3352d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3353d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3362d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3363d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00FAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F7d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9CDFA3C970E1744F37EC8EE");
