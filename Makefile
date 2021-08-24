
obj-m:=q3.o
KERNELDIR= /lib/modules/$(shell uname -r)/build/
all:
   make - C $(KDIR) M =$(PWD) modules
clean:
   make -C $(KDIR) M=$(PWD) clean
~                                  
