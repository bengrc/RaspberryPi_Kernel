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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xcd4c97a1, "up_read" },
	{ 0x56efbc6b, "snd_midi_event_reset_decode" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xd918d01e, "snd_device_free" },
	{ 0x17fcf66b, "snd_midi_event_encode_byte" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb79a18ba, "snd_seq_create_kernel_client" },
	{ 0xb179808f, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x1724fb56, "snd_midi_event_decode" },
	{ 0xc43f8d7, "snd_rawmidi_new" },
	{ 0xafa10a99, "down_read" },
	{ 0xdaf3383a, "snd_midi_event_new" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0xd040e01a, "module_put" },
	{ 0x4d5f7f98, "snd_midi_event_free" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x9fcba56d, "snd_rawmidi_transmit" },
	{ 0xd41658a1, "__init_rwsem" },
	{ 0x760b4cc9, "snd_rawmidi_receive" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd,snd-rawmidi";


MODULE_INFO(srcversion, "8554E4CACDB3666C61473A2");
