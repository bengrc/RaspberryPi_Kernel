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
	{ 0x402b8281, "__request_module" },
	{ 0x52526626, "device_remove_file" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x349cba85, "strchr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1950dd62, "usb_gadget_deactivate" },
	{ 0x97255bdf, "strlen" },
	{ 0xdba4938b, "usb_ep_queue" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x8178afc0, "config_item_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1f02a56b, "config_item_init_type_name" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x988a07a8, "usb_gadget_unregister_driver" },
	{ 0xc173e2ac, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xb4f41938, "usb_gadget_set_state" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc711b166, "usb_gadget_clear_selfpowered" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6823ed53, "usb_gadget_activate" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0xfe487043, "init_uts_ns" },
	{ 0x52686773, "configfs_register_subsystem" },
	{ 0xa1633992, "_dev_err" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0xff5167c9, "usb_ep_dequeue" },
	{ 0xd040e01a, "module_put" },
	{ 0xef15e2ab, "config_item_set_name" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa019ff5, "usb_gadget_vbus_draw" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x23eb470c, "usb_gadget_set_selfpowered" },
	{ 0xe05cfd6c, "configfs_unregister_subsystem" },
	{ 0xa6ebd2cf, "usb_ep_free_request" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa718d518, "usb_gadget_ep_match_desc" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xc4c92e51, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2f0d49a1, "config_group_init" },
	{ 0x42b41bb0, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";


MODULE_INFO(srcversion, "553F6CF59F851123082EA56");
