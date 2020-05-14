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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x803a331f, "bus_register" },
	{ 0x402b8281, "__request_module" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7dcdf3be, "driver_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8dc5e1f9, "snd_device_new" },
	{ 0xb0ff659, "device_del" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6b685034, "device_add" },
	{ 0xf18fb489, "bus_unregister" },
	{ 0x10bb3cbd, "bus_for_each_dev" },
	{ 0x142a905e, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c2edca1, "snd_seq_root" },
	{ 0xf031c63c, "snd_info_free_entry" },
	{ 0x67258e26, "device_initialize" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x1d74d57d, "snd_info_create_module_entry" },
	{ 0xb9a88a, "snd_info_register" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "4563576F5BC63C96D9EFBFF");
