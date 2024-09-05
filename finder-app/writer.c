#include <syslog.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	openlog("writer", LOG_PID | LOG_CONS, LOG_USER);
	char *path = argv[1];
	char *content = argv[2];

	FILE *file = fopen(path,"w");
	
	if(argc < 2)
	{
		return 1;
		exit;
	}


	if(file == NULL)
	{
		syslog(LOG_ERR, "Unable to open file : %s",path);	
		return 1;
		exit ;
	}				

	fprintf(file,"%s", content);
	syslog(LOG_INFO, "writing %s to %s", content,path);
	fclose(file);
	closelog();
	return 0;
}

