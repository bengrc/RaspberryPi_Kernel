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
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0x52526626, "device_remove_file" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xf99c1793, "usbip_event_happened" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x471a6f2a, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x50093f6, "kernel_sendmsg" },
	{ 0xcf05465c, "sockfd_lookup" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc9a16c73, "page_address" },
	{ 0xc099ceea, "usb_set_configuration" },
	{ 0x5867a667, "usbip_alloc_iso_desc_pdu" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xc4ed5445, "sg_next" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xda920bb1, "usb_hub_claim_port" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x262c8d07, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x5f754e5a, "memset" },
	{ 0x95abdb9b, "usbip_in_eh" },
	{ 0x748ee2a6, "usb_lock_device_for_reset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x54111370, "kthread_stop" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2f6223f6, "usb_register_device_driver" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8ad45a1d, "kernel_sock_shutdown" },
	{ 0xd3bd547f, "device_attach" },
	{ 0x25dd98bd, "usbip_stop_eh" },
	{ 0x34931be7, "dev_attr_usbip_debug" },
	{ 0xa1633992, "_dev_err" },
	{ 0xce6c0a2c, "fput" },
	{ 0x58647372, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0xd56d40b9, "usbip_dump_urb" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x1aca4876, "sgl_alloc" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xc29e28a4, "driver_create_file" },
	{ 0x68b3b13f, "usbip_recv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf19f424a, "usb_reset_device" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x73fd981b, "usb_clear_halt" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0xd014f3ea, "usb_deregister_device_driver" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e9c9612, "usbip_recv_xbuff" },
	{ 0xe7cd0041, "usb_hub_release_port" },
	{ 0x88933c3d, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8c946934, "driver_remove_file" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x11b56b6c, "usbip_start_eh" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x97f20603, "usbip_pack_pdu" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "3C5CCD9BC694C34E4775975");
