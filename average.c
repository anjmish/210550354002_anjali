#include<linux/init.h>
#include<linux/module.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR(ANJALI);

static int one=1;
static int two=2;

static int add_init(void)
{
printk(KERN_ALERT "add result is :%d,add(one,two)");
return 0;
}
static void add_exit(void)
{
printk(KERN_ALERT "BYE");
}
module_init(hello_init);
module_exit(hello_exit);
