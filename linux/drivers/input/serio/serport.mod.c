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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xbc2910a0, "tty_register_ldisc" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc6cbbc89, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x21741692, "serio_unregister_port" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc1a03174, "__serio_register_port" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb1eae8c6, "tty_name" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa9424c3a, "serio_interrupt" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=serio";


MODULE_INFO(srcversion, "09619DB43FB72B40D121155");
