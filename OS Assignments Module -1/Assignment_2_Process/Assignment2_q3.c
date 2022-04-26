#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	pid_t child_pid = fork();
	wait (0);
	if (child_pid == 0)
	{
		printf("Process is in zombie state\n");
		exit(0);
	}
	else
	{
		sleep(30);
	}
return 0;
}
