#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>

static int pid = 1;

static int __init procmem_init(void)
{
struct task_struct *task;
printk(KERN_INFO "Starting kernel module!\n");
for_each_process(task){
if (task->pid == pid) {
printk(KERN_INFO "Code Segment start = 0x%lx, end = 0x%lx\n", task->mm->start_code, task->mm->end_code);
printk(KERN_INFO "Data Segment start = 0x%lx, end = 0x%lx\n", task->mm->start_data, task->mm->end_data);
printk(KERN_INFO "Stack Segment start = 0x%lx\n", task->mm->start_stack);
}
}
return 0;
}

static void __exit procmem_cleanup(void)
{
printk(KERN_INFO "Clearning up module.\n");
}

module_init(procmem_init);
module_exit(procmem_cleanup);
module_param(pid, int, 0);
