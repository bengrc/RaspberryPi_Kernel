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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x88045b28, "snd_pcm_period_elapsed" },
	{ 0x93b7b6b7, "dev_printk" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xe548ad75, "em28xx_register_extension" },
	{ 0xd1090861, "snd_pcm_stream_lock" },
	{ 0x91715312, "sprintf" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0x351066cf, "snd_pcm_hw_constraint_integer" },
	{ 0xc6aeafe4, "snd_card_disconnect" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x7190462e, "em28xx_read_ac97" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x447870ab, "em28xx_write_ac97" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8bcaf4a7, "snd_pcm_set_ops" },
	{ 0x2a58285a, "usb_set_interface" },
	{ 0x76521881, "em28xx_unregister_extension" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xc1d0155d, "snd_pcm_lib_ioctl" },
	{ 0xc40ee47d, "usb_free_coherent" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcbefec57, "snd_ctl_boolean_mono_info" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x194d4716, "snd_card_new" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c5db821, "snd_pcm_stream_unlock" },
	{ 0xd34d441c, "snd_ctl_new1" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xda94c15b, "snd_pcm_hw_constraint_minmax" },
	{ 0x20de800c, "snd_card_free" },
	{ 0xf2c69986, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe91afbe9, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x972a0334, "snd_pcm_new" },
	{ 0xdbfc0f68, "vmalloc_to_page" },
	{ 0x8e856de9, "usb_alloc_coherent" },
	{ 0x4d3d688, "snd_ctl_add" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x76e50e4c, "em28xx_audio_analog_set" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,snd-pcm,snd";


MODULE_INFO(srcversion, "9AC263912702EF478AB0231");
