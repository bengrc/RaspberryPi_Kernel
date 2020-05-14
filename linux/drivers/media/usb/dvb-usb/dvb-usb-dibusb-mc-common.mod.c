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
	{ 0x402b8281, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x683f347, "dibusb_read_eeprom_byte" },
	{ 0xf4fe623e, "dib3000mc_pid_parse" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x66a6d311, "dib3000mc_pid_control" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xbaa6850d, "dib3000mc_get_tuner_i2c_master" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc93157d3, "dib3000mc_set_config" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dib3000mc";


MODULE_INFO(srcversion, "651A7855D8787DDA6478646");
