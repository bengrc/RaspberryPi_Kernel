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
	{ 0xcbfc45e3, "netdev_info" },
	{ 0xe9760b18, "usbnet_resume" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfa7576a6, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9e90e872, "usbnet_link_change" },
	{ 0xb69b5ca7, "usbnet_disconnect" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5f754e5a, "memset" },
	{ 0x634acce4, "usb_deregister" },
	{ 0x71c90087, "memcmp" },
	{ 0xfa6625c1, "usbnet_get_endpoints" },
	{ 0x9b884788, "usb_control_msg" },
	{ 0x51e26df8, "usb_driver_claim_interface" },
	{ 0xdbbd3948, "usbnet_suspend" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a69d4b8, "cdc_parse_cdc_header" },
	{ 0xf817accb, "usbnet_get_ethernet_addr" },
	{ 0x25a5f9ee, "usb_driver_release_interface" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x56287daf, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe91afbe9, "usb_ifnum_to_if" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2de48532, "usbnet_manage_power" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v046DpC11Fd*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v1410pB001d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9010d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8195d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8196d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp819Bd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9011d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v03F0p421Dd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v16D5p650Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v12D1p14ACd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1003d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1015d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1173d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1177d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1181d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1BC7p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp81BAd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v12D1p15C1d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1546p1143d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1546p1104d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp0061d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp0055d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc06ipFFin*");

MODULE_INFO(srcversion, "F61465F6623AB8E204DCE82");
