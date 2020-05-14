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
	{ 0x7825541a, "mempool_exit" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xc30920a, "cn_add_callback" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x927c49d, "dm_get_device" },
	{ 0x49504e1b, "dm_dirty_log_type_unregister" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xa54dc022, "cn_netlink_send" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5ad2f180, "dm_dirty_log_type_register" },
	{ 0x502c1f7a, "mempool_alloc" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x278606ec, "mempool_free" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x27ab8b8a, "mempool_init" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x8819a907, "dm_put_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cn,dm-mod,dm-log";


MODULE_INFO(srcversion, "AA8AA2F5EBDB27CDC5B8875");
