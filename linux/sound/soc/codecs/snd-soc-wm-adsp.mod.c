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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x3ba1cdc8, "regmap_raw_write" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x2a130638, "snd_soc_bytes_tlv_callback" },
	{ 0x91280506, "snd_soc_component_disable_pin" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x948db545, "debugfs_create_x32" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x999e8297, "vfree" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0xf1809d95, "devm_kasprintf" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x71c90087, "memcmp" },
	{ 0x76838652, "snd_soc_add_component_controls" },
	{ 0xc964ea12, "regmap_async_complete" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1061a901, "simple_open" },
	{ 0x17b11ae4, "debugfs_create_bool" },
	{ 0xa1633992, "_dev_err" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xacc3ad6e, "devm_kstrdup" },
	{ 0x239e7675, "snd_soc_dapm_sync" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x1fd5f041, "regmap_raw_write_async" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x2f4f377e, "regmap_raw_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9c36e68d, "snd_compr_stop_error" },
	{ 0x81fbabf6, "snd_soc_component_force_enable_pin" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x51c4f30d, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-compress";


MODULE_INFO(srcversion, "59F2279AFD24D49DC65693F");
