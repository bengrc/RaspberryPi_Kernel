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
	{ 0x43b0b18, "kill_litter_super" },
	{ 0x929e7a7e, "noop_llseek" },
	{ 0x9ab89b76, "default_llseek" },
	{ 0xfdfe54ca, "simple_statfs" },
	{ 0x8a7d02bc, "unregister_filesystem" },
	{ 0x4eae23f1, "unregister_binfmt" },
	{ 0x482d4491, "__register_binfmt" },
	{ 0x8c3c7a6c, "register_filesystem" },
	{ 0xc8188127, "iput" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe4056ce9, "d_instantiate" },
	{ 0xf1ba6809, "simple_pin_fs" },
	{ 0xc6c85edc, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x414ed825, "new_inode" },
	{ 0x3976b12c, "lookup_one_len" },
	{ 0xc8339e24, "string_unescape" },
	{ 0x373db350, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x94425488, "up_write" },
	{ 0xbc22018b, "down_write" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x97255bdf, "strlen" },
	{ 0xdc1a78c, "bin2hex" },
	{ 0x91715312, "sprintf" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x9793aa81, "simple_release_fs" },
	{ 0xe7cbe330, "d_drop" },
	{ 0xc39740e3, "drop_nlink" },
	{ 0x9425caca, "_raw_write_lock" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x50e02795, "clear_inode" },
	{ 0x9eb6be80, "filp_close" },
	{ 0x73333fa8, "simple_fill_super" },
	{ 0x12369fda, "mount_single" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x831fd98e, "prepare_binprm" },
	{ 0x173ee09d, "dentry_open" },
	{ 0xcadbcca9, "would_dump" },
	{ 0x4647c525, "fd_install" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x5b665c0, "__close_fd" },
	{ 0x4da19baf, "dput" },
	{ 0x8b752285, "search_binary_handler" },
	{ 0x5de6a70c, "kernel_read" },
	{ 0x5f754e5a, "memset" },
	{ 0xd0a82e70, "open_exec" },
	{ 0x2ced5ae7, "bprm_change_interp" },
	{ 0xac190caa, "copy_strings_kernel" },
	{ 0xce6c0a2c, "fput" },
	{ 0xe07ac69a, "remove_arg_zero" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "91658AD4C4E873A9B4F7CBC");
