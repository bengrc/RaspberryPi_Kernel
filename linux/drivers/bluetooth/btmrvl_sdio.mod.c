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
	{ 0xf27b0a69, "sdio_unregister_driver" },
	{ 0x322634b3, "sdio_register_driver" },
	{ 0xa1633992, "_dev_err" },
	{ 0x51c4f30d, "release_firmware" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x27d7b178, "request_firmware" },
	{ 0xde3edb39, "sdio_set_block_size" },
	{ 0x62825602, "sdio_claim_irq" },
	{ 0x2a776d74, "btmrvl_register_hdev" },
	{ 0x950f2183, "btmrvl_add_card" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x6eea09b9, "irq_of_parse_and_map" },
	{ 0xb1c0ec82, "of_match_node" },
	{ 0xb4401a7b, "sdio_enable_func" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x7d757368, "btmrvl_send_module_cfg_cmd" },
	{ 0x78feaefe, "btmrvl_remove_card" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb45fccf, "btmrvl_interrupt" },
	{ 0x37a0cba, "kfree" },
	{ 0xb301ec9d, "sdio_writesb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x56ca25c3, "btmrvl_check_evtpkt" },
	{ 0xfa4c6c9f, "hci_recv_frame" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x9ca79f8, "btmrvl_process_event" },
	{ 0x46a43e61, "skb_pull" },
	{ 0x9214b99, "skb_put" },
	{ 0x287c5eab, "sdio_readsb" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x185fd8a6, "sdio_disable_func" },
	{ 0x116beeb9, "sdio_release_irq" },
	{ 0x701511b9, "sdio_set_host_pm_flags" },
	{ 0xca1aeec0, "btmrvl_enable_hs" },
	{ 0xb70cf920, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xb2c6a2e1, "hci_resume_dev" },
	{ 0xa1a97134, "sdio_get_host_pm_caps" },
	{ 0xa4451529, "dev_coredumpv" },
	{ 0x9d669763, "memcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd7442057, "bt_info" },
	{ 0xf38d4bb4, "sdio_readb" },
	{ 0xf164d149, "sdio_f0_readb" },
	{ 0x91715312, "sprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47022514, "bt_err" },
	{ 0x54699fd1, "sdio_release_host" },
	{ 0x85db92e9, "sdio_writeb" },
	{ 0x31c3c7e3, "sdio_claim_host" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "B8A9893DDA8D5F9CA90E9CE");
