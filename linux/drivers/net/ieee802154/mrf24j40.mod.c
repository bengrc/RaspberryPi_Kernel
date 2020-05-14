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
	{ 0xbe46cfbe, "driver_unregister" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0x336119fe, "regmap_write_async" },
	{ 0xddab0d57, "ieee802154_xmit_complete" },
	{ 0x50dd099, "ieee802154_rx_irqsafe" },
	{ 0x9214b99, "skb_put" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x416df607, "ieee802154_register_hw" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2b85b7ae, "irq_get_irq_data" },
	{ 0xd2a64942, "spi_get_device_id" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x36489dc, "__devm_regmap_init" },
	{ 0xf686693, "__devm_regmap_init_spi" },
	{ 0x8b0f0a90, "ieee802154_alloc_hw" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa1633992, "_dev_err" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xde1ad932, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd0106a1b, "spi_write_then_read" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xcb4e6732, "spi_async" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x1e090a35, "ieee802154_free_hw" },
	{ 0xab5c517, "ieee802154_unregister_hw" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154";

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");

MODULE_INFO(srcversion, "6A4E10941553DEAF477A1C2");
