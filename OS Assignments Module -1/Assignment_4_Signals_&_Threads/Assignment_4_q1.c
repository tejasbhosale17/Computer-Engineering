#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void main()
{
pid_t ref;
ref=fork();
	if(ref ==0)
	{
	printf("Child going to sleep for 1 sec\n");
	sleep(1);
	pid_t P=getppid();
	kill(P, SIGUSR1);
	}
	else
	{
		for(int i=0;i<2000;i++)
		{
			
			printf("%d\n",i);
			
		}
	}
	return 0;
}
