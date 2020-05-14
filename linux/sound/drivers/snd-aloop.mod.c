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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x88045b28, "snd_pcm_period_elapsed" },
	{ 0x342f017b, "snd_info_create_card_entry" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x7440cb51, "seq_printf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xee0e083e, "platform_device_register_full" },
	{ 0x91715312, "sprintf" },
	{ 0x351066cf, "snd_pcm_hw_constraint_integer" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x43745509, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x8bcaf4a7, "snd_pcm_set_ops" },
	{ 0x896fae53, "snd_ctl_notify" },
	{ 0x1fc7677a, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd12088ea, "platform_device_unregister" },
	{ 0xc1d0155d, "snd_pcm_lib_ioctl" },
	{ 0xcbefec57, "snd_ctl_boolean_mono_info" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x194d4716, "snd_card_new" },
	{ 0x9ae45f6d, "snd_pcm_hw_rule_add" },
	{ 0xae4dd893, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xd34d441c, "snd_ctl_new1" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x1acbfe0c, "snd_pcm_stop" },
	{ 0x20de800c, "snd_card_free" },
	{ 0xf2c69986, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x972a0334, "snd_pcm_new" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7e0c25d3, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x4d3d688, "snd_ctl_add" },
	{ 0x8774fc51, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "3B8A8D841D62048BC909BB7");
