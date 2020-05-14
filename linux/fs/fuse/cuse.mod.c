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
	{ 0xe8c3cc12, "fuse_file_poll" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x83ef67e5, "misc_deregister" },
	{ 0x5868fd99, "class_destroy" },
	{ 0x42e7859a, "misc_register" },
	{ 0x9c921cae, "__class_create" },
	{ 0x9d669763, "memcpy" },
	{ 0xcada4451, "fuse_dev_operations" },
	{ 0x3a216dc3, "fuse_dev_free" },
	{ 0x85d58f48, "fuse_put_request" },
	{ 0x85d909b, "fuse_request_send_background" },
	{ 0x215ed5f6, "__alloc_pages_nodemask" },
	{ 0x7d5c3665, "fuse_get_req_for_background" },
	{ 0x26b587c8, "fuse_dev_alloc" },
	{ 0x83f6994e, "fuse_conn_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4c9042d2, "kobject_uevent" },
	{ 0xab9fff11, "cdev_add" },
	{ 0xadbeeaf6, "cdev_alloc" },
	{ 0x6b685034, "device_add" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x142a905e, "put_device" },
	{ 0x6a243b2e, "dev_set_name" },
	{ 0x67258e26, "device_initialize" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x97255bdf, "strlen" },
	{ 0xc9a16c73, "page_address" },
	{ 0x8ae9ba1c, "__free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaf60db73, "fuse_direct_io" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1e202d0c, "fuse_do_ioctl" },
	{ 0xb7cae24f, "fuse_do_open" },
	{ 0x90caabc2, "fuse_conn_get" },
	{ 0x7c1d1751, "fuse_sync_release" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0x96b4e2f5, "fuse_dev_release" },
	{ 0x5be468f, "fuse_conn_put" },
	{ 0x489c6f18, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x2f6ab595, "device_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91715312, "sprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5df1cd48, "fuse_abort_conn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";


MODULE_INFO(srcversion, "CDFD0E11EC72A34EB075E42");
