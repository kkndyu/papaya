#include<linux/NR_syscall.h>

extern void (*sys_execve)(void);
extern void (*sys_fork)(void);
extern void (*sys_printf)(void);
extern void (*sys_exit)(void);
extern void (*sys_wait4)(void);

#define ENTRY(name) [NR_ ## name] = (unsigned long)&sys_ ## name


unsigned long func_table[255] =
{
	ENTRY(fork),
	ENTRY(execve),
	ENTRY(printf),
	ENTRY(exit),
	ENTRY(wait4),
};


