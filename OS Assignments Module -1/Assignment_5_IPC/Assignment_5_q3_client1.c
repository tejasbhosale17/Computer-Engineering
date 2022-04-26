
#include<stdio.h>
#include<stdlib.h>
#include<sys/shm.h>
#include<unistd.h>
#include<string.h>

int main()
{
	void *shmp;
	char buff[100];
	int shmid;
	shmid=shmget((key_t)2546, 1024, 0644);
	printf("Key of shared memory is %d\n",shmid);
	shmp=shmat(shmid,NULL,0);
	printf("Process attached at %p\n",shmp);
	printf("Data read from shared memory is: %s\n",(char*)shmp);
	
	if(shmdt(shmp)==-1)
	{
	perror("Shared memory Detached\n");
	return 1;
	}
}


