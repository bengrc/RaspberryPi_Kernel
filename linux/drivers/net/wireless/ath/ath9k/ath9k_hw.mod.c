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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xb2eb4688, "ath_printk" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x9427d895, "ath_hw_get_listen_time" },
	{ 0xf83f59a1, "ath_regd_get_band_ctl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95edff2f, "ath_hw_cycle_counters_update" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xb1dc612c, "ath_hw_setbssidmask" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc67f27a7, "gpiod_set_raw_value" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca36db50, "gpiod_get_raw_value" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcafbd334, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath";


MODULE_INFO(srcversion, "020D5698B95239C793588F7");
