#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x7799aa3d, "module_layout" },
	{ 0xa2c56c31, "param_ops_ulong" },
	{ 0x37a0cba, "kfree" },
	{ 0x86bfe20c, "kmem_cache_alloc_trace" },
	{ 0x972d523a, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0x8b9200fd, "lookup_address" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "213236C1BD5CFD354390F44");
