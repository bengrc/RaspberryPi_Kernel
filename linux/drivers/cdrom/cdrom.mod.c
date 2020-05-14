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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x48cb057c, "register_sysctl_table" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0x15cd3e25, "blk_put_request" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7d54146, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4d053b4e, "scsi_cmd_blk_ioctl" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x83dc37a4, "blk_rq_unmap_user" },
	{ 0x2966e53a, "invalidate_bdev" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe39784e5, "blk_rq_map_user" },
	{ 0x8bee75d7, "proc_dostring" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3d52fb7f, "unregister_sysctl_table" },
	{ 0x5fe9507e, "blk_execute_rq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x9a88cc76, "blk_get_request" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4E9E3D94D6E3FFCE4E0FB3C");
