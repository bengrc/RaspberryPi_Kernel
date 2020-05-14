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
	{ 0xf99f90b9, "mmc_gpio_get_cd" },
	{ 0xfffc4c15, "mmc_gpio_get_ro" },
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0x3b6b08ba, "mmc_gpio_request_ro" },
	{ 0x8433f1d5, "mmc_gpiod_request_cd_irq" },
	{ 0x307abecb, "mmc_gpio_request_cd" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xcfa129cc, "mmc_add_host" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x61437e52, "mmc_spi_get_pdata" },
	{ 0x9fa1801f, "mmc_alloc_host" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xabd13a7c, "mmc_request_done" },
	{ 0x6c902bec, "spi_bus_unlock" },
	{ 0x8d2bcc79, "flush_kernel_dcache_page" },
	{ 0xa2048e95, "crc_itu_t" },
	{ 0xa13a9f82, "kunmap" },
	{ 0xc1513e54, "kmap" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xf0dac0d2, "spi_bus_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb81960ca, "snprintf" },
	{ 0xba95c5c0, "crc7_be" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xa1633992, "_dev_err" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13ddb114, "spi_setup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1000e51, "schedule" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8e68da3, "spi_sync_locked" },
	{ 0x7efffd61, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6ec0ebba, "mmc_spi_put_pdata" },
	{ 0xa8c1ef7f, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0x16c110e3, "mmc_remove_host" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=of_mmc_spi,crc7";

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");

MODULE_INFO(srcversion, "AFF642EFFF64F6384FF1B34");
