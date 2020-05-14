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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x80c8b05d, "module_layout" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa7fc046a, "vchi_msg_dequeue" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xda468542, "vchi_bulk_queue_transmit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x24982a65, "snd_pcm_hw_constraint_step" },
	{ 0x54955f5e, "of_parse_phandle" },
	{ 0x88045b28, "snd_pcm_period_elapsed" },
	{ 0xee0fb56e, "devres_find" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0x431f3c4b, "vchi_service_open" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd1090861, "snd_pcm_stream_lock" },
	{ 0x7e0b7cdd, "devres_alloc_node" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x4390690, "vchi_service_use" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x49a7510f, "vchi_disconnect" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x8bcaf4a7, "snd_pcm_set_ops" },
	{ 0xb45f9c3e, "vchi_connect" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe9d78811, "snd_pcm_lib_free_pages" },
	{ 0xc1d0155d, "snd_pcm_lib_ioctl" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0xa1633992, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2b05479f, "snd_pcm_lib_malloc_pages" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0x194d4716, "snd_card_new" },
	{ 0x7d3064b1, "devm_add_action" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c5db821, "snd_pcm_stream_unlock" },
	{ 0xd34d441c, "snd_ctl_new1" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0x1bb9fb6a, "devres_add" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x6d0bad1f, "rpi_firmware_get" },
	{ 0x18bb8ba7, "vchi_get_peer_version" },
	{ 0x37a0cba, "kfree" },
	{ 0xda94c15b, "snd_pcm_hw_constraint_minmax" },
	{ 0x1acbfe0c, "snd_pcm_stop" },
	{ 0x788f810c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x20de800c, "snd_card_free" },
	{ 0xf2c69986, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0x972a0334, "snd_pcm_new" },
	{ 0x4d3d688, "snd_ctl_add" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x2142bf87, "of_property_read_variable_u32_array" },
	{ 0x9cf2a557, "of_node_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audio");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audioC*");

MODULE_INFO(srcversion, "7AA1377144CA37D54C9971C");
