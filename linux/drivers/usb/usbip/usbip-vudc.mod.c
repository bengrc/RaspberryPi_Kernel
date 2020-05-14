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
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x50093f6, "kernel_sendmsg" },
	{ 0xcf05465c, "sockfd_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5867a667, "usbip_alloc_iso_desc_pdu" },
	{ 0xe14c2502, "usb_del_gadget_udc" },
	{ 0x83feec4a, "usb_gadget_giveback_request" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x262c8d07, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfcf938a6, "usb_gadget_udc_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x54111370, "kthread_stop" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x5079c4af, "platform_device_del" },
	{ 0xafc7c2e6, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x74e3f75e, "platform_device_add" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8ad45a1d, "kernel_sock_shutdown" },
	{ 0x25dd98bd, "usbip_stop_eh" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x373db350, "kstrtoint" },
	{ 0xa1633992, "_dev_err" },
	{ 0xce6c0a2c, "fput" },
	{ 0x58647372, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x68b3b13f, "usbip_recv" },
	{ 0xaee7c28a, "usb_add_gadget_udc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xdb1a00f4, "usb_ep_set_maxpacket_limit" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e9c9612, "usbip_recv_xbuff" },
	{ 0x88933c3d, "__put_task_struct" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x11b56b6c, "usbip_start_eh" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x97f20603, "usbip_pack_pdu" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xa3f8a07f, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core,udc-core";


MODULE_INFO(srcversion, "48C65189229D17D98DB3290");
