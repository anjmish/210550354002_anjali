
#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL');
MODULE_AUTHOR("ANJALI");

module_param(intvar,int,S_IRUGO);

static int param_init(void)
{
printk(KERN_ALERT "the value of intvar is:%d",intvar);
}

static void param_exit(void)
{
printk(KERN_ALERT "good bye");
}

module_init(param_init);
module_exit(param_exit);
