#include"db.h"
	
int create_database(char path[256])
{
	FILE *database;
	database = fopen(path, "a+");
	fprintf(database, "location,sha,server\n");	
	fclose(database);
	return 0;
}

int write_database(char write[256])
{
	FILE *database;
	database = fopen("backupdatabase", "w");
	fclose(database);
	return 0;
}

int create_database_new(char path[256])
{
	int fd;
	/*int creat(char *name, int perms);*/
	if(fd = creat("btsootdb", "777") == -1)
	{
		puts("DATABASE CREATION FAIL.");
		return 1;
	}
	return 0;
}	
	
