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
	{ 0x7d54146, "param_ops_bool" },
	{ 0x94cd7ed1, "rt2x00usb_resume" },
	{ 0x5994bff4, "rt2x00usb_suspend" },
	{ 0xc0ed2a44, "rt2x00usb_disconnect" },
	{ 0x88b41ea9, "rt2x00mac_tx_frames_pending" },
	{ 0xc9be061c, "rt2x00mac_get_ringparam" },
	{ 0xdcdbe92, "rt2x00mac_get_antenna" },
	{ 0x4bf78c81, "rt2x00mac_set_antenna" },
	{ 0xf5b5f794, "rt2x00mac_flush" },
	{ 0x587610ad, "rt2x00mac_rfkill_poll" },
	{ 0x2da2276b, "rt2x00mac_conf_tx" },
	{ 0x6fb1f915, "rt2x00mac_get_stats" },
	{ 0xa1354f87, "rt2x00mac_sw_scan_complete" },
	{ 0xda26d458, "rt2x00mac_sw_scan_start" },
	{ 0xc3ee77c9, "rt2x00mac_set_key" },
	{ 0x9a0208cc, "rt2x00mac_set_tim" },
	{ 0xba88eca8, "rt2x00mac_configure_filter" },
	{ 0x28cab222, "rt2x00mac_bss_info_changed" },
	{ 0xbbf7ecdb, "rt2x00mac_config" },
	{ 0xabbb741f, "rt2x00mac_remove_interface" },
	{ 0xfce9e2ea, "rt2x00mac_add_interface" },
	{ 0x30a55bce, "rt2x00mac_stop" },
	{ 0x721bf209, "rt2x00mac_start" },
	{ 0xa2c6a687, "rt2x00mac_tx" },
	{ 0x9d1523c5, "rt2x00usb_flush_queue" },
	{ 0x8aeb1cdf, "rt2x00usb_kick_queue" },
	{ 0x351ab354, "rt2x00usb_watchdog" },
	{ 0xc0f30fa5, "rt2x00usb_clear_entry" },
	{ 0x53c393f3, "rt2x00usb_uninitialize" },
	{ 0xf7d3beb4, "rt2x00usb_initialize" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x28b34643, "rt2x00lib_set_mac_address" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a8b3c69, "rt2x00usb_vendor_request" },
	{ 0x6fd290f9, "rt2x00usb_disable_radio" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa1633992, "_dev_err" },
	{ 0x530404f3, "rt2x00usb_vendor_req_buff_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xa9217b9b, "usb_submit_urb" },
	{ 0x5f754e5a, "memset" },
	{ 0x96ddfc78, "skb_push" },
	{ 0x26341d8c, "skb_trim" },
	{ 0x9d669763, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x620b1733, "rt2x00usb_vendor_request_buff" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f8b4450, "rt2x00usb_probe" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E9CB96CDF70A6DFF03D504B");
