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
	{ 0xc9415b2d, "dm_unregister_target" },
	{ 0x8bbc6640, "dm_register_target" },
	{ 0x7c32d0f0, "printk" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x927c49d, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x8819a907, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd67c73c3, "dm_per_bio_data" },
	{ 0x27bf4920, "generic_make_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb4ec080, "dm_bio_from_per_bio_data" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "A239C0131B654EB7DED1C54");
