#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int global1=2;
int main()
{		
	pid_t ref=fork();
	wait (0);
	if (ref == 0)
	{
		printf("Child process:\n");
		printf("pid of child %d\n",getpid());
		printf("ppid of child %d\n",getppid());
		global1=global1+7;
		printf("value of global variable in child is =%d\n",global1);
		wait (0);
	}
	else
	{
		wait (3);
		printf("Parent process:\n");
		printf("pid of parent %d\n",getpid());
		printf("value of the global variable is= %d\n",global1);
	}
	return 0;
}

