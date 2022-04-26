#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<pthread.h>
#define NUM_THREADS 1 
void *sum(void *threadid)
{
	int n;
	int sum=0;
	printf("Enter size of Array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of the array:\n");
	for(int i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	for(int j=0;j<n;j++)
		{
		sum=sum+arr[j];
		}
	printf("Sum of the array is= %d\n",sum);
}


int main()
{
pthread_t threads[NUM_THREADS];
int rc;
for(int i=0;i<NUM_THREADS;i++)
{
	rc=pthread_create(&(threads[i]), NULL, sum, (void *)i);
	if(rc)
	{
		printf("ERROR\n",rc);
		exit(-1);
	}
}
pthread_exit(NULL);

}
