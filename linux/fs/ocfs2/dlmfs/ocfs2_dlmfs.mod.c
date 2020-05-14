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
	{ 0x773eaacc, "kmem_cache_destroy" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe08afdc6, "__mark_inode_dirty" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x4f2b1ea9, "simple_lookup" },
	{ 0x176e7f1a, "generic_delete_inode" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xfa2dd65a, "inc_nlink" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0x8888718f, "igrab" },
	{ 0x7111004c, "mount_nodev" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x43b0b18, "kill_litter_super" },
	{ 0x9ab89b76, "default_llseek" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x77e4b8b5, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8178b430, "setattr_copy" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0x1fbaa35f, "inode_init_once" },
	{ 0x1221c0e5, "simple_getattr" },
	{ 0x667b7de, "__mlog_printk" },
	{ 0x679fb002, "kmem_cache_alloc" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0xf4286b26, "simple_unlink" },
	{ 0x1634a84c, "simple_dir_operations" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x8cb6745e, "kmem_cache_create" },
	{ 0x8c3c7a6c, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xc8188127, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0xc6c85edc, "current_time" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0xf9147ce9, "d_make_root" },
	{ 0xfdfe54ca, "simple_statfs" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8a7d02bc, "unregister_filesystem" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xcfd3fc5, "ocfs2_cluster_connect_agnostic" },
	{ 0x414ed825, "new_inode" },
	{ 0x50e02795, "clear_inode" },
	{ 0xe4056ce9, "d_instantiate" },
	{ 0xf085fb57, "simple_rmdir" },
	{ 0x7f97f2f0, "setattr_prepare" },
	{ 0xf218cc1e, "inode_init_owner" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_stackglue,ocfs2_nodemanager";


MODULE_INFO(srcversion, "DADC9A082FBCC4DAA9C5312");
