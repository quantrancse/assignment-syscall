# System Call

This report explains the steps to add a new system call that provides information about the memory layout of a given process. The strategy is modifying the Linux kernel to add our new system call and deploying the kernel on the virtual machine. Toward the finish of the report, a new Linux kernel had compiled included the new system call and ready to deploy on any machine.

### Note
+ Read more in report.pdf
+ For the Linux Kernel Module:
  ```bash
  $ sudo make all
  $ sudo insmod ./testmem_module.ko
  $ sudo rmmod testmem_module
  ```
+ Read the system log:
  ```bash
  $ dmesg
  ```

## Authors
* **Tran Trung Quan** - *Student at Ho Chi Minh City University of Technology* - [Quan Tran](https://quantrancse.github.io)
