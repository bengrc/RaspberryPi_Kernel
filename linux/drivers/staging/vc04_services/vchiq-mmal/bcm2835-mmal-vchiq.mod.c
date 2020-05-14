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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x80c8b05d, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0x431f3c4b, "vchi_service_open" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xde1e602, "vchi_msg_hold" },
	{ 0x999e8297, "vfree" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x4390690, "vchi_service_use" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x49a7510f, "vchi_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1cd9ef1b, "vchi_held_msg_release" },
	{ 0x4f6fff7, "vc_sm_cma_import_dmabuf" },
	{ 0xb45f9c3e, "vchi_connect" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0x61275678, "idr_remove" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xe6c12171, "complete" },
	{ 0x8561e970, "vchi_bulk_queue_receive" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xaf38e081, "idr_find" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vc-sm-cma";


MODULE_INFO(srcversion, "25DC31DA7318FDD5E753DA6");
