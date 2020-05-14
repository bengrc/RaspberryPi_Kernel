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
	{ 0xd1ff5830, "em28xx_read_reg" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xc5dbb8c0, "rc_unregister_device" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x9d6dd0d1, "em28xx_write_regs" },
	{ 0x93b7b6b7, "dev_printk" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xe548ad75, "em28xx_register_extension" },
	{ 0xa9a114fa, "rc_allocate_device" },
	{ 0x3b3a1192, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x746f8f04, "em28xx_find_led" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xb6458f7, "rc_free_device" },
	{ 0x560efcf9, "em28xx_toggle_reg_bits" },
	{ 0xddbad24d, "rc_keydown" },
	{ 0x76521881, "em28xx_unregister_extension" },
	{ 0xa42d6554, "rc_register_device" },
	{ 0x2c43e4ef, "em28xx_write_reg_bits" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x175ec858, "input_register_device" },
	{ 0x9fd3107a, "input_free_device" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x2132dcde, "input_unregister_device" },
	{ 0xa445a5f8, "i2c_probe_func_quick_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3c100274, "em28xx_write_reg" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8ccc143c, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "00591157FC994EC12459052");
