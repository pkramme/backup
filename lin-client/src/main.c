static char version[] = "btsoot 0.1.0";
static char startmessage[] = "BTSOOT\n";
#include<stdio.h>
#include<string.h>
#include<unistd.h>

#include"db.h"
#include"getch/getch.h"

int main(int argc, char **argv)
{
	int argindex = 0;
	int create_conf_file = 0;
	printf("%s", startmessage);
	if(argc >= 2)
	{
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
	}
	else
	{
		puts("You started BTSOOT without arguments.");
		if(access("btsoot.conf", F_OK) != -1)
		{
			puts("Configfile found!");
		}
		else
		{
			puts("It seems like this is the first start.");
			puts("Shall i create a config file? (Y/n)");
			create_conf_file = getch();
			switch(create_conf_file)
			{
				case 'n':
					puts("I will NOT create a config file.");
					puts("You should create one by yourself.");
					return 1;
				default:
					puts("Proceeding to create config file.");
					/*config file creator.*/
			}
		}
	}
	return 0;
}

