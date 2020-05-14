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
	{ 0x5cdc9a0c, "skb_queue_head" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0xc494e037, "debugfs_create_u8" },
	{ 0xc91beaf0, "__hci_cmd_sync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x76d324d7, "hci_register_dev" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0xf09d6f5a, "hci_unregister_dev" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x47022514, "bt_err" },
	{ 0x2ba70d94, "debugfs_create_x16" },
	{ 0xbdfaece4, "of_property_read_variable_u8_array" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x12e85778, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5fb7801a, "skb_queue_purge" },
	{ 0x9ab89b76, "default_llseek" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x54111370, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd358b1f4, "hci_alloc_dev" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x1061a901, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x7c093fe4, "of_property_read_variable_u16_array" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc11feff4, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x26b4024e, "hci_free_dev" },
	{ 0x9214b99, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "7F1FC12511476C0DEC969BE");
