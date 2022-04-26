#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<pthread.h>
#define NUM_THREADS 2 
void *hello(void *threadid)
{
	printf("Helo World! , This a thread # %ld\n",pthread_self());
	pthread_exit(NULL);
}

int main()
{
pthread_t threads[NUM_THREADS];
int rc;
while(1)
{
	rc=pthread_create(&(threads[0]), NULL, hello, (void *)0);
	if(rc)
	{
		printf("ERROR\n",rc);
		exit(-1);
	}
}
pthread_exit(NULL);

}
