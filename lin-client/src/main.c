static char version[] = "btsoot 0.1.0";
#include<stdio.h>
#include<string.h>
#include<unistd.h>

#include"db.h"
#include"getch/getch.h"
#include"configfile.h"

int main(int argc, char **argv)
{
	int argindex = 0;
	int create_conf_file = 0;
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
			else if(strcmp(argv[argindex], "create_database") == 0)
			{
				if(argv[argindex + 1] == NULL)
				{
					puts("You didn't name a file name.");
					puts("Using default name: 'btsoot_database'");
					if(create_database_new("btsoot_database"))
					{
						puts("Cannot open file.");
					}
					return 1;
				}
				else
				{
					if(create_database_new(argv[argindex + 1]))
					{
						puts("Cannot open file.");
					}
					++argindex;
				}
			}
			else if(strcmp(argv[argindex], "create_config") == 0)
			{
				if(access("btsoot.conf", F_OK) != -1)
				{
					puts("There is a config file.");
					puts("Do you want to override it?");
					switch(getch())
					{
						case 'y':
							puts("Overriding configfile.");
							create_configfile(NULL);
						default:
							puts("Aborting");
							return 0;
					}
				}
				else
				{
					puts("Creating config file");
					create_configfile("Wheeee");
				}
			}
			else if(strcmp(argv[argindex], "help") == 0)
			{
				printf("USAGE: %s command\n", argv[0]);
				puts("create_config");
				puts("create_database");
				puts("new");
				puts("version");
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
					create_configfile("wheeeithinkthishasanarg");
			}
		}
	}
	return 0;
}

