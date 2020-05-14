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
	{ 0x803a331f, "bus_register" },
	{ 0x402b8281, "__request_module" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xc30920a, "cn_add_callback" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7dcdf3be, "driver_register" },
	{ 0x31655747, "of_find_matching_node_and_match" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd24baf21, "hwmon_device_unregister" },
	{ 0x4c9042d2, "kobject_uevent" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x5f791ed1, "sysfs_remove_group" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe864e62d, "device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x54111370, "kthread_stop" },
	{ 0xa7b1f769, "sysfs_create_group" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xb7bc2d11, "hwmon_device_register_with_info" },
	{ 0x373db350, "kstrtoint" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf18fb489, "bus_unregister" },
	{ 0xa54dc022, "cn_netlink_send" },
	{ 0x9b69f1b3, "flush_signals" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x142a905e, "put_device" },
	{ 0x44129ade, "cn_netlink_send_mult" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xeaf67fe1, "sysfs_create_groups" },
	{ 0x3bb8d296, "sysfs_remove_groups" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cn,hwmon";


MODULE_INFO(srcversion, "2A305B94BE9F8A518702264");
