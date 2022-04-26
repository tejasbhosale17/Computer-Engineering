#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#define FIFO_FILE "fifo_twoway"
int main()
{
	int fds, read_bytes, strlength;
	char writemessage[40];
	char readmessage[40];
	mkfifo(FIFO_FILE, 0666);
	printf("CLIENT: Send Message:\n");
	while(1)
	{
		fds = open(FIFO_FILE, O_CREAT|O_WRONLY);
		printf("Enter String: ");
		fgets(writemessage, sizeof(writemessage), stdin);
		strlength = strlen(writemessage);
		readmessage[strlength -1] = '\0';
		write(fds, writemessage, strlen(writemessage));
		close(fds);
		fds = open(FIFO_FILE, O_RDONLY);
		read_bytes=read(fds,readmessage,sizeof(readmessage));
		readmessage[read_bytes] ='\0';
		printf("CLIENT: Recived String: %s\n",readmessage);
		close(fds);
	}
		
		return 0;

}
