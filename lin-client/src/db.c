#include"db.h"

struct database
{
	int create_database(char path[256]);
};
	
int create_database(char write[256])
{
	FILE *database;
	database = fopen("backupdatabase.csv", "a+");
	fprintf(database, "location,sha,server\n");
	
	fclose(database);
	return 0;
}

