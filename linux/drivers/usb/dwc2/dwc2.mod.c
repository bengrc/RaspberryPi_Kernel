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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3cf6bb11, "phy_init" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x3bb59ab0, "usb_gadget_map_request" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x75214c3c, "dma_release_from_dev_coherent" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9f57232c, "usb_add_hcd" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x26c137a8, "usb_hcd_unmap_urb_for_dma" },
	{ 0x7f8a9562, "single_open" },
	{ 0xcbedb932, "devm_phy_get" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd3c71436, "usb_remove_hcd" },
	{ 0xea124bd1, "gcd" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x978b0c30, "regulator_disable" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0xd07da2bc, "single_release" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0xc2f1f5f, "usb_create_hcd" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe14c2502, "usb_del_gadget_udc" },
	{ 0x83feec4a, "usb_gadget_giveback_request" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa48dda3a, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x789f9030, "usb_hcd_giveback_urb" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0x9943b1a3, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xf655e30c, "__devm_reset_control_get" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf0b2526e, "usb_hub_clear_tt_buffer" },
	{ 0xb4f41938, "usb_gadget_set_state" },
	{ 0xecbb9b1c, "usb_put_hcd" },
	{ 0x6a0285e9, "phy_power_off" },
	{ 0xe2ad7c89, "devm_regulator_bulk_get" },
	{ 0x3f3ba620, "regulator_bulk_enable" },
	{ 0x12d8a2c7, "dma_alloc_from_dev_coherent" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4572a496, "usb_gadget_unmap_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x4ebc6bb0, "dmam_free_coherent" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x8c8eb74c, "usb_hcd_link_urb_to_ep" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x7c32d0f0, "printk" },
	{ 0xacb31ecf, "_raw_spin_trylock" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x30ad44b7, "phy_power_on" },
	{ 0x84b183ae, "strncmp" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x850c6b8a, "device_property_read_string" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xc64803ce, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0x47820ec9, "of_match_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x85363b9c, "usb_hcd_check_unlink_urb" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x8a3c4932, "debugfs_create_regset32" },
	{ 0xcba6de06, "device_property_read_u32_array" },
	{ 0xeb2a6a67, "regulator_bulk_disable" },
	{ 0x15e806f2, "phy_exit" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaee7c28a, "usb_add_gadget_udc" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x48afb2f0, "usb_hcd_map_urb_for_dma" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdb1a00f4, "usb_ep_set_maxpacket_limit" },
	{ 0x1a320c96, "usb_get_dr_mode" },
	{ 0x5b151d90, "devm_regulator_get_optional" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x9d669763, "memcpy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbaa9a2c9, "platform_get_irq" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0xb607e5d3, "usb_hcd_unlink_urb_from_ep" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6fb9dce4, "usb_hcd_resume_root_hub" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xf5e18bfd, "regulator_enable" },
	{ 0xd0e9c7f, "dmam_alloc_coherent" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usb");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usbC*");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usb");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usbC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usb");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usb");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usb");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usbC*");
MODULE_ALIAS("of:N*T*Csnps,dwc2");
MODULE_ALIAS("of:N*T*Csnps,dwc2C*");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotg");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotgC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usbC*");
MODULE_ALIAS("of:N*T*Camcc,dwc-otg");
MODULE_ALIAS("of:N*T*Camcc,dwc-otgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotgC*");

MODULE_INFO(srcversion, "B2A039EAB3B8F9A95694FE4");
