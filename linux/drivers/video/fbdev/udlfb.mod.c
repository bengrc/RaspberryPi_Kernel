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
	{ 0xb7700415, "param_ops_int" },
	{ 0xb3e8d6e1, "fb_sys_read" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x7d5d5c09, "device_create_bin_file" },
	{ 0x4cf24332, "__usb_get_extra_descriptor" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0x34438e7, "register_framebuffer" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x4214105e, "usb_alloc_urb" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaf2baebb, "framebuffer_alloc" },
	{ 0xb481f32c, "usb_get_descriptor" },
	{ 0xe617b64, "usb_get_dev" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xee63647, "fb_deferred_io_init" },
	{ 0x43e1d70a, "fb_deferred_io_cleanup" },
	{ 0x18b56583, "fb_sys_write" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x71c90087, "memcmp" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf76b0a59, "read_current_timer" },
	{ 0x5f754e5a, "memset" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x807d4746, "framebuffer_release" },
	{ 0xee37c2a5, "usb_put_dev" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x999e8297, "vfree" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x45dd4a41, "sys_fillrect" },
	{ 0xbd6515f0, "sys_copyarea" },
	{ 0xd5806961, "sys_imageblit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5cba7af8, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x9645ed0b, "pgprot_user" },
	{ 0x471340a, "unregister_framebuffer" },
	{ 0xb642874b, "device_remove_bin_file" },
	{ 0x52526626, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0xf0ef52e8, "down" },
	{ 0xb81960ca, "snprintf" },
	{ 0x581cde4e, "up" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa1633992, "_dev_err" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x9cf41a78, "down_timeout" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt";

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "48C67222A1093A29E30E23E");
