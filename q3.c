nclude<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL');
MODULE_AUTHOR("ANJALI");

module_param(intvar1,int,S_IRUGO);
module_param(intvar2,int,S_IRUGO);
module_param(charvar,char,S_IRUGO);

static int add(int a,intb)
{
return a+b;
}

static int param_init(void)
{
if(charvar)
{
printk(KERN_ALERT "sum of two no:%d",add(intvar1,intvar2));
}

static void param_exit(void)
{
printk(KERN_ALERT "good bye");
}

module_init(param_init);
module_exit(param_exit);
