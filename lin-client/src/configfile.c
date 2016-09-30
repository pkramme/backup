#include"configfile.h"

int create_configfile(char path[256])
{
	FILE *config_file;
	/*
	puts("Creating to create config.");
	*/
	config_file = fopen("btsoot.conf", "w");
	fprintf(config_file, "#btsoot config file\n");
	fclose(config_file);
	return 0;
}
