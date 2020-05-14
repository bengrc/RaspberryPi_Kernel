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
	{ 0xf99c1793, "usbip_event_happened" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb72a6613, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x50093f6, "kernel_sendmsg" },
	{ 0xcf05465c, "sockfd_lookup" },
	{ 0x9f57232c, "usb_add_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd3c71436, "usb_remove_hcd" },
	{ 0xc9a16c73, "page_address" },
	{ 0xc2f1f5f, "usb_create_hcd" },
	{ 0x38b122e2, "usb_hcd_poll_rh_status" },
	{ 0x5867a667, "usbip_alloc_iso_desc_pdu" },
	{ 0xc4ed5445, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x789f9030, "usb_hcd_giveback_urb" },
	{ 0x91715312, "sprintf" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xecbb9b1c, "usb_put_hcd" },
	{ 0x262c8d07, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xa6ef26e, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x8c8eb74c, "usb_hcd_link_urb_to_ep" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x54111370, "kthread_stop" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0x5079c4af, "platform_device_del" },
	{ 0xafc7c2e6, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x74e3f75e, "platform_device_add" },
	{ 0x8ad45a1d, "kernel_sock_shutdown" },
	{ 0x25dd98bd, "usbip_stop_eh" },
	{ 0x34931be7, "dev_attr_usbip_debug" },
	{ 0xd12088ea, "platform_device_unregister" },
	{ 0x373db350, "kstrtoint" },
	{ 0xe4da128b, "sysfs_remove_link" },
	{ 0xa1633992, "_dev_err" },
	{ 0xce6c0a2c, "fput" },
	{ 0x58647372, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3911fb10, "usbip_pad_iso" },
	{ 0x85363b9c, "usb_hcd_check_unlink_urb" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xd56d40b9, "usbip_dump_urb" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x68b3b13f, "usbip_recv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x9f542c67, "platform_bus" },
	{ 0x1a1b0549, "platform_device_add_data" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e9c9612, "usbip_recv_xbuff" },
	{ 0x88933c3d, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xb607e5d3, "usb_hcd_unlink_urb_from_ep" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6fb9dce4, "usb_hcd_resume_root_hub" },
	{ 0x11b56b6c, "usbip_start_eh" },
	{ 0x97f20603, "usbip_pack_pdu" },
	{ 0xa3f8a07f, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "808D6DA4C0634CDE523A524");
