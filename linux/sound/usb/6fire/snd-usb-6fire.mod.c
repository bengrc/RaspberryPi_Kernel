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
	{ 0xf9a482f9, "msleep" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x88045b28, "snd_pcm_period_elapsed" },
	{ 0xe20625db, "usb_init_urb" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x6d9c31f9, "snd_pcm_stop_xrun" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb179808f, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0xc6aeafe4, "snd_card_disconnect" },
	{ 0xc43f8d7, "snd_rawmidi_new" },
	{ 0xda7acb2b, "_snd_ctl_add_slave" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x634acce4, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x8bcaf4a7, "snd_pcm_set_ops" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x51ea178a, "snd_ctl_boolean_stereo_info" },
	{ 0x570f3106, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1fc7677a, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xced14002, "usb_poison_urb" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc1d0155d, "snd_pcm_lib_ioctl" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcbefec57, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x194d4716, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xe94d1497, "snd_ctl_make_virtual_master" },
	{ 0xae4dd893, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3005f012, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xd34d441c, "snd_ctl_new1" },
	{ 0xbe9176fe, "usb_interrupt_msg" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x27d7b178, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x20de800c, "snd_card_free" },
	{ 0xf2c69986, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x972a0334, "snd_pcm_new" },
	{ 0x7e0c25d3, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x4d3d688, "snd_ctl_add" },
	{ 0x9fcba56d, "snd_rawmidi_transmit" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x760b4cc9, "snd_rawmidi_receive" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-rawmidi,snd";

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D517ECD0AE7AF246EE9F2BC");
