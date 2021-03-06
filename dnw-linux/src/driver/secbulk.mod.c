#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x96cec1da, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe1003072, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x43cfa983, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc6a75850, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x7a3a179f, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0xb9901c6e, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x834e5caa, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xe8025b94, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0xa4d5abf7, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x643c4c76, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xff2e0719, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7819011c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbbfdf7b5, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AC766F80A54E79ABAAC5B14");
