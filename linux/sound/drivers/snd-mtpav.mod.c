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
	{ 0x85bd1608, "__request_region" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xee0e083e, "platform_device_register_full" },
	{ 0x91715312, "sprintf" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc43f8d7, "snd_rawmidi_new" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd12088ea, "platform_device_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x194d4716, "snd_card_new" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x5ad34cdb, "param_ops_long" },
	{ 0x20de800c, "snd_card_free" },
	{ 0xf2c69986, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x9fcba56d, "snd_rawmidi_transmit" },
	{ 0x760b4cc9, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd";


MODULE_INFO(srcversion, "CC00053E5021CC1A099EB4C");
