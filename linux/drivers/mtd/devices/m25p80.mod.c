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
	{ 0xec118243, "spi_mem_driver_unregister" },
	{ 0x1e8aee28, "spi_mem_driver_register_with_owner" },
	{ 0x617a224c, "of_property_read_string" },
	{ 0x9da970a9, "spi_mem_get_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x80cfdf93, "mtd_device_parse_register" },
	{ 0xedfc07db, "spi_nor_scan" },
	{ 0xcafbd334, "devm_kmalloc" },
	{ 0xc7e324af, "spi_mem_adjust_op_size" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa1633992, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x99e3d5d9, "spi_mem_exec_op" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5cc22ad5, "mtd_device_unregister" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x6af33faf, "spi_nor_restore" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd,spi-nor";

MODULE_ALIAS("of:N*T*Cjedec,spi-nor");
MODULE_ALIAS("of:N*T*Cjedec,spi-norC*");
MODULE_ALIAS("spi:spi-nor");
MODULE_ALIAS("spi:s25sl064a");
MODULE_ALIAS("spi:w25x16");
MODULE_ALIAS("spi:m25p10");
MODULE_ALIAS("spi:m25px64");
MODULE_ALIAS("spi:at25df321a");
MODULE_ALIAS("spi:at25df641");
MODULE_ALIAS("spi:at26df081a");
MODULE_ALIAS("spi:mx25l4005a");
MODULE_ALIAS("spi:mx25l1606e");
MODULE_ALIAS("spi:mx25l6405d");
MODULE_ALIAS("spi:mx25l12805d");
MODULE_ALIAS("spi:mx25l25635e");
MODULE_ALIAS("spi:mx66l51235l");
MODULE_ALIAS("spi:n25q064");
MODULE_ALIAS("spi:n25q128a11");
MODULE_ALIAS("spi:n25q128a13");
MODULE_ALIAS("spi:n25q512a");
MODULE_ALIAS("spi:s25fl256s1");
MODULE_ALIAS("spi:s25fl512s");
MODULE_ALIAS("spi:s25sl12801");
MODULE_ALIAS("spi:s25fl008k");
MODULE_ALIAS("spi:s25fl064k");
MODULE_ALIAS("spi:sst25vf040b");
MODULE_ALIAS("spi:sst25vf016b");
MODULE_ALIAS("spi:sst25vf032b");
MODULE_ALIAS("spi:sst25wf040");
MODULE_ALIAS("spi:m25p40");
MODULE_ALIAS("spi:m25p80");
MODULE_ALIAS("spi:m25p16");
MODULE_ALIAS("spi:m25p32");
MODULE_ALIAS("spi:m25p64");
MODULE_ALIAS("spi:m25p128");
MODULE_ALIAS("spi:w25x80");
MODULE_ALIAS("spi:w25x32");
MODULE_ALIAS("spi:w25q32");
MODULE_ALIAS("spi:w25q32dw");
MODULE_ALIAS("spi:w25q80bl");
MODULE_ALIAS("spi:w25q128");
MODULE_ALIAS("spi:w25q256");
MODULE_ALIAS("spi:m25p05-nonjedec");
MODULE_ALIAS("spi:m25p10-nonjedec");
MODULE_ALIAS("spi:m25p20-nonjedec");
MODULE_ALIAS("spi:m25p40-nonjedec");
MODULE_ALIAS("spi:m25p80-nonjedec");
MODULE_ALIAS("spi:m25p16-nonjedec");
MODULE_ALIAS("spi:m25p32-nonjedec");
MODULE_ALIAS("spi:m25p64-nonjedec");
MODULE_ALIAS("spi:m25p128-nonjedec");
MODULE_ALIAS("spi:mr25h128");
MODULE_ALIAS("spi:mr25h256");
MODULE_ALIAS("spi:mr25h10");
MODULE_ALIAS("spi:mr25h40");

MODULE_INFO(srcversion, "DC7358F2A4839B4EAF2DE1E");
