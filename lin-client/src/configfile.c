#include"configfile.h"

int create_configfile(char path[256])
{
	puts("Creating to create config.");
	FILE *config_file;
	config_file = fopen("btsoot.conf", "w");
	fprintf(config_file, "Testtestetetstettsst\n");
	fclose(config_file);
	return 0;
}
