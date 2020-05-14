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
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0x9ee5e40a, "__ktime_divns" },
	{ 0xc73d991e, "snd_timer_global_new" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a936021, "snd_timer_interrupt" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0xdfb1cd2a, "snd_timer_global_register" },
	{ 0x7be579b, "hrtimer_try_to_cancel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x16292726, "snd_timer_global_free" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-timer";


MODULE_INFO(srcversion, "3CF02A8E7E60878E1559DD8");
