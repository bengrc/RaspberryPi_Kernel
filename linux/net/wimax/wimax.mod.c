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
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xe6646669, "genl_register_family" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xc494e037, "debugfs_create_u8" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xe43936f9, "genl_unregister_family" },
	{ 0xb4de343d, "netif_carrier_on" },
	{ 0xa511de35, "netif_carrier_off" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8ae137ee, "param_ops_string" },
	{ 0x21353b4e, "netif_tx_wake_queue" },
	{ 0x6bf639e3, "rfkill_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xcd279169, "nla_find" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x68183b3b, "nla_put" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x341c6c58, "init_net" },
	{ 0xa1633992, "_dev_err" },
	{ 0x51ef33b8, "kstrndup" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x43771e5b, "netlink_broadcast" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x391d538b, "dev_driver_string" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x4ecc241c, "genlmsg_put" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x83eb21c, "rfkill_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";


MODULE_INFO(srcversion, "F31ABC608A1D0B3F4B02375");
