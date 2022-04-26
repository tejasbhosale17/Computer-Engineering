#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
void fork2()
{
	printf("L0\n");
	int ref = fork();
	wait (0);
	if (ref == 0)
	{
	printf("Bye\n");
	}
	else
	{
		printf("L1\n");
		int ref = fork();
		wait (0);
		if (ref == 0)
		{
			printf("Bye\n");
		}
		else
		{
			printf("L2\n");
			fork();
			wait (0);
			printf("Bye\n");
		}
	}

}



void main()
{
	fork2();
}
