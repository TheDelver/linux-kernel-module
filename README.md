# linux-kernel-module
A foundational Linux Kernel Module
Kernel modules allow the OS to change the kernel settings while the OS is running.
I tried to add a module to change the reporting system of kernel, this means I have created a rootkit to control the ring 0.
Rootkits are not inherently destructive, rootkits help us to stay in stealth mode, and change the reality of things which happen in the system.In addition, this module is not meant to be used for harmful purposes.

## Prerequisites
To compile this module, you need a Linux environment (like Ubuntu) and the standard build tools:
```bash
sudo apt update
sudo apt install build-essential linux-headers-$(uname -r)
```
This is how you can build and use this module :
1. compile the files with ```make``` command.
   
2. load the module into kernel(ring 0) with using ```sudo insmod rootkit.ko``` command.
(make sure to be in the same folder as the files are)

3. you can verify execution with using ```dmesg | tail -n 5``` command.
now the module has been planted inside the kernel, you can check how it can be hidden.

4. make sure to unload the module and clean the directory with using ```sudo rmmod rootkit && make clean``` command.

***developed by Delver***
