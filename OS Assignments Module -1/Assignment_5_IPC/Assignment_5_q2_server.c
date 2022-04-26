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
	int fd1;
	int read_bytes;
	char readmessage[40];
	char writemessage[40];
	mkfifo(FIFO_FILE, S_IFIFO|0640);
	printf("SERVER: \n");
	while(1)
	{
		fd1 = open(FIFO_FILE, O_RDONLY);
		read_bytes= read(fd1, readmessage, sizeof(readmessage));
		readmessage[read_bytes] = '\0';
		printf("SERVER: Recived string: %s \n",readmessage);
		close(fd1);
		fd1 = open(FIFO_FILE, O_WRONLY);
		fgets(writemessage, sizeof(writemessage),stdin);
		//printf("SERVER: SEnding reply:\"%s\".",readmessage);
		write(fd1, writemessage, sizeof (writemessage));
		sleep(2);
		close(fd1);
	}
	
	return 0;
}
