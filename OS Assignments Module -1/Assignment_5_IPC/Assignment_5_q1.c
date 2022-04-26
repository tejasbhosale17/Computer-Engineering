
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
pid_t ref;
pid_t ret;
int fds[2];
int status;
char writemessages[2][40]={"HI"};
char readmessage[20];
int tds[2];
int tstatus;
char writemsg[2][40]={"Hello"};
char readmsg[20];
tstatus=pipe(tds);
status=pipe(fds);
if(status == -1)
{
	printf("unable to create pipe\n");
	return 1;
}
else
{	
	if(tstatus == -1)
	{
		printf("unable to create pipe\n");
		return 1;
	}
	else
	{
		ref=fork();
		if(ref == 0)
		{
		close(tds[0]);
		printf("reading from Child Process: %s\n",writemsg[0]);
		write(tds[1], writemsg[0], sizeof(writemsg[0]));
		close(tds[1]);
		read(tds[0], readmsg, sizeof(readmsg));
		//printf("reading from Child Process: %c\n",readmsg);
		close(tds[0]);
		}
		else
		{
		close(fds[0]);
		printf("reading from Parent Process: %s\n",writemessages[0]);
		write(fds[1], writemessages[0], sizeof(writemessages[0]));
		close(fds[1]);
		read(fds[0], readmessage, sizeof(readmessage));
		//printf("reading from Parent Process: %c\n",readmessage);
		close(fds[0]);
		}
	}
}
	

	return 0;

}
