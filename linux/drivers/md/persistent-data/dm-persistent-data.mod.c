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
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xc0d7df85, "dm_bufio_new" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa82b2066, "dm_bufio_write_dirty_buffers" },
	{ 0xb15b4109, "crc32c" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c381a76, "dm_bufio_get_block_size" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x748d72fd, "dm_bufio_client_create" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xebcc64a4, "dm_bufio_get_block_data" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x2e0774dc, "dm_bufio_get_block_number" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xad0dc4f, "dm_bufio_mark_buffer_dirty" },
	{ 0x24772bfe, "dm_bufio_get" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x6d3f57bd, "dm_bufio_get_client" },
	{ 0x99bb8806, "memmove" },
	{ 0x49ebacbd, "_clear_bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-bufio";


MODULE_INFO(srcversion, "44DE0D3B17FC700877D2701");
