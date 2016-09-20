#include"db.h"

int write_to_database(char write[256])
{
	FILE *database;
	database = fopen("backupdatabase.csv", "a+");
	fprintf(database, "location,sha,server\n");
	
	fclose(database);
	return 0;
}

