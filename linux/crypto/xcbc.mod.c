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
	{ 0xcffae43b, "crypto_unregister_template" },
	{ 0xdbe6cf20, "crypto_register_template" },
	{ 0x8eafff9a, "shash_register_instance" },
	{ 0xcef8fd2e, "shash_free_instance" },
	{ 0xaad9a877, "crypto_init_spawn" },
	{ 0xa34137e1, "crypto_alloc_instance2" },
	{ 0x9c385e63, "crypto_mod_put" },
	{ 0x59bf63a0, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x66bd198, "crypto_spawn_tfm" },
	{ 0x33aba3a4, "crypto_destroy_tfm" },
	{ 0x9d669763, "memcpy" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x5f754e5a, "memset" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6FDD71D44E03347E2033D86");
