
#undef __KERNEL__
#define __KERNEL__

#undef __MODULE__
#define __MODULE__

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init config_init(void)
{
	printk(KERN_INFO "config_init executed with success\n");
	return 0;
}

static void __exit config_exit(void)
{
	printk(KERN_INFO "config_exit executed with success\n");
	return;
}

module_init(config_init);
module_exit(config_exit);
