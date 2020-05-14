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
	{ 0x6eb2b1bf, "vb2_core_streamoff" },
	{ 0xb7700415, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x252ea5ee, "vb2_core_dqbuf" },
	{ 0x13ac4b22, "vb2_mmap" },
	{ 0x2e36f7d6, "vb2_core_qbuf" },
	{ 0x54788bfc, "vb2_core_querybuf" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe87ec392, "vb2_core_streamon" },
	{ 0x77d92779, "vb2_core_poll" },
	{ 0x7cb86de6, "vb2_read" },
	{ 0xc7da9e3d, "vb2_core_prepare_buf" },
	{ 0x5f754e5a, "memset" },
	{ 0xdc165e81, "mutex_lock_interruptible" },
	{ 0x7c32d0f0, "printk" },
	{ 0x982c86bb, "v4l2_event_pending" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd9849629, "v4l2_fh_release" },
	{ 0x41e2a493, "vb2_core_queue_release" },
	{ 0xdc3c2a7d, "vb2_write" },
	{ 0x9c587d0, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x51849f68, "vb2_core_create_bufs" },
	{ 0x73504200, "vb2_core_expbuf" },
	{ 0x346ee82b, "vb2_core_reqbufs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86b5240, "vb2_verify_memory_type" },
	{ 0xde22894a, "vb2_core_queue_init" },
	{ 0x229e19d5, "vb2_buffer_in_use" },
	{ 0x2f548802, "ns_to_timeval" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-common,videodev";


MODULE_INFO(srcversion, "5E8AB78C40D0E99C90458E8");
