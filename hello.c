#include<linux/init.h>
#include<linux/module.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR(ANJALI);

static int hello_init(void)
{
printk(KERN_ALERT "hello");
return 0;
}
static void hello_exit(void)
{
printk(KERN_ALERT "BYE");
}
module_init(hello_init);
module_exit(hello_exit);
