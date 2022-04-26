#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
void main()
{
	printf("the process id is %d\n",getpid());
	raise(SIGTERM);
	printf("the parent process id is %d\n",getppid());
}
