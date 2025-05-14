#include<studio.h>
#include<unistd.h>
#include <linux/kernel.h>
#include <linux/sched.h> 
#include <linux/syscalls.h>

SYSCALL_DEFINE0(getpid) {
    return current->pid;
}
int main()
{
pid_tpid = getpid();
printf("the process ID is %d\n",pid);


reeturn 0;
}
