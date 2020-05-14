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
	{ 0x2d3385d3, "system_wq" },
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xf3ce1ac7, "trace_event_buffer_reserve" },
	{ 0x4ba7a903, "kthread_create_on_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8c2f40f0, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0xcefdd856, "bpf_trace_run1" },
	{ 0x8ccb629e, "dma_fence_init" },
	{ 0x54111370, "kthread_stop" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x569164ba, "trace_event_reg" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x48c29853, "dma_fence_signal" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x3210151f, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5369a53c, "kthread_unpark" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0x72f04e74, "dma_fence_remove_callback" },
	{ 0x894ef2d7, "trace_event_ignore_this_pid" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x66dc6158, "trace_event_buffer_commit" },
	{ 0xfd597c33, "wake_up_process" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xe0badefa, "kthread_park" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x53b352ba, "sched_setscheduler" },
	{ 0x45274503, "dma_fence_add_callback" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe05dc78c, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa5769beb, "bpf_trace_run2" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x540ca76b, "trace_event_raw_init" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5559c507, "trace_raw_output_prep" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";


MODULE_INFO(srcversion, "1006817B48AEDBF800EE3B4");
