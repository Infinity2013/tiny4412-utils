obj-m := secbulk.o  
module-objs := secbulk.o
KERNEL_DIR := /lib/modules/$(shell uname -r)/build  
PWD := $(shell pwd)  
all:
	make -C $(KERNEL_DIR) SUBDIRS=$(PWD) modules  
clean:
	rm -f *.ko *.o *.mod.c *.symvers *.order
