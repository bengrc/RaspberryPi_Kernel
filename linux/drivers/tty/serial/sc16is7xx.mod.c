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
	{ 0xddb69640, "uart_unregister_driver" },
	{ 0xe51c533e, "i2c_del_driver" },
	{ 0xb75d9f9f, "__spi_register_driver" },
	{ 0xef5c9480, "i2c_register_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe5d468a2, "uart_register_driver" },
	{ 0xd2a64942, "spi_get_device_id" },
	{ 0xf686693, "__devm_regmap_init_spi" },
	{ 0x13ddb114, "spi_setup" },
	{ 0x6a36d62c, "__devm_regmap_init_i2c" },
	{ 0x47820ec9, "of_match_device" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xc9972cfd, "uart_add_one_port" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x834f3b, "gpiochip_add_data_with_key" },
	{ 0x53b352ba, "sched_setscheduler" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe083a353, "__kthread_init_worker" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0x37cf4c9a, "do_SAK" },
	{ 0x74643ce6, "tty_flip_buffer_push" },
	{ 0xa89f1258, "uart_insert_char" },
	{ 0x2f4f377e, "regmap_raw_read" },
	{ 0x1a2fc39c, "gpiochip_get_data" },
	{ 0x75098689, "uart_update_timeout" },
	{ 0x5a25bd8a, "uart_get_baud_rate" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xa0503f7f, "uart_write_wakeup" },
	{ 0x3ba1cdc8, "regmap_raw_write" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95915fbf, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xa1633992, "_dev_err" },
	{ 0xad1b09b3, "kthread_queue_work" },
	{ 0x87388ff7, "regcache_cache_bypass" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf138a9be, "regmap_write" },
	{ 0x562e30b6, "gpiochip_remove" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x54111370, "kthread_stop" },
	{ 0xaaec16cf, "kthread_flush_worker" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb849d3c6, "uart_remove_one_port" },
	{ 0x31e2178e, "regmap_update_bits_base" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "93ECB266C23706F866C2C14");
