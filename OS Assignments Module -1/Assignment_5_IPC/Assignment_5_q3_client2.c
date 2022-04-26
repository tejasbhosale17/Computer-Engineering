#include<stdio.h>
#include<stdlib.h>
#include<sys/shm.h>
#include<unistd.h>
#include<string.h>
 int main()
 {
 	void *shmps;
 	char buff[100];
 	int shmid;
 	shmid=shmget((key_t)2546,1024, 0644);
 	printf("Shared memory key is %d\n",shmid);
 	shmps=shmat(shmid,NULL,0);
 	printf("Process attached at %p\n",shmps);
 	printf("Data from Shared memory is: %s\n",(char*)shmps);
 	
 	if(shmdt(shmps)==-1)
 	{
 	printf("Shared memory Detached\n");
 	return 1;
 	}
 }
 
 
 
 
