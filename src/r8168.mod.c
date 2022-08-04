#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7d0b00ef, "module_layout" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcacb5388, "netdev_info" },
	{ 0x2fd35eef, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcf90bb7a, "ethtool_op_get_ts_info" },
	{ 0x237345af, "__skb_gso_segment" },
	{ 0x6674f78, "pci_write_config_word" },
	{ 0xfae8b20c, "single_open" },
	{ 0xa6573e, "_dev_printk" },
	{ 0xe40769c1, "param_ops_int" },
	{ 0x7f3c618d, "napi_disable" },
	{ 0x364769c, "pci_read_config_byte" },
	{ 0xcc8eae51, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xef274796, "dma_set_mask" },
	{ 0x85e13e26, "single_release" },
	{ 0xed0e5e31, "pci_get_slot" },
	{ 0x8aa96180, "seq_puts" },
	{ 0x922a9af3, "pci_disable_device" },
	{ 0x9a878c91, "netif_carrier_on" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbcf8689b, "seq_printf" },
	{ 0x3ef77a33, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x730c26fd, "pci_write_config_byte" },
	{ 0xe3d5c803, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x839b3fc0, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x65241cfb, "pci_enable_wake" },
	{ 0xa461ace3, "dma_free_attrs" },
	{ 0x8ad656f9, "seq_read" },
	{ 0x4070667f, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6d85426e, "__netdev_alloc_skb" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xb1348599, "PDE_DATA" },
	{ 0xe6ba20b3, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xb6fb0739, "dma_sync_single_for_cpu" },
	{ 0x9d6c7bc, "proc_mkdir" },
	{ 0xdfbf489c, "netif_tx_wake_queue" },
	{ 0x6dee8807, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x499f4d08, "register_netdev" },
	{ 0x4eebd63e, "seq_putc" },
	{ 0xf4b1d2b5, "napi_enable" },
	{ 0x6bf42ace, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4e778f9b, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa1f9c13a, "proc_mkdir_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x679c7d84, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xd24e66c5, "init_net" },
	{ 0xdc88f81d, "_dev_err" },
	{ 0x9812dd97, "pci_enable_msi" },
	{ 0xcca6e9d7, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x83ba6d5e, "pci_find_capability" },
	{ 0x30830116, "pci_set_mwi" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0xea49a720, "netif_device_attach" },
	{ 0x4498727, "napi_gro_receive" },
	{ 0xcc656c0a, "_dev_info" },
	{ 0x8d75abd7, "pci_disable_link_state" },
	{ 0x6ae1f485, "netif_device_detach" },
	{ 0xdf2ab07d, "__napi_schedule" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x74af44e7, "skb_checksum_help" },
	{ 0x92997ed8, "_printk" },
	{ 0x368ba686, "napi_complete_done" },
	{ 0x568cef8c, "dma_map_page_attrs" },
	{ 0x33e82ef1, "pci_read_config_dword" },
	{ 0x6cff0656, "eth_type_trans" },
	{ 0x24432c73, "proc_get_parent_data" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x626e545d, "dev_driver_string" },
	{ 0xadff157b, "pskb_expand_head" },
	{ 0xa67283dc, "netdev_err" },
	{ 0xc8a51515, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa70e04ee, "__netif_napi_del" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xceaca4b2, "pci_set_power_state" },
	{ 0x2ab1b057, "remove_proc_subtree" },
	{ 0xaa7a649e, "proc_create_data" },
	{ 0x5294ed78, "pci_clear_mwi" },
	{ 0x6169f520, "seq_lseek" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3c10ccae, "pci_request_regions" },
	{ 0x25c95600, "pci_disable_msi" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xedc03953, "iounmap" },
	{ 0x68108fe4, "dma_sync_single_for_device" },
	{ 0x852a4009, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0xecd02d2, "dma_unmap_page_attrs" },
	{ 0x676d8d3, "unregister_netdev" },
	{ 0x501eadda, "pci_choose_state" },
	{ 0x379c8f50, "consume_skb" },
	{ 0xce49073, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x27f20d51, "__napi_alloc_skb" },
	{ 0x21ab08da, "skb_tstamp_tx" },
	{ 0x2eefda67, "skb_put" },
	{ 0x8e7227d6, "pci_enable_device" },
	{ 0xb92977c0, "pci_wake_from_d3" },
	{ 0x454cf577, "param_ops_ulong" },
	{ 0xf24ac6c6, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x47ce1807, "skb_copy_bits" },
	{ 0xd2e14afb, "__skb_pad" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7aa82eea, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xebb823e7, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");

MODULE_INFO(srcversion, "91B21E53A54C64057FABFA0");
