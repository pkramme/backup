#ifndef DB_H_INCLUDED
#define DB_H_INCLUDED

#include<stdio.h>
#include<fcntl.h>

int create_database(char path[256]);
int write_database(char write[256]);

#endif
