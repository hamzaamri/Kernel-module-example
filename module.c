#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

MODULE_DESCRIPTION =("Develop a simple example kernel module");
MODULE_AUTHOR =("Hamza Amri");
MODULE_LICENSE =("GPL");

static int __init Module_Init(void){
	pr_debug("Load  module\n");
	return 0;
}

static int __exit Module_Exit(void){
	pr_debug("unload module\n");
	
}

module_init(Module_Init);
Module_exit(Module_Exit);

