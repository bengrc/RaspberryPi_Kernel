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
	{ 0x9c0eda11, "kernel_write" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x62500b66, "usb_gstrings_attach" },
	{ 0x3b917bbf, "complete_and_exit" },
	{ 0xcd4c97a1, "up_read" },
	{ 0xcaa1c48c, "usb_free_all_descriptors" },
	{ 0xbebe3a5f, "dequeue_signal" },
	{ 0x349cba85, "strchr" },
	{ 0xde7dcd04, "usb_ep_disable" },
	{ 0x69097fbc, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xdba4938b, "usb_ep_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8fc80a36, "usb_ep_set_wedge" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8178afc0, "config_item_put" },
	{ 0xfbf5db24, "file_path" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xbea63d2c, "vfs_fsync" },
	{ 0x65bffd8d, "usb_ep_set_halt" },
	{ 0xc173e2ac, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xeccf05fe, "usb_function_unregister" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0xafa10a99, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5de6a70c, "kernel_read" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0xe864e62d, "device_register" },
	{ 0x7a3fe895, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2ec92974, "freezing_slow_path" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x45c8ca32, "unregister_gadget_item" },
	{ 0x7c32d0f0, "printk" },
	{ 0x998b9ae3, "usb_ep_autoconfig" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0xb06a6149, "usb_ep_clear_halt" },
	{ 0x94425488, "up_write" },
	{ 0xa1633992, "_dev_err" },
	{ 0xbc22018b, "down_write" },
	{ 0xce6c0a2c, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd1182788, "usb_function_register" },
	{ 0xddb0ad34, "usb_composite_setup_continue" },
	{ 0xff5167c9, "usb_ep_dequeue" },
	{ 0x142a905e, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x3f7f5daf, "config_ep_by_speed" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0xa6ebd2cf, "usb_ep_free_request" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x97a01e99, "send_sig_info" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x63e9f516, "invalidate_mapping_pages" },
	{ 0x56e73c63, "usb_assign_descriptors" },
	{ 0x49970de8, "finish_wait" },
	{ 0x63ba6f18, "usb_interface_id" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0xd74765d9, "usb_ep_fifo_flush" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0xa85b36fd, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core";


MODULE_INFO(srcversion, "B259BFD2A9DE50098C9E891");
