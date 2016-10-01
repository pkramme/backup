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

#ifdef ALTERNATIVE
int create_database_new(char path[256])
{
	int fd;
	char buffer[] = "path,server"; /*BUFSIZ*/
	/*int creat(char *name, int perms);*/
	if((fd = open("btsootdb", O_WRONLY|O_CREAT|O_TRUNC, S_IRUSR | S_IWUSR)) == -1)
	{
		puts("DATABASE CREATION FAIL.");
		return 1;
	}
	write(fd, buffer, strlen(buffer));
	return 0;
}	
#endif

