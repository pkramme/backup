static char startmessage[] = "Linux Backup Client";
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int argiterator = 0;
	puts(startmessage);
	for(argiterator = 0; argiterator < argc; argiterator++)
	{
		if(strcmp(argv[argiterator], "version") == 0)
		{
			puts("This should display version");
		}
		else if(strcmp(argv[argiterator], "new") == 0)
		{
			puts("This should create a new block");
			printf("Creating new block with name '%s'\n", argv[argiterator + 1]);
		}
		else
		{
			printf("Command '%s' not regognized\n", argv[argiterator]);
		}
	}
	return 0;
}

