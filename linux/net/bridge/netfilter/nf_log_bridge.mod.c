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
	{ 0x7d34840b, "nf_log_unregister" },
	{ 0xa6730fa4, "unregister_pernet_subsys" },
	{ 0x18d7d6fa, "nf_log_register" },
	{ 0xadef8a4, "register_pernet_subsys" },
	{ 0x39e61495, "nf_logger_request_module" },
	{ 0x2017b523, "nf_log_set" },
	{ 0xffe09c4d, "nf_log_unset" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x52dba6f6, "nf_log_l2packet" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_log_common";


MODULE_INFO(srcversion, "EA9F03792EBA9CCA3DD0E3B");
