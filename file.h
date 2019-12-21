#include <stdio.h>

struct File;
typedef struct File File;

struct File
{
	FILE* __file;

	int (*is_open)(File*);
	void (*open)(File*, const char*);

	void (*printf)(File*,const char*, ...);
	void (*scanf)(File*,const char*, ...);
};

File new_File(const char* filename);

