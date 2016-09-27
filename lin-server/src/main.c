#include<stdio.h>

int main(int argc, char **argv)
{
	puts("BTSOOT SERVER");
	if(argc < 2)
	{
		perror("Not enough arguments given.");
		return 1;
	}
	
	return 0;
}
