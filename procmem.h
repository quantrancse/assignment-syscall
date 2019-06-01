#ifndef _PROC_MEM_H_
#define _PROC_MEM_H_
#include <unistd.h>
#include <sys/types.h>

struct proc_segs
{
  unsigned long studentID;
  unsigned long start_code;
  unsigned long end_code;
  unsigned long start_data;
  unsigned long end_data;
  unsigned long start_heap;
  unsigned long end_heap;
  unsigned long start_stack;
};

long sys_procmem(pid_t pid, struct proc_segs *info)
# endif // _PROC_MEM_H