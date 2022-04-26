#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	int ref = fork();
	if(ref > 0)
	{
		printf("Parent has completed its Work!!\n");
	}
	else
	{
		sleep(10);
		printf("Child has completed its Work!!\n");
		exit(0);
	}
return 0;
}
