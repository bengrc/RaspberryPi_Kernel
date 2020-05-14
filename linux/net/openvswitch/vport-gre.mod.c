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
	{ 0x91f00c34, "dev_queue_xmit" },
	{ 0x5307b2c1, "ovs_netdev_tunnel_destroy" },
	{ 0xfdf2f0ed, "ovs_vport_ops_unregister" },
	{ 0x9dc226ea, "__ovs_vport_ops_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb2a3c2b2, "ovs_vport_free" },
	{ 0xb20c4ae, "rtnl_delete_link" },
	{ 0xff977f0a, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf6ad8adc, "dev_change_flags" },
	{ 0x9250e543, "gretap_fb_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1dbbbd90, "ovs_vport_alloc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,ip_gre";


MODULE_INFO(srcversion, "DD4990A7C49E09E8A26EA93");
