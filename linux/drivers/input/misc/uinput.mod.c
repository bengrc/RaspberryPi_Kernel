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
	{ 0x39ddd88, "no_llseek" },
	{ 0x83ef67e5, "misc_deregister" },
	{ 0x42e7859a, "misc_register" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0x3b3a1192, "input_event" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x97255bdf, "strlen" },
	{ 0x42382c7c, "input_mt_init_slots" },
	{ 0x66ed3e19, "input_alloc_absinfo" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x8ccc143c, "input_allocate_device" },
	{ 0x1d30129a, "input_ff_destroy" },
	{ 0x175ec858, "input_register_device" },
	{ 0x154ba584, "input_ff_create" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x51ef33b8, "kstrndup" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc8a2684e, "input_ff_flush" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe7ef4c7c, "nonseekable_open" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0xe6c12171, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D5BAACCEF23426A6A8B62E8");
