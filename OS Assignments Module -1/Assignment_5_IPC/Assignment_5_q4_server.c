#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXSIZE 128
struct msgbuf{
	long mtype;
	char mtext[MAXSIZE];
};

void main()
{
	int msqid;
	int msgflg = IPC_CREAT | 0644;
	key_t key;
	struct msgbuf sbuf;
	size_t buflen;key = 4321;
	if ((msqid = msgget(key, msgflg )) < 0)
	{ 
	key;
	perror("msgget");
	exit(1);
	}
	sbuf.mtype = 1;
	printf("Enter message for the First Process: : ");
	scanf("%[^\n]",sbuf.mtext);
	getchar();
	buflen = strlen(sbuf.mtext) + 1 ;
	if (msgsnd(msqid, &sbuf, buflen, IPC_NOWAIT) < 0)
	{
	printf ("%d, %ld, %s, %ld\n", msqid, sbuf.mtype, sbuf.mtext, buflen);
	perror("msgsnd");
	exit(1);
	}
	else
	printf("Message Sent\n");
	sbuf.mtype = 2;
	printf("Enter message for the Second Process: : ");
	scanf("%[^\n]",sbuf.mtext);
	getchar();
	buflen = strlen(sbuf.mtext) + 1 ;
	if (msgsnd(msqid, &sbuf, buflen, IPC_NOWAIT) < 0){
	printf ("%d, %ld, %s, %ld\n", msqid, sbuf.mtype, sbuf.mtext, buflen);
	perror("msgsnd");
	exit(1);
	}
	else
	printf("Message Sent\n");
	exit(0);
}
