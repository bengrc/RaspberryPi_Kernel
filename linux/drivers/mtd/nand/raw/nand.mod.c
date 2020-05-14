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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdd226fa9, "__raw_readsw" },
	{ 0xf6ac6ed8, "nand_calculate_ecc" },
	{ 0xf7163ec9, "__raw_readsb" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x488428a2, "mtd_ooblayout_get_eccbytes" },
	{ 0x2f2dbb77, "mtd_ooblayout_get_databytes" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x4fbbfb19, "mtd_ooblayout_find_eccregion" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xdad97f94, "__raw_writesw" },
	{ 0x999e8297, "vfree" },
	{ 0x7d0cce89, "nand_correct_data" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x99e22b01, "mtd_ooblayout_set_databytes" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xfaf4fdb0, "mtd_ooblayout_count_freebytes" },
	{ 0x7c32d0f0, "printk" },
	{ 0x70512321, "mtd_read" },
	{ 0x71c90087, "memcmp" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc0d2e6d6, "mtd_write_oob" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xf0ed2ef4, "__raw_writesb" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa16649ad, "mtd_ooblayout_set_eccbytes" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5cc22ad5, "mtd_device_unregister" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x4aab0d7e, "mtd_read_oob" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nand_ecc,mtd";


MODULE_INFO(srcversion, "A13E9F5943AFED03C7AA647");
