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
	{ 0x3e872658, "param_array_ops" },
	{ 0x54382663, "usbatm_usb_disconnect" },
	{ 0x8fdcf915, "param_ops_ushort" },
	{ 0xb316bedd, "param_ops_byte" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x51e26df8, "usb_driver_claim_interface" },
	{ 0xb5bc6b5e, "usb_altnum_to_altsetting" },
	{ 0x25a5f9ee, "usb_driver_release_interface" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x87ea9118, "usbatm_usb_probe" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm";


MODULE_INFO(srcversion, "8874015DD65844BE4130A67");
