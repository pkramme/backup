#ifndef DB_H_INCLUDED
#define DB_H_INCLUDED

#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>

int create_database(char path[256]);
int write_database(char write[256]);
int create_database_new(char path[256]);

#endif
