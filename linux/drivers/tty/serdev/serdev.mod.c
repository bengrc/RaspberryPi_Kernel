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
	{ 0x803a331f, "bus_register" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0x7dcdf3be, "driver_register" },
	{ 0x5366a982, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0x7e0b7cdd, "devres_alloc_node" },
	{ 0x3d3a47d8, "pm_runtime_no_callbacks" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x44d1b013, "of_device_uevent_modalias" },
	{ 0xb0ff659, "device_del" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x21af32f7, "ida_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6b685034, "device_add" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf18fb489, "bus_unregister" },
	{ 0x47820ec9, "of_match_device" },
	{ 0x6fadf3da, "dev_pm_domain_detach" },
	{ 0xb3508b83, "pm_runtime_enable" },
	{ 0x142a905e, "put_device" },
	{ 0xd2027ac4, "of_get_property" },
	{ 0x1bb9fb6a, "devres_add" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x6ac1632d, "of_get_next_available_child" },
	{ 0xdf4f7743, "device_for_each_child" },
	{ 0x89d3be41, "dev_pm_domain_attach" },
	{ 0xc69b5fdf, "of_device_modalias" },
	{ 0x37a0cba, "kfree" },
	{ 0x67258e26, "device_initialize" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0xe6c12171, "complete" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x445c816c, "ida_destroy" },
	{ 0xeb00f3ca, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A0031F512791ED836475D28");
