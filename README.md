This example demonstrates a basic workflow for building and managing a Linux kernel module.

Build the Kernel Module:

    make  

This command compiles the module.c source file into a loadable kernel object (module.ko).

Insert the Module into the Kernel:

    sudo insmod module.ko

This loads the module.ko into the running Linux kernel.

Check if the Module is Loaded:

    lsmod | grep module

Verifies that the module is active.

View Kernel Logs (Optional):

    dmesg | tail

Displays messages from the kernel, including output from your module.


if you want to remove the module then do:
-------

    sudo rmmod module

This unloads the module from the kernel.

Clean Build Files:

    make clean

This deletes all generated build artifacts (.o, .ko, .mod.c, etc.) and resets the working directory.
