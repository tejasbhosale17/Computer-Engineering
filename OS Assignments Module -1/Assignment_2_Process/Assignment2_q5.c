#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	int x =fork();
	if( x== 0)
	{
		char *argv[2] = {"-ef"};
		execv("/bin/ps", argv);
	}	
return 0;	
}
