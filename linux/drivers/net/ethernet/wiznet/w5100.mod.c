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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcbfc45e3, "netdev_info" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x349cba85, "strchr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf7c60c25, "napi_disable" },
	{ 0x6b674b7c, "napi_schedule_prep" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0xa48dda3a, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x859fd3fa, "__netdev_alloc_skb" },
	{ 0x3c705061, "netif_rx_ni" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x70aff1f1, "free_netdev" },
	{ 0x71a0a1c, "register_netdev" },
	{ 0xad5239a4, "netif_receive_skb" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc64803ce, "platform_get_resource" },
	{ 0x1c132024, "request_any_context_irq" },
	{ 0x2fd40cda, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6c23f444, "__napi_schedule" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x65f1710b, "napi_complete_done" },
	{ 0x8186e092, "eth_type_trans" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xe032ac90, "eth_validate_addr" },
	{ 0xf19a7f62, "gpiod_to_irq" },
	{ 0x5b8694cb, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xbaa9a2c9, "platform_get_irq" },
	{ 0x8f78678f, "consume_skb" },
	{ 0xca36db50, "gpiod_get_raw_value" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9214b99, "skb_put" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb952953d, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0E8AFDCCC975F30AD5EF555");
