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
	{ 0x7dcdf3be, "driver_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa81df998, "device_release_driver" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x8fe1a725, "device_bind_driver" },
	{ 0xb0ff659, "device_del" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd3bd547f, "device_attach" },
	{ 0x6b685034, "device_add" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf18fb489, "bus_unregister" },
	{ 0xd040e01a, "module_put" },
	{ 0x142a905e, "put_device" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x60e1284f, "__module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x67258e26, "device_initialize" },
	{ 0x7a46b5d1, "driver_attach" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0xa4cb25b, "driver_find" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "91E703BAD5EBF435706CF36");
