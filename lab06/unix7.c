#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define logfile "logfile.log"

int daemon_init(void)
{
	pid_t pid;

	if( (pid = fork() ) < 0) return(-1);

	else if(pid !=0)
	{
		printf("server pid=%d\n", pid);
		exit(0);
	}

	setsid();
	chdir("/");
	umask(0);

	return(0);
}

int main()
{
	FILE *log;
	pid_t pid;

	log = fopen(logfile, "w+");
	if(!log)
	{
		fprintf(stderr, "Cannot create log file %s\n", logfile);
		exit(1);
	}

	daemon_init();

	pid = getpid();
	fprintf(log, "My pid is %d\n", pid);
	fflush(log);

	while(1)
	{
		sleep(100);
		fprintf(log, "I have nothing to do?\n");
		fflush(log);
	}
}
