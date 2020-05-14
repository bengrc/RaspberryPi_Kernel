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
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x1fe4dfeb, "flexcop_device_initialize" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5081f27d, "flexcop_device_kfree" },
	{ 0x62aff9dd, "flexcop_sram_ctrl" },
	{ 0x5f754e5a, "memset" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x274365b7, "flexcop_device_kmalloc" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xeea92a40, "flexcop_sram_set_dest" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x15fadf33, "flexcop_pass_dmx_packets" },
	{ 0x24638fa6, "flexcop_wan_set_speed" },
	{ 0x9d669763, "memcpy" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x1ab943cc, "flexcop_device_exit" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b2c2-flexcop";

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "591417929B732EAA38ACB1F");
