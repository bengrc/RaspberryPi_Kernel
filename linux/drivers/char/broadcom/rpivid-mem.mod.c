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
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x69e1d2e, "device_create" },
	{ 0x9c921cae, "__class_create" },
	{ 0xab9fff11, "cdev_add" },
	{ 0x60cd5082, "cdev_init" },
	{ 0xa1633992, "_dev_err" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xc64803ce, "platform_get_resource" },
	{ 0x47820ec9, "of_match_device" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x5cba7af8, "remap_pfn_range" },
	{ 0xdefd1930, "phys_mem_access_prot" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x489c6f18, "cdev_del" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x38142440, "device_destroy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-hevc-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-hevc-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-h264-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-h264-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vp9-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vp9-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-local-intc");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-local-intcC*");

MODULE_INFO(srcversion, "DAC3911174A156622615F5E");
