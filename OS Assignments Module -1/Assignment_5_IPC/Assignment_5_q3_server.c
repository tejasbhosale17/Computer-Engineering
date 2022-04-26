#include<sys/ipc.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/shm.h>
#include<unistd.h>

int main()
{
int shmid;
char msg[100];
void *shmp;

shmid= shmget((key_t)2546, 1024, 0644|IPC_CREAT);
printf("Key to shared memory is: %d\n",shmid);
if(shmid==-1)
{
perror("Shared Memory");
return 1;
}

shmp=shmat(shmid,NULL,0);
if(shmid==(void*)-1)
{
	perror("Shared memory attach");
	return 1;
}

printf("Process Attached at %p\n",shmp);
printf("Enter data into Shared memory\n");
read(0,msg,100);
strcpy(shmp,msg);
printf("You wrote: %s\n",(char*)shmp);

if(shmdt(shmp)==-1)
{
	perror("shmdt");
	return 1;
}
printf("Writing Process:Complete\n");
return 0;

}

