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
	{ 0x416df607, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8b0f0a90, "ieee802154_alloc_hw" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc67f27a7, "gpiod_set_raw_value" },
	{ 0x8090c15c, "devm_gpio_request_one" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x1caf4c2b, "wait_for_completion_interruptible" },
	{ 0xa1633992, "_dev_err" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc79bec4b, "of_find_property" },
	{ 0xc68c02ef, "of_get_named_gpio_flags" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x50dd099, "ieee802154_rx_irqsafe" },
	{ 0x9214b99, "skb_put" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0xca36db50, "gpiod_get_raw_value" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xde1ad932, "spi_sync" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe6c12171, "complete" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1e090a35, "ieee802154_free_hw" },
	{ 0xab5c517, "ieee802154_unregister_hw" },
	{ 0x92b57248, "flush_work" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154,crc-ccitt";

MODULE_ALIAS("of:N*T*Cti,cc2520");
MODULE_ALIAS("of:N*T*Cti,cc2520C*");
MODULE_ALIAS("spi:cc2520");

MODULE_INFO(srcversion, "C3DE8A2C581149299BA1BAA");
