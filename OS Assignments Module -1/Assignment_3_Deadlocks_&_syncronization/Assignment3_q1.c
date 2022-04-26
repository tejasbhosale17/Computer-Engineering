#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<stdlib.h>
#include<unistd.h>

sem_t full,empty;
pthread_mutex_t mutex;
int buffer[5];
int count=0;

void *producer(void *arg)
{
	long int num = (long int)arg;
	sem_wait(&empty);
	pthread_mutex_lock(&mutex);
	buffer[count]=rand()%10;
	printf("\nproducer: %ld producer:%d",num+1,buffer[count]);
	count++;
	sleep(1);
	pthread_mutex_unlock(&mutex);
	sem_post(&full);
}

void *consumer(void *arg)
{
	long int num = (long int)arg;
	sem_wait(&full);
	pthread_mutex_lock(&mutex);
	count--;
	printf("\nconsumer: %ld consumer:%d",num+1,buffer[count]);
	sleep(1);
	pthread_mutex_unlock(&mutex);
	sem_post(&empty);
}

int main()
{
	int np,nc;
	pthread_t p[10],c[10];
	unsigned long int i,j,k,l;
	printf("Enter the number of producer and number of consumer\n");
	scanf("%d %d",&np,&nc);
	sem_init(&empty,0,5);
	sem_init(&full,0,0);pthread_mutex_init(&mutex,NULL);
	for(i=0;i<np;i++)
		pthread_create(&p[i],NULL, producer, (void *)i);
	for(j=0;j<nc;j++)
		pthread_create(&c[j],NULL, consumer, (void *)j);
	for(k=0;k<np;k++)
		pthread_join(p[k],NULL);
	for(l=0;l<nc;l++)
		pthread_join(c[l],NULL);
	return 0;
}


