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
	{ 0xf63233b0, "bus_unregister_notifier" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x705efac0, "i2c_for_each_dev" },
	{ 0xcbdda25a, "bus_register_notifier" },
	{ 0x9921e432, "i2c_bus_type" },
	{ 0x9c921cae, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x38142440, "device_destroy" },
	{ 0x7c32d0f0, "printk" },
	{ 0x489c6f18, "cdev_del" },
	{ 0x69e1d2e, "device_create" },
	{ 0xab9fff11, "cdev_add" },
	{ 0x60cd5082, "cdev_init" },
	{ 0x91715312, "sprintf" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x723b4765, "i2c_transfer_buffer_flags" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1a3ed4a9, "i2c_smbus_xfer" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x53c62953, "i2c_transfer" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x240824f5, "i2c_verify_client" },
	{ 0xdf4f7743, "device_for_each_child" },
	{ 0xfb228b05, "i2c_adapter_type" },
	{ 0xb81960ca, "snprintf" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xdd183f84, "i2c_get_adapter" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d89c3b4, "i2c_put_adapter" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9279B09D6DD496DB989761E");
