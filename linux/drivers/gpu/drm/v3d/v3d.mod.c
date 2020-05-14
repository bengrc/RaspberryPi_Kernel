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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe4dd71dc, "drm_gem_prime_export" },
	{ 0xdaeaa570, "drm_release" },
	{ 0xbd420cac, "drm_prime_gem_destroy" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x79fc61ee, "drm_dev_register" },
	{ 0x75214c3c, "dma_release_from_dev_coherent" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdaa2833c, "drm_gem_put_pages" },
	{ 0x5d5000cb, "mem_map" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9d5cd559, "reservation_ww_class" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x95bf898d, "reservation_object_wait_timeout_rcu" },
	{ 0x1027251, "__pm_runtime_suspend" },
	{ 0xb9c97c5e, "arm_dma_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x473995d7, "drm_gem_mmap_obj" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc4ed5445, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xa48dda3a, "devm_ioremap_resource" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xf3ce1ac7, "trace_event_buffer_reserve" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x760d6ec2, "bpf_trace_run3" },
	{ 0xd8f3afe9, "drm_sched_hw_job_reset" },
	{ 0xf655e30c, "__devm_reset_control_get" },
	{ 0x9ba654b2, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x12d8a2c7, "dma_alloc_from_dev_coherent" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0xea6b723, "drm_dev_put" },
	{ 0x8c2f40f0, "trace_define_field" },
	{ 0x7b982195, "drm_mm_init" },
	{ 0x5f754e5a, "memset" },
	{ 0xcefdd856, "bpf_trace_run1" },
	{ 0xb35fb5e1, "drm_dev_unregister" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x2aad983f, "drm_prime_pages_to_sg" },
	{ 0x8ccb629e, "dma_fence_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x58fa0bc, "drm_sched_job_recovery" },
	{ 0xde3f2da0, "pm_runtime_get_if_in_use" },
	{ 0xfa92797b, "drm_gem_handle_create" },
	{ 0xc215db40, "drm_gem_object_put_unlocked" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5b3dd903, "drm_sched_fini" },
	{ 0x569164ba, "trace_event_reg" },
	{ 0x2074d484, "drm_sched_init" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf3a6993e, "drm_gem_object_release" },
	{ 0xb3551593, "bpf_trace_run5" },
	{ 0xc5d34783, "drm_read" },
	{ 0x48c29853, "dma_fence_signal" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xa1633992, "_dev_err" },
	{ 0xcdcbcdce, "drm_debugfs_create_files" },
	{ 0x3210151f, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xcb4d16dc, "drm_gem_vm_open" },
	{ 0x9ecd9332, "drm_gem_vm_close" },
	{ 0xe2ca3ed3, "drm_sched_entity_destroy" },
	{ 0x5369a53c, "kthread_unpark" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0x5649222d, "drm_gem_prime_fd_to_handle" },
	{ 0x18240536, "drm_ioctl" },
	{ 0x3cdc9abf, "drm_gem_prime_import" },
	{ 0x4eaed7e2, "drm_gem_mmap" },
	{ 0x29478085, "drm_syncobj_replace_fence" },
	{ 0x12a38747, "usleep_range" },
	{ 0x894ef2d7, "trace_event_ignore_this_pid" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x66a0b74, "drm_dev_init" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdcd20624, "drm_gem_object_lookup" },
	{ 0x66dc6158, "trace_event_buffer_commit" },
	{ 0x224197bd, "devm_clk_get" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x3c57c143, "reservation_object_add_excl_fence" },
	{ 0xe0badefa, "kthread_park" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x1a75568c, "drm_gem_prime_handle_to_fd" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x75da14f7, "platform_get_resource_byname" },
	{ 0xb06c7437, "drm_sched_job_init" },
	{ 0xe05dc78c, "event_triggers_call" },
	{ 0xa7dc2a29, "drm_gem_object_init" },
	{ 0xa5769beb, "bpf_trace_run2" },
	{ 0xadd34934, "drm_gem_create_mmap_offset" },
	{ 0x93f33930, "vm_insert_mixed" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x540ca76b, "trace_event_raw_init" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0xa894ac86, "ww_mutex_unlock" },
	{ 0x6078326d, "drm_mm_insert_node_in_range" },
	{ 0xc307a10c, "drm_mm_takedown" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x13817285, "sg_free_table" },
	{ 0x1e5284e4, "vm_get_page_prot" },
	{ 0xa7ca47c, "drm_prime_sg_to_page_addr_arrays" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5559c507, "trace_raw_output_prep" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x9abf3d18, "drm_syncobj_find_fence" },
	{ 0xbaa9a2c9, "platform_get_irq" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x30e75299, "reservation_object_get_fences_rcu" },
	{ 0x8774fc51, "platform_driver_unregister" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x67af55ed, "reservation_object_reserve_shared" },
	{ 0x2c287154, "drm_mm_remove_node" },
	{ 0xcfdcbd60, "drm_sched_entity_init" },
	{ 0x4808182c, "drm_gem_get_pages" },
	{ 0xaf38e081, "idr_find" },
	{ 0x6d2318b, "devm_request_threaded_irq" },
	{ 0xf828869f, "drm_syncobj_find" },
	{ 0x53e578b1, "ww_mutex_lock_interruptible" },
	{ 0xb3b49dbb, "drm_poll" },
	{ 0xbce43023, "drm_sched_entity_push_job" },
	{ 0xb859f38b, "krealloc" },
	{ 0xd8d6e853, "drm_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,gpu-sched";

MODULE_ALIAS("of:N*T*Cbrcm,7268-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,7268-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,7278-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,7278-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,2711-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,2711-v3dC*");

MODULE_INFO(srcversion, "EE22C9329BB9129E9BDD11D");
