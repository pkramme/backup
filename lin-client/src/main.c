static char version[] = "btsoot 0.1.0";
static char startmessage[] = "Linux Backup Client";
#include<stdio.h>
#include<string.h>
#include"db.h"

int main(int argc, char **argv)
{
	int argindex = 0;
	printf("%s", startmessage);
	for(argindex = 1; argindex < argc; argindex++)
	{
		if(strcmp(argv[argindex], "version") == 0)
		{
			printf("%s", version);
		}
		else if(strcmp(argv[argindex], "new") == 0)
		{
			puts("This should create a new block");
			printf("Creating new block with name '%s'\n", argv[argindex + 1]);
			++argindex;
			write_database(argv[argindex + 1]);
		}
		else if(strcmp(argv[argindex], "create") == 0)
		{
			if(create_database(argv[argindex + 1]))
			{
				puts("Cannot open file.");
			}
			++argindex;
		}
		else
		{
			printf("Command '%s' not regognized\n", argv[argindex]);
		}
	}
	return 0;
}

