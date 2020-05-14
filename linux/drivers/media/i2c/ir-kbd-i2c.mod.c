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
	{ 0x7d54146, "param_ops_bool" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x71c90087, "memcmp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xddbad24d, "rc_keydown" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x5f754e5a, "memset" },
	{ 0xd34da80c, "i2c_new_dummy" },
	{ 0xb6458f7, "rc_free_device" },
	{ 0xa42d6554, "rc_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xb81960ca, "snprintf" },
	{ 0xa9a114fa, "rc_allocate_device" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1633992, "_dev_err" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5dbb8c0, "rc_unregister_device" },
	{ 0x5347d8c2, "i2c_unregister_device" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "FEC2553F79D7CE4D37177D0");
