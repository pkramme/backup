#include<stdio.h>
#include<string.h>

int main(void)
{
	char input[256] = "hi.";
	puts("BTSOOT version 0.1.0");
	for (;;)
	{
		printf(">");
		scanf_s("%s", input, sizeof(input));
		if (strcmp(input, "help") == 0)
		{
			puts("This should display help!");
		}
		else if (strcmp(input, "quit") == 0)
		{
			return 0;
		}
		else if (strcmp(input, "exit") == 0)
		{
			return 0;
		}
		else
		{
			printf("Command '%s' not recognized.\n", input);
		}
	}
	puts("EXITING.");
	return 0;
}
