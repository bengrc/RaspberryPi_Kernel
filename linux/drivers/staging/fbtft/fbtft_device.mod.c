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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x80c8b05d, "module_layout" },
	{ 0x43745509, "param_ops_charp" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x3e872658, "param_array_ops" },
	{ 0x931bbbfe, "param_ops_ulong" },
	{ 0x73a7a766, "param_ops_uint" },
	{ 0xdded4f8, "fbtft_write_gpio16_wr_latched" },
	{ 0xc411e5a5, "param_ops_short" },
	{ 0xd12088ea, "platform_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6d052ea, "platform_device_register" },
	{ 0xa1633992, "_dev_err" },
	{ 0x142a905e, "put_device" },
	{ 0xa4fb96ba, "spi_new_device" },
	{ 0xb0ff659, "device_del" },
	{ 0xf39fbd44, "bus_find_device_by_name" },
	{ 0xb81960ca, "snprintf" },
	{ 0xebee0f23, "spi_busnum_to_master" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x84b183ae, "strncmp" },
	{ 0xab3ec473, "platform_bus_type" },
	{ 0x10bb3cbd, "bus_for_each_dev" },
	{ 0x4113830f, "spi_bus_type" },
	{ 0x328a05f1, "strncpy" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0x349cba85, "strchr" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x1acc5201, "fbtft_dbg_hex" },
	{ 0xc67f27a7, "gpiod_set_raw_value" },
	{ 0xa4c4184e, "gpio_to_desc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";


MODULE_INFO(srcversion, "206D2E34006ED808D098A10");
