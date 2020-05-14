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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x62500b66, "usb_gstrings_attach" },
	{ 0xcaa1c48c, "usb_free_all_descriptors" },
	{ 0xe384bdd3, "gserial_connect" },
	{ 0xde7dcd04, "usb_ep_disable" },
	{ 0x69097fbc, "usb_ep_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdba4938b, "usb_ep_queue" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x65bffd8d, "usb_ep_set_halt" },
	{ 0x91715312, "sprintf" },
	{ 0xeccf05fe, "usb_function_unregister" },
	{ 0x7a3fe895, "usb_put_function_instance" },
	{ 0x998b9ae3, "usb_ep_autoconfig" },
	{ 0x9c2c3a82, "gserial_disconnect" },
	{ 0xde330ec0, "gs_alloc_req" },
	{ 0xc686d185, "config_group_init_type_name" },
	{ 0xa1633992, "_dev_err" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0xd1182788, "usb_function_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3f7f5daf, "config_ep_by_speed" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0x56e73c63, "usb_assign_descriptors" },
	{ 0x63ba6f18, "usb_interface_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf9bb0c81, "gs_free_req" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial,udc-core";


MODULE_INFO(srcversion, "02E722A6C6662FDF62554A8");
