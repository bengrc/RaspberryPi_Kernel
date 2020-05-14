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
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xde7dcd04, "usb_ep_disable" },
	{ 0x69097fbc, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdba4938b, "usb_ep_queue" },
	{ 0x39ddd88, "no_llseek" },
	{ 0x176e7f1a, "generic_delete_inode" },
	{ 0x4da19baf, "dput" },
	{ 0x65b3d37d, "dup_iter" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3819a3ab, "init_user_ns" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x12369fda, "mount_single" },
	{ 0x667996a, "d_add" },
	{ 0x65bffd8d, "usb_ep_set_halt" },
	{ 0x988a07a8, "usb_gadget_unregister_driver" },
	{ 0xc173e2ac, "usb_ep_alloc_request" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xb4f41938, "usb_gadget_set_state" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xac1b83ab, "d_delete" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x43b0b18, "kill_litter_super" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0x874bc57d, "fasync_helper" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xb06a6149, "usb_ep_clear_halt" },
	{ 0x1c0f7b0f, "use_mm" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xff5167c9, "usb_ep_dequeue" },
	{ 0xa019ff5, "usb_gadget_vbus_draw" },
	{ 0x1634a84c, "simple_dir_operations" },
	{ 0x12a38747, "usleep_range" },
	{ 0x69439a68, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0xa6ebd2cf, "usb_ep_free_request" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x79cf92b4, "kiocb_set_cancel_fn" },
	{ 0x8c3c7a6c, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xc4c92e51, "usb_gadget_probe_driver" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x460613e6, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6c85edc, "current_time" },
	{ 0xf9147ce9, "d_make_root" },
	{ 0x9e4f7df8, "kill_fasync" },
	{ 0xfdfe54ca, "simple_statfs" },
	{ 0x90529b0d, "d_alloc_name" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8a7d02bc, "unregister_filesystem" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0x414ed825, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0xf429797, "unuse_mm" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xd74765d9, "usb_ep_fifo_flush" },
	{ 0x7c335830, "simple_dir_inode_operations" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0x51294cce, "_copy_to_iter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "1513D1FD05E05E24CEDDA4D");
