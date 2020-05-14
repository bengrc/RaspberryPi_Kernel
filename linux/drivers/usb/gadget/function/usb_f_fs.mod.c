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
	{ 0x349cba85, "strchr" },
	{ 0xde7dcd04, "usb_ep_disable" },
	{ 0x69097fbc, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x97255bdf, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xdba4938b, "usb_ep_queue" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x39ddd88, "no_llseek" },
	{ 0x176e7f1a, "generic_delete_inode" },
	{ 0x4da19baf, "dput" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x65b3d37d, "dup_iter" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x667996a, "d_add" },
	{ 0x65bffd8d, "usb_ep_set_halt" },
	{ 0x7111004c, "mount_nodev" },
	{ 0xc173e2ac, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xeccf05fe, "usb_function_unregister" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xac1b83ab, "d_delete" },
	{ 0xf3d4bde4, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x43b0b18, "kill_litter_super" },
	{ 0x7a3fe895, "usb_put_function_instance" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x45c8ca32, "unregister_gadget_item" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x998b9ae3, "usb_ep_autoconfig" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb7362c90, "do_wait_intr_irq" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x62d0e2a6, "__wake_up_locked" },
	{ 0xb06a6149, "usb_ep_clear_halt" },
	{ 0x1c0f7b0f, "use_mm" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd1182788, "usb_function_register" },
	{ 0xff5167c9, "usb_ep_dequeue" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x1634a84c, "simple_dir_operations" },
	{ 0x69439a68, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x9577a239, "_copy_from_iter_full" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x3f7f5daf, "config_ep_by_speed" },
	{ 0xa6ebd2cf, "usb_ep_free_request" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x79cf92b4, "kiocb_set_cancel_fn" },
	{ 0x8c3c7a6c, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x460613e6, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc6c85edc, "current_time" },
	{ 0xf9147ce9, "d_make_root" },
	{ 0xfdfe54ca, "simple_statfs" },
	{ 0x90529b0d, "d_alloc_name" },
	{ 0x49970de8, "finish_wait" },
	{ 0x63ba6f18, "usb_interface_id" },
	{ 0x8a7d02bc, "unregister_filesystem" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0x414ed825, "new_inode" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x99bb8806, "memmove" },
	{ 0xf429797, "unuse_mm" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xd74765d9, "usb_ep_fifo_flush" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7c335830, "simple_dir_inode_operations" },
	{ 0x84072fd9, "usb_string_ids_n" },
	{ 0x51294cce, "_copy_to_iter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core,libcomposite";


MODULE_INFO(srcversion, "4DB11380301150FA9538AB3");
