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
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x7f8a9562, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd07da2bc, "single_release" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x9943b1a3, "seq_read" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x754f348a, "complete_all" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x9338b503, "tty_ldisc_flush" },
	{ 0x328a05f1, "strncpy" },
	{ 0x185038dd, "gpiod_direction_output_raw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x67acf6b0, "tty_driver_flush_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xd6daa318, "sysfs_notify" },
	{ 0xc104368b, "wait_for_completion_interruptible_timeout" },
	{ 0xfb954790, "stop_tty" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xfe990052, "gpio_free" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x27d7b178, "request_firmware" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x50f61d60, "gpiod_set_raw_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xbc2910a0, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0x51c4f30d, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "06B6E018857E74B4F2D4CEE");
