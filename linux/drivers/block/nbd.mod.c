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
	{ 0xb7700415, "param_ops_int" },
	{ 0xd07da2bc, "single_release" },
	{ 0x9943b1a3, "seq_read" },
	{ 0xfd92de59, "seq_lseek" },
	{ 0xe43936f9, "genl_unregister_family" },
	{ 0x20c7f5cc, "idr_destroy" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xe6646669, "genl_register_family" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x2860ef15, "blk_mq_request_started" },
	{ 0x5a84297c, "blk_mq_tag_to_rq" },
	{ 0x1000e51, "schedule" },
	{ 0xe27a088b, "__invalidate_device" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xc6cbbc89, "capable" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x6cfdd889, "blk_queue_rq_timeout" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x1f06413a, "netlink_capable" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x6d3a7125, "iov_iter_advance" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x400a1949, "iov_iter_bvec" },
	{ 0x54fb073a, "blk_mq_unique_tag" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe2dbbda1, "blk_mq_start_request" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x52526626, "device_remove_file" },
	{ 0xd040e01a, "module_put" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xae72e39f, "debugfs_remove_recursive" },
	{ 0xf64599c3, "blk_cleanup_queue" },
	{ 0x8767fa8d, "del_gendisk" },
	{ 0xaa55ac25, "refcount_dec_and_mutex_lock" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x2331b115, "sk_set_memalloc" },
	{ 0x2bdabd91, "debugfs_create_u32" },
	{ 0x87387c0, "debugfs_create_u64" },
	{ 0xd0d18614, "debugfs_create_file" },
	{ 0x9ed247d4, "debugfs_create_dir" },
	{ 0x5a8371d5, "device_create_file" },
	{ 0x8fa97ede, "blk_queue_write_cache" },
	{ 0xd42ddf48, "set_disk_ro" },
	{ 0xd16c7c5c, "blk_mq_update_nr_hw_queues" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x8263a5ba, "_dev_warn" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd755c8f5, "_dev_info" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8ad45a1d, "kernel_sock_shutdown" },
	{ 0xb94bfeb5, "put_disk" },
	{ 0x61275678, "idr_remove" },
	{ 0x7e49316f, "blk_mq_free_tag_set" },
	{ 0xbdcac414, "device_add_disk" },
	{ 0xb457b288, "blk_queue_max_hw_sectors" },
	{ 0x7c6a6ac5, "blk_queue_max_segments" },
	{ 0x2bacf27a, "blk_queue_max_segment_size" },
	{ 0x40be03b5, "blk_queue_flag_clear" },
	{ 0x3807d1c8, "blk_queue_flag_set" },
	{ 0x6581ea60, "blk_mq_init_queue" },
	{ 0x7167781b, "blk_mq_alloc_tag_set" },
	{ 0x5f3fd789, "idr_alloc" },
	{ 0xa6a76ba3, "__alloc_disk_node" },
	{ 0xc31f3952, "blk_mq_requeue_request" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2e8499c5, "blk_mq_end_request" },
	{ 0xf0904f2d, "seq_puts" },
	{ 0x7440cb51, "seq_printf" },
	{ 0x7f8a9562, "single_open" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xb859f38b, "krealloc" },
	{ 0xca3d5972, "blk_queue_max_discard_sectors" },
	{ 0x4c9042d2, "kobject_uevent" },
	{ 0xa20386f5, "bdput" },
	{ 0x23ca38de, "set_blocksize" },
	{ 0xe7a36b6d, "bd_set_size" },
	{ 0xe8c4c7d3, "blk_queue_physical_block_size" },
	{ 0x8bec0790, "blk_queue_logical_block_size" },
	{ 0x3741cdab, "bdget_disk" },
	{ 0x42b41bb0, "try_module_get" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x80fc0c5, "kmem_cache_alloc_trace" },
	{ 0xdf539367, "kmalloc_caches" },
	{ 0x55f259fb, "blk_mq_unquiesce_queue" },
	{ 0x6a882b85, "blk_mq_tagset_busy_iter" },
	{ 0xd8201620, "blk_mq_quiesce_queue" },
	{ 0x91715312, "sprintf" },
	{ 0xce6c0a2c, "fput" },
	{ 0xc65c261a, "sock_no_shutdown" },
	{ 0xcf05465c, "sockfd_lookup" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x37a0cba, "kfree" },
	{ 0x43771e5b, "netlink_broadcast" },
	{ 0x341c6c58, "init_net" },
	{ 0x2b626e72, "iov_iter_kvec" },
	{ 0xa1633992, "_dev_err" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x9f6e2fd7, "sock_recvmsg" },
	{ 0x6652d210, "sock_sendmsg" },
	{ 0x74c70efb, "blk_mq_complete_request" },
	{ 0x4fc0f0bd, "kfree_skb" },
	{ 0x4d4be347, "idr_for_each" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x486d4ca4, "netlink_unicast" },
	{ 0xaf38e081, "idr_find" },
	{ 0x4ecc241c, "genlmsg_put" },
	{ 0x4b850fd, "__alloc_skb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68183b3b, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "751087AC12F96BE4FD061B3");
