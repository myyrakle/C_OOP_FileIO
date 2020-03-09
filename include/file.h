#include <stdio.h>
#include <stdbool.h>

struct File;
typedef struct File File;

struct File
{
	FILE* __file;

	bool (*is_open)(const File*);
	void (*open)(File*, const char*);
	void (*close)(File*);

	void (*printf)(File*,const char*, ...);
	void (*scanf)(File*,const char*, ...);

	void (*get_line)(File*, char*);
};

File new_File(const char*);

