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
	{ 0x2d3385d3, "system_wq" },
	{ 0xc83c0617, "is_fw_load" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x88045b28, "snd_pcm_period_elapsed" },
	{ 0x100f3c99, "_snd_pcm_stream_lock_irqsave" },
	{ 0xa5afa2f1, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x24780123, "usb_unlink_urb" },
	{ 0x351066cf, "snd_pcm_hw_constraint_integer" },
	{ 0xbe7d6f7f, "cx231xx_register_extension" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x8bcaf4a7, "snd_pcm_set_ops" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa7cb3ad5, "snd_pcm_stream_unlock_irqrestore" },
	{ 0xc1d0155d, "snd_pcm_lib_ioctl" },
	{ 0xa1633992, "_dev_err" },
	{ 0x194d4716, "snd_card_new" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x381b4a39, "cx231xx_capture_start" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x466385d2, "cx231xx_set_alt_setting" },
	{ 0x20de800c, "snd_card_free" },
	{ 0xf2c69986, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x972a0334, "snd_pcm_new" },
	{ 0xdbfc0f68, "vmalloc_to_page" },
	{ 0x92d97238, "usb_free_urb" },
	{ 0x3f51c6b6, "cx231xx_unregister_extension" },
	{ 0x4214105e, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx,snd-pcm,snd";


MODULE_INFO(srcversion, "5A15187AD5F6C89D75FC472");
