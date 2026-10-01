#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Delver");
MODULE_DESCRIPTION("First Kernel Module Test");

static int __init my_module_init(void) {
    printk(KERN_INFO "Delver: Module loaded into Ring 0 successfully!\n");
    return 0;
}

static void __exit my_module_exit(void) {
    printk(KERN_INFO "Delver: Module removed from kernel.\n");
}

module_init(my_module_init);
module_exit(my_module_exit);