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
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca7492c9, "__pm_runtime_idle" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xa013d8e5, "lbs_resume" },
	{ 0xb301ec9d, "sdio_writesb" },
	{ 0xb4401a7b, "sdio_enable_func" },
	{ 0x62825602, "sdio_claim_irq" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x4ab9d294, "lbs_stop_card" },
	{ 0x983bd163, "__pm_runtime_resume" },
	{ 0x19832cda, "netdev_alert" },
	{ 0x162933c1, "__lbs_cmd" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa1a97134, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x4bffc7e0, "lbs_start_card" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x54873e19, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd9325cfb, "lbs_get_firmware_async" },
	{ 0x8e073fdc, "lbs_cmd_copyback" },
	{ 0x40db976e, "lbs_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xa1633992, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x287c5eab, "sdio_readsb" },
	{ 0xf27b0a69, "sdio_unregister_driver" },
	{ 0x4a3e2c6f, "lbs_remove_card" },
	{ 0x189a0bdb, "sdio_f0_writeb" },
	{ 0x701511b9, "sdio_set_host_pm_flags" },
	{ 0x6d8b8829, "lbs_process_rxed_packet" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x116beeb9, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2343e412, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x4ef233e7, "sdio_align_size" },
	{ 0xd4be3a39, "lbs_add_card" },
	{ 0xf164d149, "sdio_f0_readb" },
	{ 0xcfa129cc, "mmc_add_host" },
	{ 0x1b4209ab, "netdev_err" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x16c110e3, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x322634b3, "sdio_register_driver" },
	{ 0x31c3c7e3, "sdio_claim_host" },
	{ 0x9214b99, "skb_put" },
	{ 0xde3edb39, "sdio_set_block_size" },
	{ 0x185fd8a6, "sdio_disable_func" },
	{ 0x54699fd1, "sdio_release_host" },
	{ 0x85762025, "lbs_notify_command_response" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "895013DA65E11C9E6CC1E17");
