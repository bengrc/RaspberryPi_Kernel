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
	{ 0x85db92e9, "sdio_writeb" },
	{ 0xf38d4bb4, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc6211584, "mwifiex_cancel_hs" },
	{ 0xb301ec9d, "sdio_writesb" },
	{ 0xb4401a7b, "sdio_enable_func" },
	{ 0x62825602, "sdio_claim_irq" },
	{ 0x764be6bd, "mmc_hw_reset" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf8db237b, "mwifiex_disable_auto_ds" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x535fe4bb, "__dev_kfree_skb_any" },
	{ 0x603d0c09, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xe78cda33, "mwifiex_main_process" },
	{ 0x91715312, "sprintf" },
	{ 0xa103a7d, "mwifiex_prepare_fw_dump_info" },
	{ 0xa1a97134, "sdio_get_host_pm_caps" },
	{ 0x26341d8c, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc4e57270, "_mwifiex_dbg" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x7e2fdfd4, "mwifiex_add_card" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb1c0ec82, "of_match_node" },
	{ 0xd87a9021, "mwifiex_shutdown_sw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x46a43e61, "skb_pull" },
	{ 0xa1633992, "_dev_err" },
	{ 0x31bd9748, "mwifiex_alloc_dma_align_buf" },
	{ 0x287c5eab, "sdio_readsb" },
	{ 0xf27b0a69, "sdio_unregister_driver" },
	{ 0x701511b9, "sdio_set_host_pm_flags" },
	{ 0x13f0bc63, "mwifiex_dnld_fw" },
	{ 0xe2179b11, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x116beeb9, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf164d149, "sdio_f0_readb" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe14c4957, "mwifiex_reinit_sw" },
	{ 0xcc4c97a6, "mwifiex_handle_rx_packet" },
	{ 0xcd3a76e8, "mwifiex_deauthenticate_all" },
	{ 0xab643eec, "mwifiex_remove_card" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x816ce1e4, "mwifiex_enable_hs" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2544751f, "mwifiex_upload_device_dump" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x322634b3, "sdio_register_driver" },
	{ 0x31c3c7e3, "sdio_claim_host" },
	{ 0xbb46a9f2, "mwifiex_drv_info_dump" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x587526df, "mwifiex_init_shutdown_fw" },
	{ 0xde3edb39, "sdio_set_block_size" },
	{ 0x185fd8a6, "sdio_disable_func" },
	{ 0x54699fd1, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "B4A2D2FA2D412AF1209DA37");
