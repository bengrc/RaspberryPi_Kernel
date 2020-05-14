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
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x416df607, "ieee802154_register_hw" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0x2b85b7ae, "irq_get_irq_data" },
	{ 0x50f61d60, "gpiod_set_raw_value_cansleep" },
	{ 0x8090c15c, "devm_gpio_request_one" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0xf686693, "__devm_regmap_init_spi" },
	{ 0x8b0f0a90, "ieee802154_alloc_hw" },
	{ 0xbdfaece4, "of_property_read_variable_u8_array" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcb4e6732, "spi_async" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0x5f754e5a, "memset" },
	{ 0xe6c12171, "complete" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd144748e, "ieee802154_wake_queue" },
	{ 0xddab0d57, "ieee802154_xmit_complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x50dd099, "ieee802154_rx_irqsafe" },
	{ 0x9d669763, "memcpy" },
	{ 0x9214b99, "skb_put" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x1e090a35, "ieee802154_free_hw" },
	{ 0xab5c517, "ieee802154_unregister_hw" },
	{ 0xc67f27a7, "gpiod_set_raw_value" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154";

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "9C6D0AC3995B6DA8E10138B");
